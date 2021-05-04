#include<iostream.h>
#include<conio.h>
class sample
{
int a,b;
public :
sample()
{
cout<<"this is constructor";
a=100; b=200;
}
int add()
{
return(a+b);
}
};
void main()
{
clrscr();
sample s;
cout<<"output is"<<s.add();
getch();
}