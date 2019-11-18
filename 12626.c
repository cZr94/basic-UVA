#include <stdio.h>
#include <string.h>

int main()
{
    int test, len, j, m, a, r, i, t, g, count;
    char str[601];

    while(scanf("%d", &test) == 1){
        while(test--){
                count= m = a = r = i = t = g = 0;
            scanf("%s",&str);
            len = strlen(str);

            for(j=0; j<len; j++){
                if(str[j]=='M')
                    m++;
                else if(str[j]=='A')
                    a++;
                else if(str[j]=='R')
                    r++;
                else if(str[j]=='G')
                    g++;
                else if(str[j]=='I')
                    i++;
                else if(str[j]=='T')
                    t++;
            }
            while(m>=1 && a>=3 && r>=2 && i>=1 && t>=1 && g>=1){
                    count++;
                    m-=1;
                    a-=3;
                    r-=2;
                    i-=1;
                    t-=1;
                    g-=1;
            }
        printf("%d\n", count);
        }
    }
    return 0;
}
