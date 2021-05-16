#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

bool compare(string a,string b){

	if(a.size()==b.size()){
		return a<b;
	}
	else if(a.size()>b.size()){
		return false;
	}else{
		return true;
	}
}

int main(){
  
  // int a[]={5,3,4,1,2};
  string a[]={"grapes","orange","banana","guava","pineapple"};
  int n=5;


  sort(a,a+n,compare);

  for(int i=0;i<5;i++){
  	cout<<a[i]<<" ";
  }
  cout<<endl;
 
 return 0;
}