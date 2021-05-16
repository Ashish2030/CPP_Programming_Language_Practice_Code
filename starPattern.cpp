#include<iostream>
using namespace std;

int main(){
 

	int n;
	cin>>n;

	int row=1;

	int m=n;

	while(row<=2*n-1){

		row<=n ? m-- : m++;

		int space=1;

		while(space<=m){
			cout<<" ";
			space++;
		}

		int val=1;

		while(val<=n-m){
			cout<<val;
			val++;
		}

		val=val-2;

		while(val>=1){
			cout<<val;
			val--;
		}

		cout<<endl;
		row++;
	}

 
 return 0;
}