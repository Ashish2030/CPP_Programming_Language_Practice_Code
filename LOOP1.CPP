//Program to Illustrate the Concept of Continue Statement
#include<stdio.h>
#include<conio.h>
main()
{
int n,i,sum=0,a;
int clrscr();
float av;
printf("Enter the Value of n= ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\nEnter any Number : ");
scanf("%d",&a);
if(a<0)
{
continue;
}
sum=sum+a;
}
printf("\nSum is = %d",sum);
av=(float)sum/n;
printf("\nAverage is = %f",av);
getch();
}
