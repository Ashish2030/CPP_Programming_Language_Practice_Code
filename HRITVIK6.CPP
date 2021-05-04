// Program to make tables.
#include<stdio.h>
#include<conio.h>
main()
{
int n,i,j,m;
clrscr();
printf("Enter The Value Of N= ");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
printf("\n\nTable Of %d Is= ",i);
for (j=1;j<=10;j++)
{
m=i*j;
printf("\n%d * %d = %d",i,j,m);
}
getche();
}
getche();
}
