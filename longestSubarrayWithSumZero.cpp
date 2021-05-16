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

int longestSubarrayWithZeroSum(vector<int>a,int n){


	unordered_map<int,int>mp;
	
	int len=0;
	int pre=0;

	for(int i=0;i<n;i++){

		pre+=a[i];

		if(pre==0){
			len=max(len,i+1);
		}

		if(mp[pre]){
			len=max(len,i-mp[pre]);
		}
		else{
			mp[pre]=i;
		}

	}

	return len;
}

int32_t main(){

	int n;
	cin>>n;

	vector<int>a(n);

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	cout<<longestSubarrayWithZeroSum(a,n)<<endl;


	return 0;
}