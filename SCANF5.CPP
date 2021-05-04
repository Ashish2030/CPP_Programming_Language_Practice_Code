//Program Convert temperature from degree centigrade Fahrenheit
#include<stdio.h>
#include<conio.h>
main()
{
float c,f;
clrscr();
printf("Enter the Temperature in Degree Centigrade = ");
scanf("%f",&c);
f=(1.8*c)+32;
printf("\nFaheranhet = %f",f);
getch();
}