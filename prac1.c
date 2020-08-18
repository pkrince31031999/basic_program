#include<stdio.h>
#include<conio.h>
void main()
{
  int bs,gs,ha,da;
  printf("enter the basic salary:");
  scanf("%d",&bs);
  ha=20/100*bs;
  printf("house allowance:",ha);
  da=40/100*bs;
  printf("dearness allowance:",da)
  gs=ha+bs+da;
  printf("the gross salary of ramesh is:",gs);
  return 0;
}
