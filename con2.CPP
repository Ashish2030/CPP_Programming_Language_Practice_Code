#include<iostream.h>
#include<conio.h>
class xyz
{
int a,b;
public : xyz (int a1,int b1)
{
a=a1;
b=b1;
}
int mul()
{
return(a*b);
}
};
void main()
{
int i,j;
clrscr();
cout<<"enter first no";
cin>>i;
cout<<"enter second no :";
cin>>j;
xyz c1(i,j);
cout<<"multiplication";
cout<<c1.mul();
getch();
}