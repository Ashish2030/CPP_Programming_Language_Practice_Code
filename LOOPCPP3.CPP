//Program to Illustrte the Concept of Break Statement
#include<iostream.h>
#include<conio.h>
main()
{
int n,i,sum;
clrscr();
cout<<"Enter the Value of n = ";
cin>>n;
sum=0;
for(i=1;i<=n;i++)
{
sum=sum+i;
if(i==7)
{
break;
}
}
cout<<"The Sum is = "<<sum;
getch();
}