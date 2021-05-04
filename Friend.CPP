//Friend function
#include<iostream.h>
#include<conio.h>
class sample
{
int x;
int y;
public:
sample (int a,int b)
{
x=a;
y=b;
}
friend int add (sample S1)
{
return(S1.x+S1.y);
}
void main()
{
sample S2(20,30);
int sum;
clrscr(0;
sum=add(S2);
cout<<"sum of private data of object S2";
cout<<sum;
getch();
}