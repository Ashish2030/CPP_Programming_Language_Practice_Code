// Program to do transpose of a matrix.
#include<stdio.h>
#include<conio.h>
main()
{
int a[4][4], b[4][4], i,j,m,n;
clrscr();
printf("Enter The Order Of Matrix (a*b):\n");
scanf("%d %d",&m,&n);
printf("\nEnter Elements Of Matrix:\n");
for (i=1;i<=m;i++)
for (j=1;j<=n;j++)
scanf("%d",&a[i][j]);
for (i=1;i<=m;i++)
for (j=1;j<=n;j++)
b[i][j]=a[j][i];
printf("\nTranspose Of Obtained Matrix Is:\n");
for (i=1;i<=m;i++)
{
for (j=1;j<=n;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
getch();
}