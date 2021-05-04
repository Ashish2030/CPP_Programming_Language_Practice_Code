#include<stdio.h>
#include<conio.h>
#include<process.h>
main()
{
int a[10],i,s;
clrscr();
printf("\n Enter 10 values : ");
for(i=1;i<10;i++)
scanf("%d", &a[i]);
printf("\n Enter value to be searched : ");
scanf("%d", &s);
for(i=1;i<10;i++)
if(a[i]==s)
{
printf("\n Search is succesful and value is at : %d position", i);
getch();
exit(0);
}
printf("\nUnsuccessful");
getch();
}

