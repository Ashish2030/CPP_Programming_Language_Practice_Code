#include<stdio.h>
#include<conio.h>
main()
{
int n,i,j,m;
clrscr();
printf("Enter the value of n=");
scanf("%d",&n);
i=1;
while (i<=n)
{
printf("\ntable of %d is=",i);
i++;
j=1;
while (j<=10)
{
m=i*j;
printf("\n%d= %d",i,j,m);
j++;
}
getche();
}
getche();
}

