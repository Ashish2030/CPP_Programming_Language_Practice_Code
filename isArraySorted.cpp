#include<iostream>
using namespace std;

bool isArraySorted(int a[],int n){

	if(n==1){
		return true;
	}

	if(a[0]<=a[1]&&isArraySorted(a+1,n-1)){
		return true;
	}

	return false;
}

int main(){

	int a[]={5,2,3,4,5};
	int n=sizeof(a)/sizeof(int);

	if(isArraySorted(a,n)){
		cout<<"Sorted!!"<<endl;
	}else{
		cout<<"Not Sorted"<<endl;
	}
  
 
 return 0;
}