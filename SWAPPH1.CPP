#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
clrscr();
printf("Enter Value Of A= ");
scanf("%d",&a);
printf("Enter Value Of B= ");
scanf("%d",&b);
{
c=a;
a=b;
b=c;
printf("\nAfter Swapping, Value Of A= %d",a);
printf("\nAfter swapping, Value Of B= %d",b);
}
getch();
}
