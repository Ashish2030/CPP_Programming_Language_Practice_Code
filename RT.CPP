//Leader If (Logical Operator)
#include<stdio.h>
#include<conio.h>
main()
{
int a;
clrscr();
printf("Enter the Salary = ");
scanf("%d",&a);
if(a<4000)
{
printf("Peon");
}
else if(a>=4000&&a<=8000)
{
printf("Clerk");
}
else if(a>=8000&&a<=10000)
{
printf("Asst. Manager");
}
else if(a>=10000&&a<=150000)
{
printf("Manager");
}
else
{
printf("Over Limt !");
}
getch();
}