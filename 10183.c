#include<stdio.h>

int main ()
{
    long long int n,m,loop,next,first,second,counter;

    while(1)
    {
        first=0;
        second=1;
        counter=0;
        scanf("%lld %lld",&n,&m);

            if(n==0 && m==0)
                break;
            else
            {

                for(loop=n;loop<=m;loop++)
                {
                    next=first+second;
                    first=second;
                    second=next;

                    if(next>=n && next<=m)
                        counter++;

                }

                printf("%lld\n",counter);

            }
        }


    return 0;
}
