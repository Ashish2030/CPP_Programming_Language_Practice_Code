#include<stdio.h>
#include<conio.h>
main()
{
int i,j,n,a,y=0,p,u,t;
char e,o,s;
clrscr();
printf("Your 100 Natural Numbers are = \n");
for(i=1;i<=100;i++)
{
printf("\t%d",i);
}
printf("\n\nYour Elgible Choices = ");
printf("\n******************************************************\n");
printf("\n E used for even\n");
printf("\n O used for odd\n");
printf("\n******************************************************\n");
scanf("%c",&e);
if('e'==e)
{
for(j=2;j<=100;j=j+2)
printf("\t%d",j);
{
printf("\nIf you are sum the all numeric written S = ");
scanf("%s", &s);
if('s'==s)
{
for(j=2;j<=100;j=j+2)
y=y+j;
printf("\n The sum of Even numerical = %d",y);
}
}
}
else
{
for(j=1;j<=100;j=j+2)
printf("\t%d",j);
{
printf("\n\nIf you are sum the all numeric written S = ");
scanf("%s", &s);
if('s'==s)
{
for(j=1;j<=100;j=j+2)
y=y+j;
}
printf("\nThe sum of odd numerical = %d",y);
}
}
printf("\n\n Your Program is overed. \n");
printf("\n************* THANKS ...! ***************");
getch();
}
