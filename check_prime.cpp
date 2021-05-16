#include<iostream>
using namespace std;

int main(){


	int num;
	cin>>num;
	
	int i;

	for(i=2;i<num;i++){
		if(num%i==0){
			cout<<"Not Prime"<<endl;
			break;
		}
	}

	if(i==num){
		cout<<"Prime"<<endl;
	}



	return 0;
}