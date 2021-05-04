//Program to find square root of a given number.
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int x,y;
clrscr();
start:
printf("Enter The Value Of X= ");
scanf("%d",&x);
if (x<0)
{
goto start;
}
y=sqrt(x);
printf("Square Root Of %d Is %d",x,y);
getch();
}