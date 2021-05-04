#include<iostream.h>
#include<conio.h>
main()
{
int a,b,c,add(int,int);
clrscr();
cout<<"Enter the Value of a = ";
cin>>a;
cout<<"Enter the Value of b = ";
cin>>b;
add(a,b);
getch();
}
int add(int p, int q)
{
int s;
s=p+q;
cout<<"The Sum is = "<<s;
}
