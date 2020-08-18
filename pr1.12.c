#include<stdio.h>
#include<conio.h>
int main()
{
     int bs,gs;
     float ha,da;
     printf("enter the basic salary:");
     scanf("%d",&bs);
     da=bs*40/100;
     printf("daearness allowance = rs.%f\n",da);
     ha=bs*20/100;
     printf("house allowance = rs.%f\n",ha);
     gs=ha+bs+da;
     printf("gross salary = rs.%d\n",gs);
     return 0;
}
