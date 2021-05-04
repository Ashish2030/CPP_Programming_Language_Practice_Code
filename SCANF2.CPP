//Program to compute the circumference and volume of sphere
#include<stdio.h>
#include<conio.h>
#define PI 3.1427
main()
{
float cir,vol,r;
clrscr();
printf("Enter the Radius of the Sphere : ");
scanf("%f",&r);
cir=4*PI*r*r;
vol=4/3*PI*r*r*r;
printf("\nThe Circumefernce of the Sphere is = %f",cir);
printf("\n\nThe Volume of the Sphere is= %f",vol);
getch();
}