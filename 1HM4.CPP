// Program to do matrix multiplacation.
#include<stdio.h>
#include<conio.h>
main()
{
int i,j,k,r1,c1,r2,c2;
int a[10][10], b[10][10], c[10][10];
clrscr();
printf("Enter The Number Of Rows And Columns Of 1st Matrix:\n");
scanf("%d %d",&r1,&c1);
printf("\nEnter The Number Of Rows And Columns Of 2nd matrix:\n");
scanf("%d %d",&r2,&c2);
if (c1!=r2)
{
clrscr();
printf("Invalid Entry.\nMultiplacation Is Not Possible.");
goto ab;
}
printf("\nEnter The Elements Of 1st Matrix:\n");
for (i=0;i<r1;i++)
for (j=0;j<c1;j++)
scanf("%d",&a[i][j]);
printf("\nEnter The Elements Of 2nd Matrix:\n");
for (i=0;i<r2;i++)
for (j=0;j<c2;j++)
scanf("%d",&b[i][j]);
for (i=0;i<r1;i++)
{
for (j=0;j<c2;j++)
{
c[i][j]=0;
for (k=0;k<r2;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
printf("\nThe Multiplacation Is:");
for (i=0;i<r1;i++)
{
printf("\n");
for (j=0;j<c2;j++)
{
printf("%3d",c[i][j]);
}
}
ab:
getch();
}


