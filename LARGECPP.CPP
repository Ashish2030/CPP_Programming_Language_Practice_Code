 /*WAP TO FIND THE LARGE NUMBER BETWEEN MANY NUMBERS USING ARRAY*/
#include<iostream.h>
#include<conio.h>
main()
{
int n,i, a[15], large;
clrscr();
cout<<"Enter number of integers = \n";
cin>>n;
cout<<"Enter Number \n";
for(i=1;i<=n;i++)
cin>>a[i];
large=a[i];
for(i=1;i<=n;i++)
if(a[i]>large)
large=a[i];
cout<<"Largest Number is : "<<large;
getch();
}