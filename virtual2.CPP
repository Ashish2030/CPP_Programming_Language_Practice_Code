//Pure virtual function
#include<iostream.h>
#include<conio.h>
class B
{
public:
virtual void show()
{
cout<<"this is in class b ";
}
};
class D1 :public B
{
public:void show()
{
cout<<"this is in class D1";
}
};
class D2:public B
{
public : void show()
{
cout<<"this is in class D2";
}
};
void main()
{
B *p;
D1 obj1;
D2 obj2;
B objbase;
p= &objbase;
p->show();
p= &obj1;
p->show();
p= &obj2;
p->show();
getch();
}
