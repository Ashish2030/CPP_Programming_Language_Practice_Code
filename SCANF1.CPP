//Program to find the area of circumference of the circle
#include<stdio.h>
#include<conio.h>
#define PI 3.1427
main()
{
float cir,area,r;
clrscr();
printf("Enter the Radius of the Circle : ");
scanf("%f",&r);
cir=2*PI*r;
area=PI*r*r;
printf("\nThe Circumefernce of the Circle is = %f",cir);
printf("\n\nThe Area of the Circle is= %f",area);
getch();
}