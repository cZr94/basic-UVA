#include <stdio.h>


int main() {
    int t, st, av, fnd, loop, sl, A;
    scanf("%d", &t);
    while(t--)
        {
        scanf("%d %d %d", &st, &av, &fnd);
        long long arx[1001] = {}, ary[1001] = {}, sum;

        while(fnd--)
        {
            scanf("%d %d", &loop, &sl);
            arx[loop]++, ary[sl]++;
        }

        for(loop = 1; loop<= av; loop++)
            ary[loop] += ary[loop-1];

        for(loop = 1; loop <= st; loop++)
            arx[loop] += arx[loop-1];

        int ax = 1, ay = 1;
        long long ans, tmp = 0;
        long long tot = 0;

        for(loop = 1; loop <= st; loop++)
            tmp += (loop-1)*(arx[loop]-arx[loop-1]);

        ans = tmp;

        for(loop = 2; loop <= st; loop++)
        {
            tmp = tmp + arx[loop-1] - (arx[st]-arx[loop-1]);
            if(tmp < ans)
                ans = tmp, ax = loop;
        }

        tot += ans, tmp = 0;

        for(sl = 1; sl <= av; sl++)
            tmp += (sl-1)*(ary[sl]-ary[sl-1]);

        ans = tmp;

        for(sl= 2; sl <= av; sl++)
        {
            tmp = tmp + ary[sl-1] - (ary[av]-ary[sl-1]);
            if(tmp < ans)
                ans = tmp, ay = sl;
        }

        tot += ans;

        printf("(Street: %d, Avenue: %d)\n", ax, ay);
    }
    return 0;
}
