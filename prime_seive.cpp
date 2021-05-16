#include<iostream>
using namespace std;

#define int long long int

const int N=100005;

int p[N]={0};


void prime_seive(){


	p[2]=1;

	// mark all odd as prime
	for(int i=3;i<N;i+=2){
		p[i]=1;
	}

	for(int i=3;i<N;i+=2){
		if(p[i]){
			for(int j=i*i;j<N;j+=i){
				p[j]=0;
			}
		}
	}

}

int32_t main(){


	prime_seive();

	int m,n;
	int t;
	cin>>t;
	while(t--){

		cin>>m>>n;

		for(int i=m;i<=n;i++){
			if(p[i]){
				cout<<i<<" ";
			}
		}
		cout<<endl;

	}
 
 return 0;
}