//Program to Swap or Interchange the Value Using Third Variable
#include<iostream.h>
#include<conio.h>
main()
{
int a,b,c;
clrscr();
cout<<"Enter the Value of a= ";
cin>>a;
cout<<"Enter the Value of b= ";
cin>>b;
c=a;
a=b;
b=c;
cout<<"\nAfter Swapping Value of a= "<<a;
cout<<"\nAfter Swapping Value of b= "<<b;
getch();
}