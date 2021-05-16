#include<iostream>
using namespace std;

int setBits(int n){

	int ans=0;
	int count=0;
	while(n){
		ans+=(n&1);
		n=n>>1;
		count++;
	}

	cout<<"setbits count : "<<count<<endl;

	return ans;
}

int setBitsFast(int n){

	int ans=0;
	int count=0;
	while(n){
		n=n&(n-1);
		ans++;
		count++;
	}

	cout<<"setbits count Fast : "<<count<<endl;

	return  ans;
}




int main(){
  
  int n;
  // cin>>n;

  // cout<<__builtin_popcount(n)<<endl;
  // cout<<setBits(n)<<endl;
  // cout<<setBitsFast(n)<<endl;

  cout<<power(2,5)<<endl;
 
 return 0;
}