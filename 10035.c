#include<stdio.h>

int main()
{
    unsigned long long int inputA,inputB;
    int loop,carry,mul=0;

    while(scanf("%llu %llu",&inputA,&inputB)==2)
    {
        if(inputA==0 && inputB==0)
            break;

            carry=0;

        for(loop=0;;loop++)
        {
            if(inputA==0 && inputB==0)
                break;

            mul=(inputA%10)+(inputB%10)+carry;
            inputA=inputA/10;
            inputB=inputB/10;

        if(mul>9)
        {
            carry++;
        }

        }
        if(carry==0)
        {
            printf("No carry operation.\n");
        }
        else if(carry==1)
        {
            printf("1 carry operation.\n");
        }
        else if(carry>1)
        {
            printf("%d carry operations.\n",carry);

        }


    }

    return 0;
}
