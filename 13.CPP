#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,d;
clrscr();
printf("Enter 1st Side Of Triangle: ");
scanf("%d",&a);
printf("Enter 2nd Side Of Triangle: ");
scanf("%d",&b);
printf("Enter 3rd Side Of Triangle: ");
scanf("%d",&c);
if(a+b>c&&b+c>a&&a+c>b)
{
printf("\nTriangle Can Be Made From Given Sides");
}
else
{
printf("\nTriangle Can't Be Made From Given Sides");
}
getch();
}