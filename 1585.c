#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);

    while (t--)
    {
        const char line[100];
        scanf("%s",line);

        int counter = 0,previous = 0, len;

        len= strlen(line);

        for (int loop = 0; loop < len; ++loop)
        {
            if (line[loop] == 'O')
            {
                ++previous;
                counter += previous;
            }
            else
                previous = 0;
        }

        printf("%d\n",counter);
    }

    return 0;
}
