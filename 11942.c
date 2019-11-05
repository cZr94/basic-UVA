#include<stdio.h>
int main()
{
    int n,counter,loop,a[15],up,down;

    printf("Lumberjacks:\n");

    while(scanf("%d",&n)==1)
    {
        while(n--)
        {

            for(loop=0;loop<10;loop++)
            {
                scanf("%d",&a[loop]);
            }
            up=a[0];
            down=a[1];

            if(up>down)
            {
                counter=0;
                for(loop=0;loop<9;loop++)
                {
                if(a[loop]>a[loop+1])
                {
                counter++;
                }
                }
            }
            else if(up<down)
            {
                counter=0;
                for(loop=0;loop<9;loop++)
                {
                if(a[loop]<a[loop+1])
                {
                counter++;
                }
                }
            }

            if(counter==9)
            printf("Ordered\n");
            else
            printf("Unordered\n");

        }
    }
    return 0;
}
