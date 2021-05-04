/* WAP TO Multiply MATRIX USING ARRAY */
#include<stdio.h>
#include<conio.h>
main()
{
int a[3][3],b[3][3],c[3][3],k,i,j;
clrscr();
printf("Enter the elements of first matrix \n");
for(i=1;i<=3;i++)
for(j=1;j<=3;j++)
scanf("%d", &a[i][j]);
printf("Enter the elements of second matrix  \n");
for(i=1;i<=3;i++)
for(j=1;j<=3;j++)
scanf("%d", &b[i][j]);
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
c[i][j]=0;
for(k=1;k<=3;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
printf("\nMultiplication is : \n");
for(i=1;i<=3;i++)
{
printf("\n");
for(j=1;j<=3;j++)
{
printf("\t%d",c[i][j]);
}
}
getch();
}/*Program Developed By : Shaveta Girdhar, Roll No. 1070

OUTPUT :
	Enter the elements of first matrix :
	1	2	3
	2	3	1
	3	5	6
	Enter the elements of second matrix
	2	3	5
	1	2	0
	0	2	1
	Multiplication is :
	4	13	8
	7	14	11
	11	31	21     */