#include<iostream>
using namespace std;

int main(){
 

	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==(n+1)/2||j==(n+1)/2){
				cout<<"*";
			}
			else if(j==1&&i<=n/2){
				cout<<"*";
			}
			else if(i==1&&j>(n+1)/2){
				cout<<"*";
			}
			else if(j==n&&i>(n+1)/2){
				cout<<"*";
			}
			else if(i==n&&j<=(n+1)/2){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}


 
 return 0;
}