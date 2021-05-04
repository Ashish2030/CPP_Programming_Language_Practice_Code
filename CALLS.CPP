#include<stdio.h>
#include<conio.h>
main()
{
float calls, amt;
clrscr();
printf("Enter the Class = ");
scanf("%f",&calls);
if(calls>0&&calls<100)
{
amt=200;
printf("The Net Bill is = %f",amt);
}
else if(calls>=100&&calls<150)
{
amt=200+.60*(calls-100);
printf("The Net Bill is = %f",amt);
}
else if(calls>=150&&calls<200)
{
amt=200+.50*(calls-100);
printf("The Net Bill is = %f",amt);
}
else if(calls>=200)
{
amt=.40*calls;
printf("The Net Bill is = %f",amt);
}
getch();
}