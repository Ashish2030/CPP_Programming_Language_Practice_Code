#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int max(int a,int b){

	return a<b?b:a;
}

int solve(int *a,int n){

	vector<int>s;
	int m=0;

	s.push_back(a[0]);
	int flag=0;
	int sflag=0;

	for(int i=1;i<n;i++){
		int curr=a[i];
		
		if(s[s.size()-1]<curr){
			
			if(sflag==1){
				m=max(s.size(),m);
				int temp=s[s.size()-1];
				s.clear();
				s.push_back(temp);
				s.push_back(curr);
				sflag=0;
			}else{
				s.push_back(curr);
				flag=1;
			}

		}

		else if(flag==0&&s[s.size()-1]>curr){
			s.clear();
			s.push_back(curr);
		}

		else if(s[s.size()-1]==curr){
			s.clear();
			s.push_back(curr);
			sflag=0;
			flag=0;
		}

		else if(flag==1&&s[s.size()-1]>curr){
			s.push_back(curr);
			m=max(m,s.size());
			sflag=1;
		}
	}

	if(m<3){
		return 0;
	}

	return m;
}

int main(){

	// int a[]={2,1,4,7,3,2,5,6,8,9,12,10,9,8,7,8,9,12,2};
	int a[]={2,3,3,2,0,2};
	int n=sizeof(a)/sizeof(int);

	cout<<solve(a,n)<<endl;
 	

 
 return 0;
}