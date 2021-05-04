#include<iostream.h>
#include<conio.h>
class complex
{
int r,i;
public : complex(int a,int b)
{
r=a;
i=b;
}
void show()
{
cout<<r<<"+i"<<i;
}
};
void main()
{
int x,y;
clrscr();
cout<<"enter real part";
cin>>x;
cout<<"enter image part";
cin>>y;
complex c1 (x,y);
complex c2(c1);
cout<<"first no is";
c1.show();
cout<<"second no is";
c2.show();
getch();
}