#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,n;

    scanf("%d",&t);
    while(t--)
    {
        if(t>100 || t<0)
            break;
        scanf("%d",&n);

            n=n*567;
            n=n/9;
            n+=7492;
            n*=235;
            n/=47;
            n=n-498;
            n/=10;
            n%=10;
            n=abs(n);
            printf("%d\n",n);

    }

    return 0;
}
