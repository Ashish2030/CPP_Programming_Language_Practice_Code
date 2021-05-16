#include<iostream>
using namespace std;

void bubbleSortRec(int a[],int n,int i,int j){

	if(i==n-1){
		return;
	}

	// for(int j=0;j<n;j++){
	// 	if(a[j]>a[j+1]){
	// 		swap(a[j],a[j+1]);
	// 	}
	// }

	if(j==n-1){
		bubbleSortRec(a,n,i+1,0);
		return;
	}

	if(a[j]>a[j+1]){
		swap(a[j],a[j+1]);
	}

	bubbleSortRec(a,n,i,j+1);

}

void bubbleSort(int *a,int n){

	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}

int main(){
 	
 	int a[]={5,4,3,2,1};
 	int n=sizeof(a)/sizeof(int);

 	bubbleSortRec(a,n,0,0); 
 	// bubbleSort(a,n);

 	for(int i=0;i<n;i++){
 		cout<<a[i]<<" ";
 	}
 	cout<<endl;
 
 return 0;
}