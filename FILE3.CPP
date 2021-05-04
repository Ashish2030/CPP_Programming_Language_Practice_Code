#include<fstream.h>
void main()
{
char name[80];
ifstream infile("Result");
while(infile)
{
infile.getline(name,80);
cout<<name<<endl;
}
}
