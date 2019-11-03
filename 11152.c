#include<stdio.h>
#include<math.h>
#define pi 3.1416

int main ()
{
    int a,b,c;                //(a,b,c)=inputs of a triangle sides,s=sides;
    float rose, sunflower,violate,s,area,triangle,radius;

    while(scanf("%d %d %d",&a,&b,&c)!=0)
    {
        s=0;
        if(a==0 || b==0 || c==0 || a>1000 || b>1000 || c>1000)
            break;
        //rose using triangular formula

        s=(a+b+c)/2;        //s= half of the perimeter of the triangle

        triangle=(sqrt(s*(s-a)*(s-b)*(s-c)));       //triangle area

        radius=triangle/s;                          //radius of the circle inside the triangle

        rose=pi*(pow(radius,2));

        violate=triangle-rose;

        area=(a*b*c)/(4*triangle);                  //area of the circle with the triangle inside

        sunflower=(pi*pow(area,2))-triangle;

        printf("%.4f ",sunflower);
        printf("%.4f ",violate);
        printf("%.4f\n",rose);


    }

    return 0;
}
