#include<iostream.h>
#include<conio.h>
class complex
{
int r;
int i;
public:void getdata()
{
cout<<"enter real part";
cin>>r;
cout<<"enter image part";
cin>>i;
}
void operator++()
{
++r; ++i;
}
void showdata()
{
cout<<r<<"+i"<<i;
}
};
void main()
{
complex c1;
clrscr();
c1.getdata();
cout<<"number before increment";
c1.showdata();
c1++;
cout<<"number after increment";
c1.showdata();
getch();
}