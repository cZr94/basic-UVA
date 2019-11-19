#include<stdio.h>
#include<string.h>

int main ()
{
    int t,n,s=0;
    char str[10];

    scanf("%d",&t);
    while(t--)
    {
        scanf("%s", str);

        if(strcmp(str,"donate")==0)
        {
            scanf("%d",&n);

            s+=n;
        }

        if(strcmp(str,"report")==0)
        {
            printf("%d\n",s);
        }
    }


    return 0;
}
