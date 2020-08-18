#include<stdio.h>
#include<conio.h>
int main()
{
  float fd,cg;
  printf("enter the temp in fd:");
  scanf("%f",&fd);
  cg=0.55*(fd-32);
  printf("temperature in centigrade is :%f",cg);
  return 0;
}
