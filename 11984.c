#include<stdio.h>
int main()
{
    int n,loop;
    double c,f,tempc,tempf;
    while(scanf("%d",&n)==1)
    {
        for(loop=1;loop<=n;loop++)
        {
            scanf("%lf%lf",&c,&f);
            tempc = ((9*c)/5)+f;

            tempf = tempc*5/9;

            printf("Case %d: %.2lf\n",loop,tempf);
        }
    }
    return 0;
}
