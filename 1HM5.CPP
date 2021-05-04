// Program to count negative elements form the list.
#include<stdio.h>
#include<conio.h>
main()
{
int a[10],i,c,n;
clrscr();
printf("\nEnter The Number Of Numbers: ");
scanf("%d",&n);
printf("\nEnter The Elements:\n");
for (i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
c=0;
for (i=1;i<=n;i++)
{
if (a[i]<0)
{
c=c+1;
}
}
printf("\nNumber Of Negative Elements Are: %d",c);
getche();
}