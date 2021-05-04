#include<iostream.h>
#include<conio.h>
class student
{
private:
int a,b,c;
public:
void getdata()
{
cout<<"Enter the Value of a= ";
cin>>a;
cout<<"Enter the Value of b= ";
cin>>b;
}
void showdata()
{
c=a+b;
cout<<"The Sum is = "<<c;
}
};
void main()
{
student s;
clrscr();
s.getdata();
s.showdata();
getch();
}