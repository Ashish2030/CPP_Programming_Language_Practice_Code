//Program Compute Volume of Box
#include<stdio.h>
#include<conio.h>
main()
{
float l,b,h,vol;
clrscr();
printf("Enter the Length= ");
scanf("%f",&l);
printf("Enter the Breadth= ");
scanf("%f",&b);
printf("Enter the Height = ");
scanf("%f",&h);
vol=l*b*h;
printf("\nThe Volume of Box is = %f",vol);
getch();
}