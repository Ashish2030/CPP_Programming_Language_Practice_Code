// BostonNumber
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int digitKaSum(int n){

	int sum=0;
	while(n){

		sum+=n%10;
		n/=10;

	}
	return sum;
}

int sumOfFactors(int n){

	int sum=0;

	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			sum+=digitKaSum(i);
			n/=i;
		}
	}

	if(n>0){
		sum+=digitKaSum(n);
	}

	return sum;

}

int main(){

	int num;
	cin>>num;

	if(digitKaSum(num)==sumOfFactors(num)){
		cout<<"1"<<endl;
	}else{
		cout<<"0";
	}


 return 0;
}