#include <stdio.h>

int main()
{
    int count, value, n, i, c=1;

    while(scanf("%d", &n) && n>0)
    {
        count=0;
        value=1;
        if(n==1)
        {
             printf("Case %d: 0\n", c++);
        }
        else
        {
            for(i=0; value<n; i++)
            {
                value+=value;
                count++;
            }
            printf("Case %d: %d\n", c++, count);
        }
    }
    return 0;
}
