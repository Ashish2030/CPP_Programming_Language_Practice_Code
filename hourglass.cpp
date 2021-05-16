#include<iostream>
using namespace std;

int main(){


	int n;
	cin>>n;

	int row=1;

	int m=0;

	while(row<=2*n+1){

		row<=(n+1) ? m++:m--;

		int val=n;
		int i=1;


		while(i<=m){
			cout<<val;
			val=val-1;
			i=i+1;
		}


		int space=1;

		while(space<=2*n+1-2*m){
			cout<<" ";
			space++;
		}

		val=val+1;

		if(row==n+1){
			val++;
		}

		while(val<=n){
			cout<<val;
			val++;
		}

		cout<<endl;
		row++;
	}
  
 return 0;
}