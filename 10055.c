#include<stdio.h>

int main()
{
    long long int h_army,o_army,s_left;

    while(scanf("%lld %lld",&h_army,&o_army)!=EOF)
    {
        if(h_army>o_army)
        {
            s_left=h_army-o_army;

        }else if(h_army<o_army)
        {
            s_left=o_army-h_army;
        }

        printf("%lld\n",s_left);

    }//end of while loop

    return 0;
}
