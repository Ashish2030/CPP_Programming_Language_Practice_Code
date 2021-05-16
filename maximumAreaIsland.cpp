#include<iostream>
using namespace std;

int solve(int a[][50],int i,int j,int r,int c){

	if(i<0||j<0||i>=r||j>=c||a[i][j]!=1){
		return 0;
	}

	a[i][j]=2;

	int q1=solve(a,i-1,j,r,c);
	int q2=solve(a,i+1,j,r,c);
	int q3=solve(a,i,j-1,r,c);
	int q4=solve(a,i,j+1,r,c);

	return 1+q1+q2+q3+q4;
}

int main(){
 	
 	int n,m;
 	cin>>n>>m;

 	int a[50][50];

 	for(int i=0;i<n;i++){
 		for(int j=0;j<m;j++){
 			cin>>a[i][j];
 		}
 	} 

 	int maxArea=INT_MIN;
 	
 	for(int i=0;i<n;i++){
 		for(int j=0;j<m;j++){
 			if(a[i][j]==1){
 				int area=solve(a,i,j,n,m);
 				maxArea=max(area,maxArea);
 			}
 		}
 	}

 	cout<<maxArea<<endl;
 
 return 0;
}