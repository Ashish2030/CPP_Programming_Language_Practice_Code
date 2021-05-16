#include<iostream>
#include<vector>
using namespace std;

void solve(int a[],int n,int i,vector<int>temp){

	if(i==n){
		for(int i=0;i<temp.size();i++){
			cout<<temp[i]<<" ";
		}
		cout<<endl;
		return;
	}

	temp.push_back(a[i]);
	solve(a,n,i+1,temp);
	temp.pop_back();
	solve(a,n,i+1,temp);

}

int main(){
 	
 	int a[]={1,2,3,4,5};

 	vector<int>temp;
 	solve(a,5,0,temp); 
  
 return 0;
}