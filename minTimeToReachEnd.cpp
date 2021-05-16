#include<iostream>
using namespace std;

int solve(int *a,int n,int i){

	if(i>=n-1){
		return 0;
	}


	int s1,s2;
	s1=1+solve(a,n,i+1);
	if(a[i]==0){
		s2=1+solve(a,n,i+1);
	}else{
		s2=1+solve(a,n,i+a[i]);
	}
	return min(s1,s2);
}

int main(){
 	
 	int n;
 	cin>>n;
 	int a[10000];

 	for(int i=0;i<n;i++){
 		cin>>a[i];
 	}

 	cout<<solve(a,n,0)<<endl;

 
 return 0;
}