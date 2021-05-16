#include<iostream>
using namespace std;

bool compare(string a,string b){

	if(a.size()>b.size()&&a.substr(0,b.size())==b){
		return true;
	}
	if(b.size()>a.size()&&b.substr(0,a.size())==a){
		return false;
	}

	return a<b;
}

int main(){
 	
 	string a[1000];
 	int n;
 	cin>>n;


 	for(int i=0;i<n;i++){
 		cin>>a[i];
 	} 

 	sort(a,a+n,compare);

 	for(int i=0;i<n;i++){
 		cout<<a[i]<<endl;
 	}
 	// cout<<endl;
 
 return 0;
}