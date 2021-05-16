#include<iostream>
using namespace std;

int cnt=0;

void filter(int n,string a){

	int j=0;
	while(n){

		int last_bit=n&1;
		if(last_bit){
			cout<<a[j];
		}
		j++;
		n=n>>1;
	}
	cout<<endl;

}

void printSubset(string a,int n){

	for(int i=0;i<=(1<<n)-1;i++){
		filter(i,a);
	}

	return;
}



void subsetUsingRec(string in,string out){

	if(in.size()==0){
		cnt++;
		cout<<out<<" "<<cnt<<endl;
		return;
	}

	char c1=in[0];

	subsetUsingRec(in.substr(1),out);
	subsetUsingRec(in.substr(1),out+c1);	
}

int main(){

	string a;
	cin>>a;

	// printSubset(a,a.length());
	subsetUsingRec(a,"");
  
 
 return 0;
}