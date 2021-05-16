#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<map>
#include<stack>
#include<queue>
#include<set>
#include<cstring>
#include<cmath>

using namespace std;

#define int long long int

bool subarraySumZero(vector<int>a,int n){

	int cs[n+1];

	cs[0]=a[0];
	// cs[1]=a[0];
	for(int i=1;i<n;i++){
		cs[i]=cs[i-1]+a[i];
	}

	int sum=-1;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(i==0){
				sum=cs[j];
			}else{
				sum=cs[j]-cs[i-1];
			}
			if(sum==0){
				// return true;
			}
			cout<<"[ "<<i<<" , "<<j<<" ] : "<<sum<<endl;
		}
	}
	cout<<endl;

	return false;
}

bool checkSubarrayOptimised(vector<int>arr,int n){

	vector<int>cs(n);
    cs[0]=arr[0];
    
    unordered_map<int,bool>mp;
    
    mp[cs[0]]=true;
    
    for(int i=1;i<n;i++){
        cs[i]=cs[i-1]+arr[i];
        if(cs[i]==0){
            return true;
        }
        if(mp[cs[i]]){
            return true;
        }
        mp[cs[i]]=true;
    }
    
    //Your code here
    return false;

}


int32_t main(){

	int n;
	cin>>n;

	vector<int>a(n);

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	if(subarraySumZero(a,n)){
		cout<<"True"<<endl;
	}else{
		cout<<"False"<<endl;
	}



return 0;
}