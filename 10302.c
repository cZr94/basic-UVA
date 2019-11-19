#include<stdio.h>

int main()
{
    long  long int n,ans;
    while(scanf("%lld",&n)==1)
        {
            ans=(n*n*(n+1)*(n+1))/4;        ///here 1 + 8 + 27 + ::: + x^3 
            printf("%lld\n",ans);
        }
    return 0;
}
