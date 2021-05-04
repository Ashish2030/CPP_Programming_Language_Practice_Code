c
#include<iostream.h>
#include<conio.h>
class bio
{
char name[20];
char semester[20];
int age;
int rn;
public:
void getbio();
void showbio();
};
class marks
{
char sub[10];
float total;
public:
void getm();
void showm();
};
class final: public bio, public marks
{
long int phno;
public:
void getph();
void showph();
};
void bio::getbio()
{
cout<<"enter name";
cin>>name;
cout<<"enter semester";
cin>>semester;
cout<<"enter age";
cin>>age;
cout<<"enter rn";
cin>>rn;
}

void bio::showbio()
{
cout<<"name"<<name;
cout<<"semester"<<semester;
cout<<"age"<<age;
cout<<"rn"<<rn;
}
void marks::getm()
{
cout<<"enter subject name";
cin>>sub;
cout<<"enter marks";
cin>>total;
}
void marks::showm()
{
cout<<"sub name"<<sub;
cout<<"marks are"<<total;
}
void final::getph()
{
cout<<"phone no"<<phno;
}
void final::showph()
{
cout<<"phno"<<phno;
}
void main()
{
final f;
clrscr();
f.getbio();
f.getm();
f.getph();
f.showbio();
f.showm();
f.showph();
getch();
}
