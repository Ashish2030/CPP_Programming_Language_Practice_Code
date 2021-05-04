//W.A.P. to Find a Given No. is Even or Odd.
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int n,m;
clrscr();
printf("Enter the Number = ");
scanf("%d",&n);
m=fmod(n,2);
if(m==0)
{
printf("\nNumber is Even\n");
}
else
{
printf("\nNumber is Odd\n");
}
printf("\nEnd of Program");
getch();
}