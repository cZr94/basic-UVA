#include<stdio.h>

int main()
{
    int n,inputA,inputB,inputC,loop,data;

    while(scanf("%d",&n)!=0)                //the number of test case
    {
        if(n>20)                            //if test case number is higher than 20 then break/ end the compile
            break;
        data=0;
        for(loop=1;loop<=n;loop++)          //using for loop where loop starts from 1 and contineus until its equal or less than the number of test cases
        {
            scanf("%d %d %d",&inputA,&inputB,&inputC); // taking multiple inputs

            if((inputA>inputB && inputA<inputC) || (inputA<inputB && inputA>inputC)) //if inputA is higher than inputB and lower than inputC or inputA is lower than inputB and higher than inputC
            {
                data=inputA;                                                         //save the value of inputA in data;
            }
            else if((inputA<inputB && inputB<inputC) || (inputA>inputB && inputB>inputC)) // similar to previous if condition
            {
                data=inputB;                                                           // save the value of inputB in data if the condition above is true
            }
            else if((inputA>inputC && inputB<inputC) || (inputA<inputC && inputB>inputC))
            {
                data=inputC;
            }

            printf("Case %d: %d\n",loop,data); //printing case #number(loop): data(the value saved in data)

        }//end of for loop

    }//end of while loop

    return 0;
}
