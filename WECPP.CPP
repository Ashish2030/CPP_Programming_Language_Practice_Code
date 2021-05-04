/* WAP to check the high number & low number between numbers ands
minus between high & low No0.*/

#include<iostream.h>
#include<conio.h>
main()
{
int a[10];
int c,s,l,n,i;
clrscr();
cout<<"\n No. of elements : ";
cin>>n;
cout<<"\n Enter elements : ";
for(i=0;i<n;i++)
cin>>a[i];
l=a[0];
s=a[0];
for(i=1;i<n;i++)
{
if(a[i]>l)
{
l=a[i];
}
if(a[i]<s)
{
s=a[i];
}
}
c=l-s;
cout<<"\n Range is "<<l<<" - "<<s<<" = "<<c;
getch();
}