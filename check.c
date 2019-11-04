#include<stdio.h>

int main()
{
    int n,inputA,inputB,inputC,loop,data;

    while(scanf("%d",&n)!=0)
    {
        if(n>20)
            break;
        data=0;
        for(loop=1;loop<=n;loop++)
        {
            scanf("%d %d %d",&inputA,&inputB,&inputC);

            if((inputA>inputB && inputA<inputC) || (inputA<inputB && inputA>inputC))
            {
                data=inputA;
            }
            else if((inputA<inputB && inputB<inputC) || (inputA>inputB && inputB>inputC))
            {
                data=inputB;
            }
            else if((inputA>inputC && inputB<inputC) || (inputA<inputC && inputB>inputC))
            {
                data=inputC;
            }

            printf("Case %d: %d\n",loop,data);

        }

    }

    return 0;
}
