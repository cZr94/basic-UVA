#include <stdio.h>

int main()
{
    int t, n, test = 0;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        int arr[100001] = {}, loop;
        for(loop = 1; loop <= n; loop++)
            scanf("%d", arr+loop);

        int temp = 0, data;
        for(loop = 1; loop <= n; loop++)
        {
            if(arr[loop]-arr[loop-1] > temp)
                temp = arr[loop]-arr[loop-1];
        }

        data = temp;

        for(loop = 1; loop <= n; loop++)
        {
            if(arr[loop]-arr[loop-1] == temp)
                temp--;
            else if(arr[loop]-arr[loop-1] > temp)
            {
                data++;
                break;
            }

        }
        printf("Case %d: %d\n", ++test, data);
    }
    return 0;
}
