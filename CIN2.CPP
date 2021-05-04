//Program to compute the circumference and volume of sphere
#include<iostream.h>
#include<conio.h>
#define PI 3.1427
main()
{
float cir,vol,r;
clrscr();
cout<<"Enter the Radius of the Sphere : ";
cin>>r;
cir=4*PI*r*r;
vol=4/3*PI*r*r*r;
cout<<"\nThe Circumefernce of the Sphere is = "<<cir;
cout<<"\n\nThe Volume of the Sphere is = "<<vol;
getch();
}