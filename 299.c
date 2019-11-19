#include<stdio.h>

int main()
{
    int loop,s_loop,loop3,t_case,n,temp,train[51],counter;
    while(scanf("%d",&t_case)==1)
    {
         for(loop3=0;loop3<t_case;loop3++)
         {
            counter=0;
            scanf("%d",&n);
            for(loop=0;loop<n;loop++)
            scanf("%d",&train[loop]);

        for(loop=0;loop<n-1;loop++)
            for(s_loop=0;s_loop<n-loop-1;s_loop++)
                if(train[s_loop]>train[s_loop+1])
                {
                    counter++;
                    temp=train[s_loop];
                    train[s_loop]=train[s_loop+1];
                    train[s_loop+1]=temp;
                }
            printf("Optimal train swapping takes %d swaps.\n",counter);
        }
    }

    return 0;
}
