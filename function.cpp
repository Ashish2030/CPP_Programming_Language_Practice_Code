#include<iostream>
using namespace std;


bool kyaEvenHai(int n){

	if(n%2==0){
		return true;
	}
	
	return false;
}

int fact(int n){

	if(n==0){
		return 1;
	}

	return n*fact(n-1);
}

int nCr(int n,int r){


	return fact(n)/(fact(r)*fact(n-r));
}

int main(){


	int n;
	cin>>n;

	if(kyaEvenHai(n)){
		cout<<"Even"<<endl;
	}else{
		cout<<"Oddd"<<endl;
	}

	cout<<nCr(3,3)<<endl;

 return 0;
}