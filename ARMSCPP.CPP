#include<iostream.h>
#include<conio.h>
main()
{
int n,q,r,s;
clrscr();
cout<<"\nenter an integer:";
cin>>n;
q=n;
s=0;
while(q>0)
{
r=q%10;
s=s+r*r*r;
q=q/10;
}
if(n==s)
{
cout<<"value is armstrong";
}
else
{
cout<<"Value is not armstonrg";
}
getch();
}