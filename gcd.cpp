// GCD
#include<iostream>
using namespace std;


int main(){
 
 	int n,m;

 	cin>>n>>m;

 	int limit=min(n,m);

 	for(int i=limit;i>=1;i--){
 		if(n%i==0&&m%i==0){
 			cout<<i<<endl;
 			break;
 		}
 	} 
 


 return 0;
}
