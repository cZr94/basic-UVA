#include<stdio.h>
#include<string.h>


int main ()
{
    int n,loop,len=0,sl;
    char ch[100000];

        scanf("%d",&n);
        for(loop=0;loop<n;loop++)
        {
            int counter=0;
                scanf("%s",&ch);
                len=strlen(ch);

            for(sl=0;sl<len;sl++)
            {
                if(ch[sl]=='A' || ch[sl]=='a' || ch[sl]=='E' || ch[sl]=='e' || ch[sl]=='I' || ch[sl]=='i' || ch[sl]=='O' || ch[sl]=='o' || ch[sl]=='U' ||ch[sl]=='u')
                counter++;
            }
            if(counter>0)
                printf("%d\n",counter);

        }


    return 0;
}
