  /* WAP TO ADD MATRIX USING ARRAY */
#include<iostream.h>
#include<conio.h>
main()
{
int a[4][4], b[4][4], sum[4][4],i,j;
clrscr();
cout<<"Enter the elements of first matrix \n";
for(i=1;i<=2;i++)
for(j=1;j<=2;j++)
cin>>a[i][j];
cout<<"Enter the elements of second matrix x \n";
for(i=1;i<=2;i++)
for(j=1;j<=2;j++)
cin>>b[i][j];
for(i=1;i<=2;i++)
for(j=1;j<=2;j++)
sum[i][j]=a[i][j]+b[i][j];
cout<<"Added matrix is \n";
for(i=1;i<=2;i++)
{
for(j=1;j<=2;j++)
{
cout<<sum[i][j]<<"\t";
}
cout<<"\n";
}
getch();
}