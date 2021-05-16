#include<iostream>
using namespace std;

int main(){
 
	int n;
	cin>>n;

	int row=1;

	int m=n;

	while(row<=2*n-1){

		row<=n ? m--:m++;

		int space=1;

		while(space<=m){
			cout<<" ";
			space++;
		}

		int star=1;

		while(star<=n-m){
			cout<<"*";
			star++;
		}

		star=star-2;

		int i=1;

		while(i<=star){
			cout<<"*";
			i++;
		}

		cout<<endl;
		row=row+1;
	}

 
 return 0;
}