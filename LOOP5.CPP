//W.A.P. to Print the Fibbonici Series
#include<stdio.h>
#include<conio.h>
main()
{
int x,y,z,n,i;
clrscr();
x=0;
y=1;
printf("Enter the Value of n= ");
scanf("%d",&n);
printf("\nFibbonacci Series is = ");
printf("\n\n%d",x);
printf("\t%d",y);
for(i=0;i<=n-2;i++)
{
z=x+y;
x=y;
y=z;
printf("\t%d",z);
}
getch();
}
