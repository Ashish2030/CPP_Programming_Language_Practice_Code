#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("enter a no ");
	scanf("%d",&a);
	b=2;
	while(b<a)
	{
	   if(a%b==0)
	   {
		break;
	   }
	   else
	   {
		b++;
	   }
	}
	if(a==b)
	{
		printf("no. is prime.");
	}
	else
	{
		printf("not a prime no.");
	}
	getch();
}