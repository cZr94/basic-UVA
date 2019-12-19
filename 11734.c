#include<stdio.h>
#include<string.h>

#define MAX 100000
int main()
{
    char str[MAX];
    char data[MAX];
    char temp[MAX];

    int t, len, lenc, loop, sl, cntr, caseno, chckr;

    scanf("%d",&t);
    getchar();
    caseno=1;

    while(t--)
    {
        for(loop=1;loop<=t;loop++)
        {
            gets(str);
            len=strlen(str);

            gets(data);
            lenc=strlen(data);


            if(strcmp(str,data)==0)
                printf("Case %d: Yes\n",caseno);

            else
                {
                    chckr=0;
                    cntr=0;

                    for(sl=0;sl<len;sl++)
                    {
                        if(str[sl]>='a' && str[sl]<='z' || str[sl]>='A' && str[sl]<='Z')
                        {
                            temp[cntr]=str[sl];
                            cntr++;
                        }
                    }

                    temp[cntr]='\0';

                    for(sl=0;sl<lenc;sl++)
                    {
                        if(data[sl]!=temp[sl])
                        {
                            chckr++;
                            break;
                        }
                    }

                    if(lenc==cntr && chckr==0)
                        printf("Case %d: Output Format Error\n",caseno)  ;
                    else
                        printf("Case %d: Wrong Answer\n",caseno);
                }

                caseno++;
          }
    }

    return 0;
}
