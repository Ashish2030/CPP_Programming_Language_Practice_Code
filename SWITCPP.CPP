#include<iostream.h>
#include<conio.h>
main()
{
int a,b,c,d;
clrscr();
cout<<"Enter the Value of a = ";
cin>>a;
cout<<"Enter the value of B = ";
cin>>b;
cout<<"\n\nPress 1 for Addition = ";
cout<<"\nPress 2 for Subtraction = ";
cout<<"\nPress 3 for Multiply = ";
cout<<"\nPress 4 for Divide = \n";
cout<<"\nEnter the choice = ";
cin>>c;
switch(c)
{
case 1:
d=a+b;
cout<<"\nAddition is ="<<d;
break;
case 2:
d=a-b;
cout<<"\nSubtraction is = "<<d;
break;
case 3:
d=a*b;
cout<<"\nMultiplication is = "<<d;
break;
case 4:
d=a/b;
cout<<"\nDivide is = "<<d;
break;
default :
cout<<"Stupid ! ";
break;
}
getch();
}