#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	cout<<"enter a no ";
	cin>>a;
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
	       cout<<"no. is prime.";
	}
	else
	{
		cout<<"not a prime no.";
	}
	getch();
}