#include<iostream.h>
#include<conio.h>
main()
{
int a[4][4], b[4][4], i,j,m,n;
clrscr();
cout<<"Enter the order of matrix \n";
cin>>m>>n;
cout<<"Enter elements of matrix = \n";
for(i=1;i<=m;i++)
for(j=1;j<=n;j++)
cin>>a[i][j];
for(i=1;i<=m;i++)
for(j=1;j<=n;j++)
b[i][j]=a[j][i];
cout<<"\nTranspose matrix is \n";
for(i=1;i<=m;i++)
{
for(j=1;j<=n;j++)
{
cout<<b[i][j]<<"\t";
}
cout<<"\n";
}
getch();
}