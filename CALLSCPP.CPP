#include<iostream.h>
#include<conio.h>
main()
{
float calls, amt;
clrscr();
cout<<"Enter the Class = ";
cin>>calls;
if(calls>0&&calls<100)
{
amt=200;
cout<<"The Net Bill is = "<<amt;
}
else if(calls>=100&&calls<150)
{
amt=200+.60*(calls-100);
cout<<"The Net Bill is = "<<amt;
}
else if(calls>=150&&calls<200)
{
amt=200+.50*(calls-100);
cout<<"The Net Bill is = "<<amt;
}
else if(calls>=200)
{
amt=.40*calls;
cout<<"The Net BIll is = "<<amt;
}
getch();
}