//WAP to String Comparison Function
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char a[]="hello";
char b[]="world";
int l;
clrscr();
l=strcmp(a,b);
printf("String Comparison is = %d",l);
getch();
}