#include<stdio.h>
#include<conio.h>
main()
{
int n,q,r,s;
clrscr();
printf("\nenter an integer:");
scanf("%d",&n);
q=n;
s=0;
while(q>0)
{
r=q%10;
s=s+r;
q=q/10;
}
printf("\nsum of digit is = %d",s);
getch();
}
