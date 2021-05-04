// Program to identify number if odd or even.
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int n,m;
clrscr();
printf("Enter Any Number= ");
scanf("%d",&n);
m=fmod(n,2);
if (m==0)
{
printf("\nGiven Number Is Even");
}
else
{
printf("\nGiven Number Is Odd");
}
getch();
}
