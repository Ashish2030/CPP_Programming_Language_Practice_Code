//Program to Compute the Simple Interest & Compound Interest
#include<iostream.h>
#include<conio.h>
#include<dos.h>
main()
{
float p,r,t,si,ci;
clrscr();
cout<<"Enter the Principal = ";
cin>>p;
cout<<"Enter the Rate = ";
cin>>r;
cout<<"Enter the Time = ";
cin>>t;
si=(p*r*t)/100;
cout<<"Simple Interest is = "<<si;
sleep(5);
}