#include <process.h>
#include <iostream.h>
#include <errno.h>
#include <time.h>
#include <stdio.h>

int main(int argc,char *argv[])
{
clock_t start,end;
FILE *fp;
int j;
char bb = 'f';
float var;
char aa[45]="The time that complies the program is : ";

cout << "Command line arguments:\n\n";
for (int i = 0; i < argc; ++i)
{
   cout << "Argument [" << i << "] : " << argv[i] << '\n';
}
   cout << "Measuring the time that needs to comply program ["
	<< argv[i-1] << ".cpp" << ']' << "\n\n";


for(j=0;j<argc;++j)
{
   if((argv[j][0]=='-') && (argv[j][1]=='o'))
   {
      fp=fopen(argv[j+1],"w");
      bb = 't';
   }
   if((argv[j][0]=='b') && (argv[j][1]=='c') && (argv[j][2]=='c'))
      argv=argv+j;
}


start = clock();

int result = spawnvp(P_WAIT,"bcc",argv);

end = clock();
var = (end - start) / CLK_TCK;

if (bb == 't')
{
   fprintf(fp,"%s",aa);
   fprintf(fp,"%8.3f %s",var,"second(s)");
   fclose(fp);
}

if ((result != -1) && (bb != 't'))
{
    cout << "The time that complies the program is : "
	 << var << " second(s)" << '\n';
}

if (result == -1)
{
   perror("execution error");
} 

return result;
}



