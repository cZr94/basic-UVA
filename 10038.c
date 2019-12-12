#include<stdio.h>
#include<stdlib.h>

int main()
{
    long int input,data[100],loop;

    while(scanf("%ld",&input)!=0)
    {
        if(input>=3001)
            break;

        for(loop=0;loop<input;loop++)
        {
            scanf("%ld",&data[loop]);
        }
            int mark[100]={0},flag=0;
            
            for(loop=1;loop<input;loop++)
            {
                if(abs(data[loop] - data[loop-1]) < input)
				        mark[abs(data[loop] - data[loop-1])]++;
            }
            for(loop = 1; loop < input; loop++)
			      if(mark[loop] == 0)
				    flag = 1;
		
            if(flag)
			        printf("Not jolly\n");
	        	else
			        printf("Jolly\n");


    }


    return 0;
}
