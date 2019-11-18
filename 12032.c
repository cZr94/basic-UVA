#include<stdio.h>
#include<stdlib.h>

int main()
{
    long long t,n,arr[100010],casecnt,loop,max,k,dif;

    casecnt=1;
    scanf("%lld",&t);
    while(t--)
    {
        arr[0]=0;
        scanf("%lld",&n);

        for(loop=1;loop<=n;loop++)
        {
            scanf("%lld",&arr[loop]);
            if(n==1)
            {
                printf("Case %lld: %lld\n",casecnt,arr[loop]);

            }
        }
        if(n>1)
            {
                max=0;

                for(loop=0;loop<n-1;loop++)
                {
                    dif=abs(arr[loop]-arr[loop+1]);
                    if(dif>max)
                        max=dif;
                }
                k=max;

                for(loop=0;loop<n-1;loop++)
                {
                    if(loop==0)
                    {
                        if(arr[0]>max)
                        {
                            k++;
                            max=k;
                            loop=-1;
                            continue;
                        }
                        if(arr[0]==max)
                            max--;
                    }

                    dif=abs(arr[loop]-arr[loop+1]);
                    if(dif>max)
                    {
                        k++;
                        max=k;
                        loop=-1;
                        continue;
                    }
                    if(dif==max)
                        max--;

                }

             printf("Case %lld: %lld\n",casecnt,k);
             casecnt++;

        }



    }

        return 0;

}
