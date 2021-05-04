//W.A.P. to Find a Given No. is Even or Odd.
#include<iostream.h>
#include<conio.h>
#include<math.h>
main()
{
int n,m;
clrscr();
cout<<"Enter the Number = ";
cin>>n;
m=fmod(n,2);
if(m==0)
{
cout<<"\nNumber is Even\n";
}
else
{
cout<<"\nNumber is Odd\n";
}
cout<<"\nEnd of Program";
getch();
}