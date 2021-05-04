#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,d,e;
clrscr();
printf("Enter First Value= ");
scanf("%d",&a);
printf("Enter Second Value= ");
scanf("%d",&b);
printf("\n\nPress 1 For Addition");
printf("\nPress 2 For Subtraction");
printf("\nPress 3 For Multiplacation");
printf("\nPress 4 For Division");
printf("\n\nEnter Your Choise= ");
scanf("%d",&c);
switch (c)
{
case 1:
d=a+b;
printf("\nAddition Is= %d",d);
break;
case 2:
d=a-b;
printf("\nSubtraction Is= %d",d);
break;
case 3:
d=a*b;
printf("\nMultiplacation Is= %d",d);
break;
case 4:
d=a/b;
printf("\nDivision Is= %d",d);
break;
}
getch();
}
