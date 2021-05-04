//W.A.P. to find a No. divisible by 2 to 100.
#include<iostream.h>
#include<conio.h>
main()
{
int i,c,n;
clrscr();
cout<<"\nEnter the Number = ";
cin>>n;
for(i=2;i<=100;i++)
{
c=n%i;
if(c==0)
{
cout<<"\n"<<n<<" is divisible by "<<i;
}
}
getch();
}