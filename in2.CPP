#include<iostream.h>
#include<conio.h>
class student
{
protected : char name[20];
int rn;
public : void getdata()
{
cout<<"enter name";
cin>>name;
cout<<"enter roll no";
cin>>rn;
}
void showdata()
{
cout<<"name"<<name;
cout<<"roll no"<<rn;
}
};
class marks: public student
{
protected :float sessional1;
float sessional2;
public:void getm()
{
cout<<"enter marks in sessional 1=";
cin>>sessional1;
cout<<"enter marks in sessional 2=";
cin>>sessional2;
}
void showm()
{
cout<<"sessional 1="<<sessional1;
cout<<"sessional 2="<<sessional2;
}
};
class result:public marks
{
float total;
public:void output()
{
total=sessional1+sessional2;
cout<<"total marks are "<<total;
}
};
void main()
{
result s1;
clrscr();
s1.getdata();
s1.getm();
cout<<" the record of student is";
s1.showdata();
s1.showm();
s1.output();
getch();
}