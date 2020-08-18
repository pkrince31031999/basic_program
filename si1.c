#include<stdio.h>
#include<conio.h>
int main()
{
   int p,n,i;
   float si,r;

    for(i=1;i<=3;i++)
    {
       printf("Enter the value of p:");
       scanf("%d",&p);
       printf("Enter the value of n:");
       scanf("%d",&n);
       printf("Enter the value of r:");
       scanf("%f",&r);

       si=p*r*n/100;
       printf("the value of si = rs %f\n",si);
    }
    return 0;
}


