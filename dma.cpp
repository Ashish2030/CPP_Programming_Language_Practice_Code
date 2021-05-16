// DMA
#include<iostream>
using namespace std;

void fun(int b){

	int *p=new int[b];

	cout<<"Fun Called"<<endl;

	sort(p,p+b);
	

	delete []p;
}

int main(){
 	
 	fun(10);

 	// cout<<*ptr<<endl;


 
 return 0;
}
