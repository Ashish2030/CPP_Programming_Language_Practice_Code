#include<iostream>
#include<algorithm>
using namespace std;

int a[]={5,4,1,2,3};

bool compare(int x,int y){
	cout<<"Comparing --> "<<x<<" and "<<"--> "<<y<<endl;

	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl<<endl;

	return x<y;
}

int main(){
 	
 	
 	int n=5;

 	sort(a,a+n,compare);



 
 return 0;
}