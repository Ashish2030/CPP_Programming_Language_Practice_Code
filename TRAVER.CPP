#include<stdio.h>
#include<conio.h>
main()
{
int la[10],i,k,n,p;
clrscr();
printf("enter how many elements:\n");
scanf("%d",&n);
printf("enter elements:\n");
for(i=1;i<=n;i++)
{
scanf("%d",&la[i]);
}
printf("traversing is:\n");
for(i=1;i<=n;i++)
{
p=la[i];
printf("\t%d",p);
printf("\n");
}
getch();
}
