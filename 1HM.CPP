#include<stdio.h>
#include<conio.h>
main()
{
int n,q,r,s;
clrscr();
printf("Enter An Integer= ");
scanf("%d",&n);
q=n;
s=0;
while (q>0)
{
r=q%10;
s=s+r*r*r;
q=q/10;
}
if (n==5)
{
printf("%d Is Armstrong",n);
}
else
{
printf("%d Is Not Armstrong",n);
}
getch();
}
