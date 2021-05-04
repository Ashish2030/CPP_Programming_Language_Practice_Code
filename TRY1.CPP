#include <stdio.h>
#include <iostream.h>
#include <stdlib.h>
#include <values.h>
#include <time.h>
#include <string.h>

const int max=1000;
int list[max];
FILE *fp;

void insertion(int aa[],int max1)
{
    int a,b,v;

    for(a=1;a<max1;a++)
    {
       v = aa[a];
       b = a;
       while(aa[b-1] > v)
       {
	   aa[b] = aa[b-1];
	   b = b - 1;
       }
       aa[b] = v;
    }
}

void quicksort(int min1,int max2)
{
int t;

if (max2 > min1)
{
   int v = list[max2];
   int i = min1 - 1;
   int j = max2;
   do
   {
      do
      {
	 i = i + 1;
      } while (list[i] < v);
      do
      {
	 j = j - 1;
      } while (list[j] > v);
      int t = list[i];
      list[i] = list[j];
      list[j] = t;
   } while (j > i);
   list[j] = list[i];
   list[i] = list[max2];
   list[max2] = t;
   quicksort(min1,i-1);
   quicksort(i+1,max2);
 }
}

void main()
{

int i,j,k,l;
char any1[8],any2[8];

cout << "Enter a file name\n";
cin >> any1;
/*if(strlen(any1) > 12)
   cout << "File name input error."; */


fp = fopen(any1,"wb");
    for(j=0;j<30000;j++)
    {
	k = rand();
	fprintf(fp,"%d\n",k);
    }
fclose(fp);
fp = fopen(any1,"rb");
    i = 0;
    while (fscanf(fp,"%d\n",l) != 0)
    {
	  list[i] = l;
	  i = i + 1;
    }
fclose(fp);

/*int min = 0;
quicksort(min,max); */
insertion(list,max);

cout << "Enter an output file : ";
cin >> any2;
fp = fopen(any2,"wb");
  for(i=0;i<max;i++)
  {
      int r = list[i];
      fwrite(&r,sizeof(int),1,fp);
  }
fclose(fp);
}



