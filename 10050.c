///This code is a modified version of an c++ code of the same uva problem

#include <stdio.h>
#include <string.h>
#include <stdbool.h>        ///check https://www.geeksforgeeks.org/bool-in-c/


int main()
{
    int T,N,P,loop,sl,arr[100];

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d %d",&N,&P);

        for(loop = 0;loop<P;++loop)
            scanf("%d",&arr[loop]);

        int ans = 0;

        for(loop = 1;loop<=N;++loop)
        {
            if(loop%7==6 || loop%7==0)
                continue;

            bool found = false;

            for(sl = 0;sl<P;++sl)
                if(loop%arr[sl]==0)
                    found = true;

            if(found) 
              ++ans;
        }

        printf("%d\n",ans);
    }

    return 0;
}
