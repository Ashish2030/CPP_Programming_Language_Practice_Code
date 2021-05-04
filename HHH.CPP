#include<stdio.h>
#include<conio.h>
main()
{
int a[4][4], b[4][4], sum[4][4], i,j,d;
clrscr();
printf("Enter The Elements Of 1st Matrix:\n");
for (i=1;i<=2;i++)
for (j=1;j<=2;j++)
scanf("%d",&a[i][j]);
printf("\nEnter The Elements Of 2nd Matrix:\n");
for (i=1;i<=2;i++)
for (j=1;j<=2;j++)
scanf("%d",&b[i][j]);
for (i=1;i<=2;i++)
for (j=1;j<=2;j++)
sum[i][j]=a[i][j]+b[i][j];
printf("\nAdded Matrix is:\n");
for (i=1;i<=2;i++)
{
for (j=1;j<=2;j++)
printf("%d\t",sum[i][j]);
printf("\n");
}
printf("\nPress 1 For Transpose Of Obtained Matrix");
printf("\n\nPress 2 For End Program");
switch (d)
{
case 1:
printf("Transpose Of Matrix Is:");
break;
case 2:
printf("End Of Program");
break;
default:
printf("Invalid Entry");
break;
}
getch();
}


