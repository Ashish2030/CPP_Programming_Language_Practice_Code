#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char a[30],b[30];
int l;
clrscr();
printf("Enter the String = ");
scanf("%s",a);
strcpy(b,a);
strrev(b);
l=strcmp(a,b);
if(l==0)
{
printf("String is Palindrome");
}
else
{
printf("String is not Palindrome");
}
getch();
}
