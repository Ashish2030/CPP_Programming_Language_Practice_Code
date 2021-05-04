#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,d;
clrscr();
printf("Enter the value of A = ");
scanf("%d",&a);
printf("Enter the value of B = ");
scanf("%d",&b);
printf("\n\nPress 1 for Addition = ");
printf("\nPress 2 for Subtraction = ");
printf("\nPress 3 for Multiply = ");
printf("\nPress 4 for Divide = \n");
printf("\nEnter the choice = ");
scanf("%d",&c);
switch(c)
{
case 1:
d=a+b;
printf("\nAddition is = %d",d);
break;
case 2:
d=a-b;
printf("\nSubtraction is = %d",d);
break;
case 3:
d=a*b;
printf("\nMultiplication is = %d",d);
break;
case 4:
d=a/b;
printf("\nDivide is = %d",d);
break;
default :
printf("Stupid ! ");
break;
}
getch();
}