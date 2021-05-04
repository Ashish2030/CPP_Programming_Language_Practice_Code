//Program Compute Volume of Box
#include<iostream.h>
#include<conio.h>
main()
{
float l,b,h,vol;
clrscr();
cout<<"Enter the Length= ";
cin>>l;
cout<<"Enter the Breadth= ";
cin>>b;
cout<<"Enter the Height = ";
cin>>h;
vol=l*b*h;
cout<<"\nThe Volume of Box is = "<<vol;
getch();
}