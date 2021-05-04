//Program to find the area of circumference of the circle
#include<iostream.h>
#include<conio.h>
#define PI 3.1427
main()
{
float cir,area,r;
clrscr();
cout<<"Enter the Radius of the Circle : ";
cin>>r;
cir=2*PI*r;
area=PI*r*r;
cout<<"\nThe Circumefernce of the Circle is = "<<cir;
cout<<"\n\nThe Area of the Circle is= "<<area;
getch();
}