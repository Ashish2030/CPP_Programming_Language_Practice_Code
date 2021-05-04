#include<stdio.h>
#include<conio.h>
main()
{
struct student
{
char a[30];
int age;
float fee;
};
struct student b;
clrscr();
printf("Enter the Name = ");
scanf("%s",b.a);
printf("Enter the Age = ");
scanf("%d",&b.age);
printf("Enter the Fees = ");
scanf("%f",&b.fee);
printf("\n\nThe Name is = %s",b.a);
printf("\nThe Age is = %d",b.age);
printf("\nThe Fee i s= %f",b.fees);
getch();
}