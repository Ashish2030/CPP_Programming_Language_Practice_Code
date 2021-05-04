#include<iostream.h>
#include<conio.h>
main()
{
int la[10],i,k,n,p;
clrscr();
cout<<"enter how many elements:\n";
cin>>n;
cout<<"enter elements:\n";
for(i=1;i<=n;i++)
{
cin>>la[i];
}
cout<<"traversing is:\n";
for(i=1;i<=n;i++)
{
p=la[i];
cout<<p;
cout<<"\n";
}
getch();
}
