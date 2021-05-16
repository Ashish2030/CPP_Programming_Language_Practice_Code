#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
 	
 	int n,k;
 	cin>>k>>n;

 	vector<int>v(n*k);
 	vector<int>arr1(n);
 	vector<int>arr2(n);
 	vector<int>ans(2*n);


 	for(int i=0;i<n*k;i++){
 		cin>>v[i];
 	}	

 	for(int i=0;i<n;i++){
 		arr1[i]=v[i];
 	}
 	k--;

 	int l=n;

 	while(k--){
 		for(int j=0;j<n;j++){
 			arr2[j]=v[l++];
 		}
 		merge(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),ans.begin());
 		arr1.swap(ans);
 		arr2.clear();
 		ans.clear();

 		arr2.resize(n);
 		ans.resize(arr1.size()+n);
 	}

 	ans.swap(arr1);

 	for(int i=0;i<ans.size();i++){
 		cout<<ans[i]<<" ";
 	}
 	cout<<endl;

 
 
 	return 0;
}
 		
