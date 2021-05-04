//WAP to String Copy Function
#include<iostream.h>
#include<conio.h>
#include<string.h>
main()
{
char a[]="HELLO";
char b[30];
clrscr();
strcpy(b,a);
cout<<"Original String is = "<<a;
cout<<"\nCopy String is = "<<b;
getch();
}