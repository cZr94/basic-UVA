#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void isPalindrome(char str[])
{

    int l = 0;
    int h = strlen(str) - 1;
    double len = strlen(str);

    int ln = sqrt(len);

    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("No magic :( \n", str);
            return;
        }
    }
    printf("%d\n", ln);
}

int main()
{
    int t,cntr;
    char strl[1000];

    scanf("%d",&t);
    getchar();

    for(cntr=1;cntr<=t;cntr++)
    {

        gets(strl);
        printf("Case #%d:\n",cntr);
        isPalindrome(strl);
    }

    return 0;
}
