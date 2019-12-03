///Number chain

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 50000

int compare (const void * a, const void * b)
{
  return ( *(char*)b - *(char*)a );
}

int mysearch(long long i,long long *judge, long long j)
{
    long low=1,mid,high;
    high=j-1;
    mid=(low+high)/2;
    while(low<=high)
    {
        if(i<judge[mid])
          high=mid-1;
        else if(i>judge[mid])
          low=mid+1;
        else 
          return 1;
        
        mid=(low+high)/2;
    }
    return 0;
}


int main ()
{
    long long i,j,k,x,prnt=0;
    int xa,ya,za;
    char tempa;
    char number[30000];
    long long judge[50000];
    while(gets(number))
    {
        if(number[0]=='0')
            break;
        printf("Original number was %s\n",number);
         for(j=1;j<=MAX;j++)
         {
            x=strlen(number);
            qsort(number,x,sizeof(char),compare);
            sscanf(number,"%lld",&i);
            za=strlen(number);
            
            xa=za-1;
            
            ///reverse
            for(ya=0,xa;ya<(za/2);ya++,xa--)
            {
                tempa=number[ya];
                number[ya]=number[xa];
                number[xa]=tempa;
            }
            
            sscanf(number,"%lld",&k);
            printf("%lld - %lld = ",i,k);
            
            i-=k;
            
            sprintf(number,"%lld",i);
            printf("%lld\n",i);
            
            if(mysearch(i,judge,j))
              break;
            
            xa=(int)j;
            while((xa>1)&&(judge[xa-1]>i))
            {
                judge[xa]=judge[xa-1];
                xa--;
            }
            judge[xa]=i;
        }
        printf("Chain length %lld\n\n",j);
    }
    return 0;
}
