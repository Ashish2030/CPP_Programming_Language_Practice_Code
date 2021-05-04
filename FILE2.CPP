#include<fstream.h>
void main()
{
ifstream infile("Result");
char name[80], name1[80], name2[80];
infile>>name;
infile>>name1;
infile>>name2;
cout<<name<<name1<<name2<<endl;
infile.close();
}
