#include<stdio.h>

int main()
{
    int n,loop,age,counter,s_loop;   //n is the number of age inputs; loop to run for loop;s_loop is the secondary loop to run reverse loop//


    while(scanf("%d",&n)!='0')
    {
        counter=0;
        char input[100]={0};

        for(loop=0;loop<n;loop++)
        {
            scanf("%d",&age);                                     // inpout ages//
            counter++;                                           //to count the number of inputs//
            input[age]=input[age]+1;                             //saving age in an array//
        }

        counter--;
            for(loop=0;loop<100;loop++)
                {
                        if(input[loop]>0)
                            {
                            for(s_loop=0;s_loop<input[loop];s_loop++)
                                    {
                                        printf("%d",loop);
                                        while(counter--)
                                            {
                                            printf(" ");
                                            break;
                                            }//end of while loop
                                    }//end of for loop
                            }
                }//end of for loop
                printf("\n");
    }//end of while loop

    return 0;
}
