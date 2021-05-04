#include<iostream.h>
#include<conio.h>
#include<process.h>
main()
{
int a[10],i,s;
clrscr();
cout<<"\n Enter 10 values : ";
for(i=1;i<10;i++)
cin>>a[i];
cout<<"\n Enter value to be searched : ";
cin>>s;
for(i=1;i<10;i++)
if(a[i]==s)
{
cout<<"\n Search is succesful and value is at : "<<i<<" Position";
getch();
exit(0);
}
cout<<"\nUnsuccessful";
getch();
}

