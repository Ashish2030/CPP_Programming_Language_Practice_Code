// Program to check divisibility of a given number.
#include<stdio.h>
#include<conio.h>
main()
{
int i,c,n;
int clrscr();
printf("Enter Any Number= ");
scanf("%d",&n);
for (i=2;i<=100;i++)
{
c=n%i;
if (c==0)
{
printf("\n%d Is Divisible By %d",n,i);
}
}
getch();
}

