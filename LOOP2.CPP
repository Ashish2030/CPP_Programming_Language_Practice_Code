//Program to Compute a Square Value by Using goto statement
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int x,y;
clrscr();
start:
printf("Enter the Value of x = ");
scanf("%d",&x);
if(x<0)
{
goto start;
}
y=sqrt(x);
printf("Square Root of %d is %d",x,y);
getch();
}