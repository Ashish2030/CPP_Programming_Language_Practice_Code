#include<stdio.h>
#include<conio.h>
main()
{
int n,q,r,s,c;
clrscr();
printf("Enter the Value of n = ");
scanf("%d",&n);
q=n;
s=0;
printf("\n1 for Sum of Digit ");
printf("\n2 for Rev of Digit ");
printf("\n3 for Arms of Digit");
printf("\n4 for Palin of Digit");
printf("\n\nEnter Your Choice = ");
scanf("%d",&c);
switch(c)
{
case 1:
while(q>0)
{
r=q%10;
s=s+r;
q=q/10;
}
printf("\n %d Sum of Digit is = %d",n,s);
break;
case 2:
while(q>0)
{
r=q%10;
s=s*10+r;
q=q/10;
}
printf("\n%d Reverse of Digit is = %d",n,s);
break;
case 3:
while(q>0)
{
r=q%10;
s=s+r*r*r;
q=q/10;
}
if(n==s)
{
printf("\n%d is Armstrong ",n);
}
else
{
printf("\n%d is Not Armstrong ",n);
}
break;
case 4:
while(q>0)
{
r=q%10;
s=s*10+r;
q=q/10;
}
if(n==s)
{
printf("\n%d is Palindrome ",n);
}
else
{
printf("\n%d is not Palindrome ",n);
}
break;
default:
printf("\nOver Limit");
break;
}
getch();
}