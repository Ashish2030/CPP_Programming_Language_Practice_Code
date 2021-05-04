#include<iostream.h>
#include<conio.h>
void area (float r);
void area (float l,float b);
void main()
{
float r1,b1,l1;
clrscr();
cout<<"enter value  of r1";
cin>>r1;
cout<<"enter value of l1";
cin>>l1;
cout<<"enter value of b1";
cin>>b1;
cout<<"area of circle is";
area (r1);
cout<<"area of rectangle is";
area (l1,b1);
getch();
}
void area (float r)
{
float a=3.14*r*r;
cout<<"area="<<a;
}
void area (float l,float b)
{
float a1=l*b;
cout<<"area="<<a1;
}