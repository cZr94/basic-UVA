#include<stdio.h>

int main ()
{
    int n,square;

    while(scanf("%d",&n)!='0')
    {
        if(n==0)
        break;
        else
        {
            square=n*(n+1)*(2*n+1)/6;

            printf("%d\n",square);
        }
    }


    return 0;
}
