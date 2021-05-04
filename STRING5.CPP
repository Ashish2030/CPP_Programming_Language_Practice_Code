//WAP to String Copy Function
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char a[]="HELLO";
char b[30];
clrscr();
strcpy(b,a);
printf("Original String is = %s",a);
printf("\nCopy String is = %s",b);
getch();
}