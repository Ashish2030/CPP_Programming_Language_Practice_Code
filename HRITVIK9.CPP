#include<stdio.h>
#include<conio.h>
main()
{
float a,b,c,d,e;
clrscr();
printf("Enter Units Consumed= ");
scanf("%f",&a);
if (a>=0&&a<=200)
{
b=0.50*a;
printf("\nNet Ammount (In Rs.)= %f",b);
}
else if (a>=200&&a<=400)
{
c=100+0.65*(a-200);
printf("\nNet Ammount (In Rs.)= %f",c);
}
else if (a>=400&&a<=600)
{
d=230+0.80*(a-400);
printf("\nNet Ammount (In Rs.)= %f",d);
}
else if (a>=600)
{
e=390+1.00*(a-600);
printf("\nNet Ammount (In Rs.)= %f",e);
}
getch();
}

