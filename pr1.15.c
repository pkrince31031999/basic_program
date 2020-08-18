#include<stdio.h>
#include<conio.h>
int main()
{
  int s1,s2,s3,s4,s5,am,pm;
  printf("enter the marks in s1:");
  scanf("%d",&s1);
  printf("enter the marks in s2:");
  scanf("%d",&s2);
  printf("enter the marks in s3:");
  scanf("%d",&s3);
  printf("enter the marks in s4:");
  scanf("%d",&s4);
  printf("enter the marks in s5:");
  scanf("%d",&s5);
  am=s1+s2+s3+s4+s5;
  printf("agrregrate maarks is :%d\n",am);
  pm=am/5;
  printf("percentage marks is :%d\n",pm);
  return 0;


}
