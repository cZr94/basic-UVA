#include<stdlib.h>
#include<stdio.h>
int main()
{
 int l1,l2,m2,m1,r1,r2,n,m;
 while(scanf("%d %d",&n,&m)==2&&n!=0)
  {
      if(n == 1 && m == 1)
        break;
   int t1,t2;
   l1=0;l2=1;
   m1=1;m2=1;
   r1=1;r2=0;
   while(m1!=n||m2!=m)
    {
     if(m1*m>m2*n)          //if m in greater than n cause m1 and m2=1 so m1*m=m && m2*n=n//
      {
       t1=m1;t2=m2;        //temp saves previous value of m1 & m2//
       m1+=l1;
       m2+=l2;
       r1=t1;r2=t2;       //the new value of r1 & r2 are those temps //
       printf("L");
      }
     else
      {
       t1=m1;t2=m2;
       m1+=r1;
       m2+=r2;
       l1=t1;l2=t2;
       printf("R");
      }
    }
    printf("\n");
  }
 return 0;
}
