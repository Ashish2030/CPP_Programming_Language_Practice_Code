//Program to calculate average of n numbers.
#include<stdio.h>
#include<conio.h>
main()
{
int n,i,sum=0,a;
clrscr();
float av;
printf("Enter The Value Of N= ");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
printf("\nEnter Any Number= ");
scanf("%d",&a);
if (a<0)
{
continue;
}
sum=sum+a;
}
printf("\nSum Is= %d",sum);
av=(float)sum/n;
printf("\nAverage Is= %f",av);
getch();
}


