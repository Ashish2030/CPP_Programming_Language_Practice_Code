//Friend functin 2
#include<iostream.h>
#include<conio.h>
class sample2;
class sample1
{
int x;
public:sample1 (int x1)
{
x=x1;
}
friend void small (sample1 s1,sample2 s2);
};
class sample2
{
int y;
public :sample2 (int y1)
{
y=y1;
}
friend void small (sample1 s1,sample2 s2);
};
void small (sample1 s1,sample2 s2)
{
if(s1.x<s2.y)
cout<<"the data of object s1 is small";
else
cout<<"the data of object s2 is small";
}
void main()
{
sample1 s1(20);
sample2 s2(30);
clrscr();
small(s1,s2);
getch();
}