#include<stdio.h>
#include<conio.h>
main()
{
long int n,q,r,s;
clrscr();
printf("\n Enter an integer number : ");
scanf("%ld", &n);
q=n;
s=0;
while(q>0)
{
r=q%10;
s=s*10+r;
q=q/10;
}
while(s>0)
{
r=s%10;
switch(r)
{
case 1: printf(" One");
break;
case 2: printf(" Two");
break;
case 3: printf(" Three");
break;
case 4: printf(" Four");
break;
case 5: printf(" Five");
break;
case 6: printf(" Six");
break;
case 7: printf(" Seven");
break;
case 8: printf(" Eight");
break;
case 9: printf(" Nine");
break;
case 0: printf(" Zero");
break;
}
s=s/10;
}
getch();
}