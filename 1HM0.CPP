// Program to reverse a given number.
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
s=s*10+r;
q=q/10;
}
printf("\n%d Is Reversed As %d",n,s);
getch();
}


