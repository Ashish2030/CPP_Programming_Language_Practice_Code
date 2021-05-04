#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,d;
clrscr();
printf("Enter Precentage Of Student= ");
scanf("%d",&a);
if (a>=80)
{
printf("\nStudent Will Pass From A Grade");
}
else if (a>=60&&a<=80)
{
printf("\nStudent Will Pass From B Grade");
}
else if (a>=40&&a<=60)
{
printf("\nStudent Will Pass From C Grade");
}
else if (a<=40)
{
printf("\nStudent Will Pass From D Grade");
}
getch();
}

