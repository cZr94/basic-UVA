#include <stdio.h>

int main ()
{
    int n,l,w,h,loop;

    while(scanf("%d",&n)!='0')
    {
        if(n>100)
            break;

        for(loop=1;loop<=n;loop++)
        {
            scanf("%d %d %d",&l,&w,&h);

            if(l>20 || w>20 || h>20)
            {
                printf("Case %d: bad\n",loop);
            }
            else
                printf("Case %d: good\n",loop);

        }
    }


    return 0;
}
