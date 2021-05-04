//Program to Compute the Simple Interest
#include<stdio.h>
#include<conio.h>
#include<dos.h>
main()
{
float p,r,t,si,ci;
clrscr();
printf("Enter the Principal = ");
scanf("%f",&p);
printf("Enter the Rate = ");
scanf("%f",&r);
printf("Enter the Time = ");
scanf("%f",&t);
si=(p*r*t)/100;
printf("Simple Interest is = %f",si);
sleep(5);
}