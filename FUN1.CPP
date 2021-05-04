#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,add(int,int);
clrscr();
printf("Enter the Value of a = ");
scanf("%d",&a);
printf("Enter the Value of b = ");
scanf("%d",&b);
add(a,b);
getch();
}
int add(int p, int q)
{
int s;
s=p+q;
printf("The Sum is = %d",s);
}
