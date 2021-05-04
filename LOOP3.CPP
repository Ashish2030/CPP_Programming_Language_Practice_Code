//Program to Illustrte the Concept of Break Statement
#include<stdio.h>
#include<conio.h>
main()
{
int n,i,sum;
clrscr();
printf("Enter the Value of n = ");
scanf("%d",&n);
sum=0;
for(i=1;i<=n;i++)
{
sum=sum+i;
if(i==7)
{
break;
}
}
printf("The Sum is = %d",sum);
getch();
}