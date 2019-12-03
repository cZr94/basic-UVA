#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    while(scanf("%s", str) == 1)
    {
        int len = strlen(str);
        int loop, sl;
        char tarr1[] = "A   3  HIL JM O   2TUVWXY5";
        char tarr2[] = "01SE Z  8 ";

        int flag1 = 0, flag2 = 0;

        for(loop = 0, sl = len-1; loop <= sl; loop++, sl--)
        {
            if(str[loop] != str[sl])
                flag1 = 1;
            if(str[loop] >= 'A' && str[loop] <= 'Z')
            {
                if(str[sl] != tarr1[str[loop]-'A'])
                    flag2 = 1;
            }
            else
            {
                if(str[sl] != tarr2[str[loop]-'0'])
                    flag2 = 1;
            }
        }
        printf("%s -- is ", str);
        if(flag1)
        {
            if(flag2)
                puts("not a palindrome.");
            else
                puts("a mirrored string.");
        }
        else
        {
            if(flag2)
                puts("a regular palindrome.");
            else
                puts("a mirrored palindrome.");
        }

        puts("");
    }
    return 0;
}
