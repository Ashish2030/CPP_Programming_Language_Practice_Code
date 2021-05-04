//Program to Swap or Interchange the Value Using Third Variable
#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
clrscr();
printf("Enter the Value of a= ");
scanf("%d",&a);
printf("Enter the Value of b= ");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("\nAfter Swapping Value of a= %d",a);
printf("\nAfter Swapping Value of b= %d",b);
getch();
}