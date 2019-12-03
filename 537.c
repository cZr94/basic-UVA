#include <stdio.h>

int main()
{
      int i, c, n;
      scanf("%d%*c", &n);
      for (c = 1; c <= n; c++)
      {
            printf("Problem #%d\n", c);
            double U = -1, I = -1, P = -1;
            char tmp[20000];
            for (i = 0; ; i++)
            {
              tmp[i] = getchar();
              if (tmp[i] == '\n')
                break;

              if (tmp[i] == '=')
              {
                  switch (tmp[i - 1])
                  {
                    case 'U':
                      U = 0;
                      scanf("%lf", &U);
                      tmp[i] = getchar();
                      if (tmp[i] == 'm')
                        U *= 0.001;
                      else if (tmp[i] == 'k')
                        U *= 1000.0;
                      else if (tmp[i] == 'M')
                        U *= 1000000.0;
                      break;
                    case 'P':
                      P = 0;
                      scanf("%lf", &P);
                      tmp[i] = getchar();
                      if (tmp[i] == 'm')
                        P *= 0.001;
                      else if (tmp[i] == 'k')
                        P *= 1000.0;
                      else if (tmp[i] == 'M')
                        P *= 1000000.0;
                      break;
                    case 'I':
                      I = 0;
                      scanf("%lf", &I);
                      tmp[i] = getchar();
                      if (tmp[i] == 'm')
                        I *= 0.001;
                      else if (tmp[i] == 'k')
                        I *= 1000.0;
                      else if (tmp[i] == 'M')
                        I *= 1000000.0;
                      break;
                }
            }
        }
        if (P == -1)
            printf("P=%.2lfW", U * I);
        else if (I == -1)
            printf("I=%.2lfA", P / U);
        else
            printf("U=%.2lfV", P / I);

        puts("");
        puts("");
      }
      return 0;
}
