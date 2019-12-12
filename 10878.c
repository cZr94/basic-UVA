#include<stdio.h>

static char str[64];

int main()
{
    register unsigned int cnt;
    unsigned sum, found;

    while(gets(str))
    {
        unsigned int bit = 128;

        cnt = 0;
        sum = 0;
        found = 0;
        
        if(str[cnt] != '|')
            continue;

        for(; str[cnt]; ++cnt)
        {
            if(str[cnt] == ' ')
                bit >>= 1;
            else if(str[cnt] == 'o')
            {
                sum += bit;
                bit >>= 1;
            }
        }

        printf("%c", sum);
    }

    return 0;
}
