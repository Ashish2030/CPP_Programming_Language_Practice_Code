 /*WAP TO FIND THE LARGE NUMBER BETWEEN MANY NUMBERS USING ARRAY*/
#include<stdio.h>
#include<conio.h>
main()
{
int n,i, a[15], large;
clrscr();
printf("Enter number of integers = \n");
scanf("%d", &n);
printf("Enter Number \n");
for(i=1;i<=n;i++)
scanf("%d", &a[i]);
large=a[i];
for(i=1;i<=n;i++)
if(a[i]>large)
large=a[i];
printf("Largest Number is : %d", large);
getch();
}