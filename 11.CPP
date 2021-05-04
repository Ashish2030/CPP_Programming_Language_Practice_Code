#include<stdio.h>
#include<conio.h>
main()
{
float a,b,c,d;
clrscr();
printf("Enter Principal Value: ");
scanf("%f",&a);
printf("Enter Rate Of Interest (In %): ");
scanf("%f",&b);
printf("Enter Time (In Yrs.): ");
scanf("%f",&c);
d=a*b*c/100;
printf("\nSimple Interest Is: %f",d);
getch();
}
