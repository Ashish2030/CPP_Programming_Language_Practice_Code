#include <stdio.h>
#include <iostream.h>
#include <stdlib.h>
#include <values.h>
#include <time.h>



void main()
{
int i,j,k,l,list[1000];
FILE *fp;
char any[8];

cout << "Enter a file name\n";
cin >> any;

fp = fopen(any,"wb");
    for(j=0;j<50;j++)
    {
       for(i=0;i<200;i++)
       {
	   k = rand() % RAND_MAX;
	   fwrite(&k,sizeof(int),1,fp);
       }
    }
/*fclose(fp);

fp = fopen(any,"rb");   */
    i = 0;
    while (fread(&l,sizeof(int),1,fp) != 0)
    {
	  list[i] = l;
	  i = i + 1;
    }
fclose(fp);

for (i=0;i<50;i++)
    cout << list[i] << '\n';

/*for(i=0;i<900;i++)
    {
	k = list[i];
	fwrite(&k,sizeof(int),1,fp);
    }

fp = fopen("ggg.txt","wb");
    for(int a=1;a<900;a++)
    {
       int v = list[a];
       int b = a;
       while(list[b-1] > v)
       {
	   list[b] = list[b-1];
	   b = b - 1;
       }
       list[b] = v;
    }
    for(i=0;i<900;i++)
    {
	k = list[i];
	fwrite(&k,sizeof(int),1,fp);
    }
fclose(fp);    */


}



