#include<stdio.h>

int main()
{
    int loop,n,data,save;
    char check;
    while(scanf("%d",&n)==1)
    {
        for(loop=1;loop<=n;loop++)
        {
            save=0;
            while(1)
            {
                scanf("%d",&data);

                if(data>save)
                save=data;

                scanf("%c",&check);

                if(check!=' ')
                    break;
            }
                printf("Case %d: %d\n",loop,save);
        }
    }

    return 0;
 }
