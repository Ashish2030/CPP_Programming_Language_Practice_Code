#include<iostream>
using namespace std;

void solve(int n,int pos){


	int mask=1;
	mask=mask<<(pos-1);

	if(mask&n){
		cout<<"1"<<endl;
	}else{
		cout<<"0"<<endl;
	}

}

void setBitInRange(int n,int s,int e){

	




}

int main(){
 	
 	int n,pos;

 	cin>>n>>pos;

 	solve(n,pos);
 
 return 0;
}