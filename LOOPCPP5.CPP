//W.A.P. to Print the Fibbonici Series
#include<iostream.h>
#include<conio.h>
main()
{
int x,y,z,n,i;
clrscr();
x=0;
y=1;
cout<<"Enter the Value of n= ";
cin>>n;
cout<<"\nFibbonacci Series is = ";
cout<<"\n\n"<<x;
cout<<"\t"<<y;
for(i=0;i<=n-2;i++)
{
z=x+y;
x=y;
y=z;
cout<<"\t "<<z;
}
getch();
}
