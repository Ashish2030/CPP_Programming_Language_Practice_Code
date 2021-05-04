#include<iostream.h>
#include<conio.h>
#include<dos.h>
main()
{
int salary;
clrscr();
cout<<"Enter Salary=";
cin>>salary;
if(salary>10000)
{
cout<<"Manager";
}
else if(salary>8000)
{
cout<<"Assistant Manager";
}
else if(salary>4000)
{
cout<<"Clerk";
}
else if(salary<4000)
{
cout<<"Peon";
}
sleep(2);
}
