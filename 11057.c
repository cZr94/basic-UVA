#include<stdio.h>

int main()
{
    long n,m,arr[100000],d,i,j,b,c;   ///n is the number of gtest cases, m is the number of money in hand, a[] is the array where n number of value will be stored using i in the for loop
    while(scanf("%ld",&n)!=EOF)
    {
        d=2000000;                 /// d is to check if the numbers exceed the limit so its the sum of 2 array limit
        for(i=1;i<=n;i++)
        {
            scanf("%ld",&arr[i]);   ///inputing into array the value of books
        }
        scanf("%ld",&m);
        for(i=1;i<=n;i++)           ///nested loop
            for(j=1;j<=n;j++)       ///nested loop
            {
                if((arr[i]+arr[j])==m && i!=j)    ///if the numbers in array sums eqaul to money in hand and the nested loops arent equal to each other
                {
                    if(arr[i]>arr[j])             ///if a[i] is greater than a[j]
                    {
                        if((arr[i]-arr[j])<d)
                        {
                            b=arr[j];
                            c=arr[i];
                            d=arr[i]-arr[j];

                        }
                    }
                    else
                    {
                        if((arr[j]-arr[i])<d)
                        {
                            b=arr[i];
                            c=arr[j];
                            d=arr[j]-arr[i];
                        }
                    }
                }
            }
    printf("Peter should buy books whose prices are %ld and %ld.\n\n",b,c);

    }

    return 0;

}
