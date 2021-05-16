#include<iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	for(int j=1;j<=n;j++){

		int num=j;
		int i;
		for(i=2;i<num;i++){
			if(num%i==0){
				break;
			}
		}

		if(i==num){
			cout<<j<<" ";
		}

	
	}

	cout<<endl;

	return 0;
}