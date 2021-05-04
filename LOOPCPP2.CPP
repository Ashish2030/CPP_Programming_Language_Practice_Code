//Program to Compute a Square Value by Using goto statement
#include<iostream.h>
#include<conio.h>
#include<math.h>
main()
{
int x,y;
clrscr();
start:
cout<<"Enter the Value of x = ";
cin>>x;
if(x<0)
{
goto start;
}
y=sqrt(x);
cout<<"Square Root of "<<x<<" is "<<y;
getch();
}