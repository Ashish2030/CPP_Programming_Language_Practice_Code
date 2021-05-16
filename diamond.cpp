#include<iostream>
#include<climits>
#include<unordered_map>
using namespace std;

#define int long long int


int32_t main(){

	int n;
	cin>>n;

	int row=1;

	int m=n;

	while(row<=2*n-1){

		int space=1;

		row<=n?m--:m++;

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