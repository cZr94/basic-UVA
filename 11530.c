#include<stdio.h>

int main()
{

    int input,loop=1,counter=0;
    char str,sentence;

    scanf("%d",&input);                 //input the number of sentences//
    scanf("%c",&sentence);              //input first sentence//

    while(loop<=input)
    {
        while(scanf("%c",&str)!='0')    //input number of sentences to the limit of 'input'//
        {

            if(str=='\n')
            {
                printf("Case #%d: %d\n",loop,counter);
                counter=0;
                break;
            }

                switch(str)                                       //using switch case//
                {
                    case'a':
                    case'd':
                    case'g':
                    case'j':
                    case'm':
                    case'p':
                    case't':
                    case'w':
                    case' ':
                        counter=counter+1;
                        break;

                    case'b':
                    case'e':
                    case'h':
                    case'k':
                    case'n':
                    case'q':
                    case'u':
                    case'x':
                        counter=counter+2;
                        break;

                    case'c':
                    case'f':
                    case'i':
                    case'l':
                    case'o':
                    case'r':
                    case'v':
                    case'y':
                        counter=counter+3;
                        break;

                    case's':
                    case'z':
                        counter=counter+4;
                        break;

                }
        }
        loop++;                                                           //increasing loop value//
    }
return 0;
}
