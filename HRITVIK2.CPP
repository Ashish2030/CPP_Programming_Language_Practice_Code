//Program to make fibbonacci series using given value.
#include<stdio.h>
#include<conio.h>
main()
{
int x,y,z,n,i;
clrscr();
x=0;
y=1;
printf("Emter The Value Of X= ");
scanf("%d",&n);
printf("\nFibbonacci Series Is= ");
printf("\n\n%d",x);
printf("\t%d",y);
for (i=0;i<=n-2;i++)
{
z=x+y;
x=y;
y=z;
printf("\t%d",z);
}
getch();
}