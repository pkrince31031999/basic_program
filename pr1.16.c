#include<stdio.h>
#include<conio.h>
int main()
{
  int l,b,r,ac;
  float ar,pr,cc,pi=3.14;
  printf("enter the length of recatngle:");
  scanf("%d",&l);
  printf("enter the breadth of rectangle:");
  scanf("%d",&b);
  printf("enter the radius of circle:");
  scanf("%d",&r);
  ar=l*b;
  pr=2*(l+b);
  ac=pi*r*r;
  cc=2*pi*r;
  printf("area of rectangle is : %f\n",ar);
  printf("perimeter of rectangle is : %f\n",pr);
  printf("area of circle is : %d\n",ac);
  printf("circumference of circle is : %f\n",cc);
  return 0;


}
