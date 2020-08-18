#include<stdio.h>
#include<conio.h>
int main()
{
   int c1,c2;
   float m,in,fe,cm,me,inc,fet,ctm;
   printf("enter the distance of city1(in km) :");
   scanf("%d",&c1);
   printf("enter the distance of city2(in km) :");
   scanf("%d",&c2);
   m=c1*1000;
   fe=3280*c1;
   in=39370*c1;
   cm=100000*c1;
   printf("distance in meter is %f",m);
   printf("distance in feet is %f",fe);
   printf("distance in inches is %f",in);
   printf("distance in centi meters is %f",cm);
   return 0;
}
