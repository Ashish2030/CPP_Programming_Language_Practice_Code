#include<iostream.h>
#include<conio.h>
void line (char f);
void line (int c);
void main()
{
int c1;
char f1;
clrscr();
cout<<"enter an integer number";
cin>>c1;
cout<<"enter a character";
cin>>f1;
cout<<"line by integer number";
line (c1);
cout<<"line by character";
line (f1);
getch();
}
void line (char f)
{
for(int i=1;i<=4;i++)
cout<<"\n"<<f;
}
void line (int c)
{
for(int j=1;j<=4;j++)
cout<<"\n"<<c;
}