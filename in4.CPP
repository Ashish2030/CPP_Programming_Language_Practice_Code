#include<iostream.h>
#include<conio.h>
class B
{
protected :int x,y;
public:void assign()
{
x=10;
y=20;
}
};
class D1:public B
{
int s;
public:void add()
{
s=x+y;
cout<<"x+y"<<s;
}
};
class D2:public B
{
int t;
public:void sub()
{
t=x-y;
cout<<"x-y"<<t;
}
};
class D3:public B
{
int m;
public:void mul()
{
m=x*y;
cout<<"x*y="<<m;
}
};
void main()
{
D1 d1;
D2 d2;
D3 d3;
clrscr();
d1.assign();
d1.add();
d2.assign();
d2.sub();
d3.assign();
d3.mul();
getch();
}