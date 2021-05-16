#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int countBits(int n){

	int ans=0;
	while(n>0){
		ans++;
		n>>=1;
	}

	return ans;
}


int uniqueNumber3(vector<int>v,int t){

	int count[32]={0};
	int k=0;


	int n=t;
	while(t--){
		
		for(int i=0;i<v.size();i++){
			count[k]+=v[i]&1;
			v[i]=v[i]>>1;
			count[k]%=3;
		}
		k++;

	}

	for(int i=0;i<v.size();i++){
		cout<<count[i]<<" ";
	}
	cout<<endl;

	int uniqueNum=0;
	int p=1;


	for(int i=0;i<n;i++){
		uniqueNum+=p*count[i];
		p*=2;
	}

	return uniqueNum;
}


int main(){

	int n;
	cin>>n;

	vector<int>v;

	for(int i=0;i<n;i++){
		int d;
		cin>>d;
		v.push_back(d);
	}

	int m=INT_MIN;
	for(int i=0;i<n;i++){
		m=max(m,v[i]);
	}

	int bits=countBits(m);

	cout<<uniqueNumber3(v,bits)<<endl;
  
 
 return 0;
}