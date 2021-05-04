#include<stdio.h>
#include<conio.h>
main()
{
int n,i,sum=0,a;
clrscr();
float av;
printf("Enter the No.=");
scanf("%d",&n);
i=1;
while(i<=n)
{
printf("\nEnter any Number:");
scanf("%d",&a);
if(a<0)
{
continue;
}
sum=sum+a;
printf("\nSum is= %d",sum);
i++;
}
av=(float)sum/n;
printf("\nAverage is= %f",av);
getch();
}

