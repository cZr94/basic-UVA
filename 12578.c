#include<stdio.h>
#include<math.h>


int main()
{
    int n;
    float l,w,r,c_area,r_area,area,pi;

    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            scanf("%f",&l);

            w=l*.6;
            r=l*.2;
            double x=-1;
            pi=acos(x);

            c_area=pi*pow(r,2);
            r_area=l*w;
            area=r_area-c_area;

            printf("%.2f %.2f\n",c_area,area);
        }
    }

    return 0;
}
