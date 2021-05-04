#include<stdio.h>
#include<conio.h>
main()
{
int a[4][4], b[4][4], sum[4][4],i,j,t;
printf("Enter the elements of first matrix \n");
for(i=1;i<=2;i++)
for(j=1;j<=2;j++)
scanf("%d", &a[i][j]);
printf("\nEnter the elements of second matrix x \n");
for(i=1;i<=2;i++)
for(j=1;j<=2;j++)
scanf("%d", &b[i][j]);
for(i=1;i<=2;i++)
for(j=1;j<=2;j++)
sum[i][j]=a[i][j]+b[i][j];
printf("\nAdded matrix is \n");
for(i=1;i<=2;i++)
{
for(j=1;j<=2;j++)
printf("%d\t", sum[i][j]);
printf("\n");
}
printf("\n\nPress (t) To Do Transpose Of Obtained Matrtix: ");
scanf("%d",&t);
if (t==t)
b[i][j]=a[j][i];
getch();
}
