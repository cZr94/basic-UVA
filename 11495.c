#include <stdio.h>

int main()
{
    long long n, array[10],loop,sl,swap,counter;

    while(1)
    {
        scanf("%lld",&n);

        if(n<=0)
            break;

        counter=0;

        for(loop=0;loop<n;loop++)
        {
            scanf("%lld",&array[loop]);
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

        if(counter%2==0)
            printf("Carlos\n");
        else
            printf("Marcelo\n");

    }

    return 0;
}
