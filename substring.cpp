#include<iostream>
using namespace std;


int main(){
	
	string s;
	cin>>s;

	int len=s.size();

	int a[100][100]={0};

	int i=0;
	int j=0;

	while(i<len){

		a[i][j]=1;
		i++;
		j++;
	}

	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			if(j>i&&s[i]==s[j]){
				a[i][j]=1+a[i][j-1];
			}
		}
	}

	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
 	

 return 0;
}