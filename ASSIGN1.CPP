/* A program to sort a range of numbers with Insertion
   and Quicksort, check their sorting time and prompt
   the result on the screen */


/* use header file*/
#include <stdio.h>
#include <iostream.h>
#include <stdlib.h>
#include <values.h>
#include <time.h>
#include <string.h>
#include <conio.h>

/* define variable */
const int max=29000;
int list[max];
FILE *fp;
clock_t start,end;
char any1[8];

/* Insertion sort module */
void insertion(int min1,int max1)
{
    int a,b,v;

    for(a=min1;a<=max1;a++)
    {
       v = list[a];
       b = a;
       do
       {
	   list[b] = list[b-1];
	   b = b - 1;
       }  while(list[b-1] > v);
       list[b] = v;
    }
}

/* sort partitioning element */
void sorthree(int x,int y,int z)
{
int temp;

if (list[x] > list[y])
{
   temp = list[x];
   list[x] = list[y];
   list[y] = temp;
}
if (list[z] < list[x])
{
   temp = list[x];
   list[x] = list[z];
   list[z] = temp;
   temp = list[y];
   list[y] = list[z];
   list[z] = temp;
}
if ((list[z] > list[x]) && (list[z] < list[y]))
{
   temp = list[y];
   list[y] = list[z];
   list[z] = temp;
}
}

/* Quicksort module */
void quicksort(int min2,int max2)
{
int m,v,t,i,j,q;

if ((max2-min2) > 9)
{
   m = (max2-min2+1)/2;
   sorthree(min2,m,max2);
   max2=max2-1;
   q = list[m];
   list[m] = list[max2];
   list[max2] = q;

   v = list[max2];
   i = min2+1;
   j = max2-1;
   do
   {
      do
      {
	 i=i+1;
      } while (list[i] < v);
      do
      {
	 j=j-1;
      } while (list[j] > v);
      t = list[i];
      list[i] = list[j];
      list[j] = t;
   }  while (i<j);
   list[j]=list[i];
   list[i]=list[max2];
   list[max2]=t;
   quicksort(min2,i-1);
   quicksort(i+1,max2);
 }
else
 insertion(m,max2);
}


/* main program */
void main()
{
int i,j,k,min,max1;
char any2[8];

clrscr();
cout << "Enter a file name to store data :";
cin >> any1;                                  /* input data file name on */
cout << '\n' << "Generating file...waits\n\n";/*   screen */

fp = fopen(any1,"w");
    for(j=0;j<max/200;j++)
    {
       for(i=0;i<200;i++)    /* write random values to file */
       {
	   k = rand();
	   fprintf(fp,"%d\n",k);
       }
    }
fclose(fp);

fp = fopen(any1,"r");
    i = 0;
    while(fscanf(fp,"%d\n",&k) != EOF)
    {
	  list[i] = k;  /* read values from file and assign to an array */
	  i = i + 1;
    }
fclose(fp);
min = 0;
max1 = max;
max1=max1-1;
cout << "Sorting with Quicksort... waits" << '\n';
start = clock();
quicksort(min,max1);   /* sort an unsorted list with quicksort */
end=clock();
float result = (end-start)/CLK_TCK;
cout << "The time needs to sort " << max
     << " numbers in Quciksort is : " << result << " second(s)" << "\n\n";


cout << "Enter an output file for Quicksort : ";
cin >> any2;

fp = fopen(any2,"w");
  for(i=0;i<max;i++)
  {                   /* write the output from quicksort and put them */
      k = list[i];    /*to a file */
      fprintf(fp,"%d\n",k);
  }
fclose(fp);

fp = fopen(any1,"r");
    i = 0;
    while(fscanf(fp,"%d\n",&k) != EOF)
    {
	  list[i] = k;
	  i = i + 1;
    }
fclose(fp);
cout << "\nSorting with Insertion Sort... waits" << '\n';
start = clock();
insertion(0,max);   /* sort an unsorted list with insertion sort */
end=clock();
result = (end-start)/CLK_TCK;
cout << "The time needs to sort " << max
     << " numbers in Insertion is : " << result << " second(s)" << "\n\n";

cout << "Sort an already sorted array again with Quicksort..." << '\n';
min = 0;
max1 = max;
max1=max1-1;
start = clock();
quicksort(min,max1);  /* sort an already sort list with quicksort */
end=clock();
result = (end-start)/CLK_TCK;
cout << "The time needs to sort " << max
     << " numbers in Quicksort is : " << result << " second(s)" << "\n";

cout << "Sort an already sorted array again with Insertion sort..." << '\n';
start = clock();
insertion(0,max);   /* sort an already list with insertion sort */
end=clock();
result = (end-start)/CLK_TCK;
cout << "The time needs to sort " << max
     << " numbers in Insertion sort is : " << result << " second(s)" << '\n';
}



