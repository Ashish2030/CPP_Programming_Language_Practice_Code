// Program to make palindrome.
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
s=s*10+r;
q=q/10;
}
if (n==s)
{
printf("Given Number Is Palindrome");
}
else
{
printf("Given Number Is Not Palindrome");
}
getch();
}


