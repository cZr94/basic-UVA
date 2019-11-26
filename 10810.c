#include <stdio.h>

int main()
{
    int n, array[100],loop,sl,swap,counter;

    while(1)
    {
        scanf("%d",&n);

        if(n==0)
            break;

        counter=0;

        for(loop=0;loop<n;loop++)
        {
            scanf("%d",&array[loop]);
        }

        for(loop=0;loop<n-1;loop++)
        {
            for(sl=0;sl<n-loop-1;sl++)
            {
                if(array[sl]>array[sl+1])
                {
                    counter++;
                    swap=array[sl+1];
                    array[sl+1]=array[sl];
                    array[sl]=swap;
                }
            }
        }

        printf("%d\n",counter);

    }

    return 0;
}
