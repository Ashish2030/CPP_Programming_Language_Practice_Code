//Program to Print the First N Tables.
#include<iostream.h>
#include<conio.h>
main()
{
int n,i,j,m;
clrscr();
cout<<"Enter the Value of n = ";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<"\nTable of "<<i<<" is ";
for(j=1;j<=10;j++)
{
m=i*j;
cout<<"\n"<<i<<" * "<<j<<" = "<<m;
}
getche();
}
getche();
}