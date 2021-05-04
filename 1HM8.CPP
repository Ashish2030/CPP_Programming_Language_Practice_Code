// Program to calculate sum of even and odd numbers.
#include<stdio.h>
#include<conio.h>
main()
{
int i,j,n,a,y=0,p,u,t;
char e,o,s;
clrscr();
printf("First 100 Natural Numbers Are As Follows:\n");
for (i=1;i<=100;i++)
{
printf("\t%d",i);
}
printf("\n\nPress (E) To Seperate Even Numbers");
printf("\nPress (O) To Seperate Odd Numbers");
printf("\n\nEnter Your Choise: ");
scanf("%c",&e);
if (e==e)
{
for (j=2;j<=100;j=j+2)
printf("\t%d",j);
{
printf("\n\nTo Calculate Sum Of Above Numbers, Press (S): ");
scanf("%s",&s);
if (s==s)
{
for (j=2;j<=100;j=j+2)
y=y+j;
printf("\nThe Sum Of Above Even Numbers Is: %d",y);
}
}
}
else
{
for (j=1;j<=100;j=j+2)
printf("\t%d",j);
{
printf("\n\nTo Calculate Sum Of Above Numbers, Press (S): ");
scanf("%s",&s);
if (s==s)
{
for (j=1;j<=100;j=j+2)
y=y+j;
}
printf("\nThe Sum Of Above Odd Numbers Is: %d",y);
}
}
getch();
}