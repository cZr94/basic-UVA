#include<stdio.h>
#include<string.h>

int main()
{
    int n, m, loop, sl, counter;
    int arr[1005];
    char word[1005][1005];

    while(scanf("%d %d", &n, &m) == 2)
    {
        while(getchar() != '\n');
        gets(word[0]);

        arr[0] = 0;

        for(loop = 1; loop < n; loop++)
        {
            counter = 0;
            gets(word[loop]);

            for(sl = 0; sl < m; sl++)
                if(word[loop][sl] != word[0][sl])
                    counter++;

            arr[counter] = loop;
        }

        for(loop = 0; loop < n; loop++)
            puts(word[arr[loop]]);
    }
    
    return 0;
}
