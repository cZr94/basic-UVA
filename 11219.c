#include<stdio.h>
int main()
{

int loop,n,year,y1,y2,m1,m2,d1,d2;          //loop for looping while loop; year is difference between input years; n is the number of inputs you will take//

scanf("%d",&n);

loop=1;

while(loop<=n){

if(n<1 || n>200)
break;

scanf("%d/%d/%d",&d1,&m1,&y1);
scanf("%d/%d/%d",&d2,&m2,&y2);

     year=(y1-y2);              //year= difference between input years

            if(m1<m2)
                year--;         // if born month is less than current time given then no years will be added//

            else if(m1==m2)
            {
                if(d1<d2)
                year--;          //if both months are same but born date is less than current time given then no years will be added

            }

            if(year<0)
                printf("Case #%d: Invalid birth date\n", loop );
            else if(year>130)
                printf("Case #%d: Check birth date\n", loop);
            else
                printf("Case #%d: %d\n",loop,year);


        loop++;

  }//end of while loop

return 0;

}
