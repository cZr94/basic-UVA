#include <stdio.h>
#include <math.h>

int prime(int n)
{
    int loop;

    if(n==1)
        return 0;

    if(n==2)
        return 1;

    if(n%2==0)
        return 0;

    for(loop=3;loop<=sqrt(n);loop+=2)
    {
        if(n%loop==0)
        return 0;
    }
    return 1;
}

int main()
{
    int n,loop,x,y;

    scanf("%d",&n);
    for(loop=0;loop<n;loop++)
    {
        scanf("%d,",&y);

        if(prime(y)==1)
        {
            x = pow(2,y)-1;

            if(prime(x)==0)
                printf("No\n");
            else
                printf("Yes\n");
        }
        else
            printf("No\n");
    }
    return 0;
}
