
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
s=s*10+r;
q=q/10;
}
cout<<"\n"<<n<<" is reversed as "<<s;
getch();
}
