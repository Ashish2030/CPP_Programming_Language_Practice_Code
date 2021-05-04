#include<stdio.h>
#include<conio.h>
main()
{
int n,i,sum;
clrscr();
printf("Enter The Value Of N= ");
scanf("%d",&n);
sum=0;
for (i=1;i<=n;i++)
{
sum=sum+i;
if (i==7)
{
break;
}
}
printf("The Sum Is= %d",sum);
getch();
}
