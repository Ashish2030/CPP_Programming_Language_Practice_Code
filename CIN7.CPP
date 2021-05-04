//Program to Swap or Interchange the Value Without using Third Variable
#include<iostream.h>
#include<conio.h>
main()
{
int a,b;
clrscr();
cout<<"Enter the Value of a= ";
cin>>a;
cout<<"Enter the Value of b= ";
cin>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<"\nAfter Swapping Value of a= "<<a;
cout<<"\nAfter Swapping Value of b= "<<b;
getch();
}