//Program to Swap or Interchange the Value Without using Third Variable
#include<stdio.h>
#include<conio.h>
main()
{
int a,b;
clrscr();
printf("Enter the Value of a= ");
scanf("%d",&a);
printf("Enter the Value of b= ");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("\nAfter Swapping Value of a= %d",a);
printf("\nAfter Swapping Value of b= %d",b);
getch();
}