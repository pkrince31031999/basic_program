#include<stdio.h>
#include<conio.h>
int main()
{
   int a,b,i=1,z,n;
   printf("How many times to calculate:");
   scanf("%d",&n);
    printf("enter the first:");
      scanf("%d",&a);
      printf("enter the second:");
      scanf("%d",&b);

   while(i<=n)
   {
      //printf("enter the first:");
      //scanf("%d",&a);
      //printf("enter the second:");
      //scanf("%d",&b);
      z=a^b;
      i++;

   }

   printf("the value = %d",z);
   return 0;
}
