#include<stdio.h>
#include<string.h>

int main()
{
    char input[1001];
    int loop,data,length;

    while(1)
    {
        scanf("%s",&input);
        length=0;
        data=0;

        if(input[0]=='0')
            break;

        length=strlen(input);

        for(loop=0;loop<length;loop++)
        {
            data=data*10+input[loop];
            //printf("data %d\n",data);//debug
            data=data%11;
        }

        if(length==1 || length>1000)
            break;

            if(data==0)
            {
                printf("%s is a multiple of 11.\n",input);
            }else
                printf("%s is not a multiple of 11.\n",input);
    }

    return 0;
}
