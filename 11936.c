#include <stdio.h>

int main()
{
    long long int side1, side2, side3,n;

    while(scanf("%lld",&n)==1)                //scaning test case n//
    {
        while(n--)                            //contineuing while loop until n=0 by decrementing the value of n//
        {
            scanf("%lld %lld %lld", &side1, &side2, &side3);

            if((side1+side2)<=side3 || (side2+side3)<=side1 || (side1+side3)<=side2)     /to check if the inputs make a triangle if two side combined is less than or equal triangle then it doesnt form a triangle//
            {
                printf("Wrong!!\n");        //printing wrong if the condition above is true//
            }
            else printf("OK\n");
        }//end of while loop

    }//end of while loop

    return 0;
}
