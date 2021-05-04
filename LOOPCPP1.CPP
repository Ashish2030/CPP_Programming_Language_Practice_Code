//Program to Illustrate the Concept of Continue Statement
#include<iostream.h>
#include<conio.h>
main()
{
int n,i,sum=0,a;
clrscr();
float av;
cout<<"Enter the Value of n= ";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<"\nEnter any Number : ";
cin>>a;
if(a<0)
{
continue;
}
sum=sum+a;
}
cout<<"\nSum is = "<<sum;
av=(float)sum/n;
cout<<"\nAverage is = "<<av;
getch();
}