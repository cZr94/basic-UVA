#include<stdio.h>
int main()
{
long long int n,a,b,loop;                     //n is number of inputs and a&b are inputs and loop is loop counter//
while(scanf("%lld",&n)==1)
{
for(loop=0;loop<n;loop++)
    {
    scanf("%lld%lld",&a,&b);
    if((a < 1000000001) && (b< 1000000001))
        {
            if(a>b)
            printf(">\n");
            else if(a<b)
            printf("<\n");
            else
            printf("=\n");
        }else break;
    }//end of for loop
}//end of while loop
return 0;
}
