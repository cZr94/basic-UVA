#include <stdio.h>

int main ()
{
    int n,loop,counter;

    while(scanf("%d",&n)==1)
    {
        counter=2;
        if(n==1)
        printf("%d\n",counter);
        for(loop=2;loop<=n;loop++)
        {
            counter=counter+loop;
        }
        printf("%d\n",counter);
    }

    return 0;
}
