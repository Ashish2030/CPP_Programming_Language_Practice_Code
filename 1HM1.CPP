// Program to add numbers of a given integer.
#include<stdio.h>
#include<conio.h>
main()
{
int n,q,r,s;
clrscr();
printf("\nEnter An Integer= ");
scanf("%d",&n);
q=n;
s=0;
while (q>0)
{
r=q%10;
s=s+r;
q=q/10;
}
printf("\nSum Of Digits Is= %d",s);
getch();
}

