#include<iostream>
using namespace std;

int main(){

	int n,decimalPoints;
	cin>>n>>decimalPoints;

	int cp=0;
	float inc=1;
	float ans=0;
	
	while(cp<=decimalPoints){

		while(ans*ans<=n){
			ans=ans+inc;
		}
		ans=ans-inc;
		inc=inc/10;
		cp=cp+1;
	}
	
	cout<<ans;

	cout<<endl;
	return 0;
}