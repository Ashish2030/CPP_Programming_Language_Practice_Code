//W.A.P. to find a No. divisible by 2 to 100.
#include<stdio.h>
#include<conio.h>
main()
{
int i,c,n;
clrscr();
printf("\nEnter the Number = ");
scanf("%d",&n);
for(i=2;i<=100;i++)
{
c=n%i;
if(c==0)
{
printf("\n%d is divisible by %d",n,i);
}
}
getch();
}