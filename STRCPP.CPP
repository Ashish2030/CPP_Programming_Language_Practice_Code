#include<iostream.h>
#include<conio.h>
#include<string.h>
main()
{
char a[30],b[30];
int l;
clrscr();
cout<<"Enter the String = ";
cin>>a;
strcpy(b,a);
strrev(b);
l=strcmp(a,b);
if(l==0)
{
cout<<"String is Palindrome";
}
else
{
cout<<"String is not Palindrome";
}
getch();
}
