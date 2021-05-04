#include<stdio.h>
#include<conio.h>																																						  /*Transponsing*/
main()
{
int a[4][4], b[4][4], i,j,m,n;
clrscr();
printf("Enter the order of matrix \n");
scanf("%d%d",&m,&n);
printf("Enter elements of matrix = \n");
for(i=1;i<=m;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);
for(i=1;i<=m;i++)
for(j=1;j<=n;j++)
b[i][j]=a[j][i];
printf("\nTranspose matrix is \n");
for(i=1;i<=m;i++)
{
for(j=1;j<=n;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
getch();
}