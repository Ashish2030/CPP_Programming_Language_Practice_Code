#include<iostream>
using namespace std;


int binarySearchRec(int a[],int s,int e,int key){

	if(s>e){
		return -1;
	}

	int mid=(s+e)/2;


	if(a[mid]==key){
		return mid;
	}
	else if(a[mid]>key){

		return binarySearchRec(a,s,mid-1,key);
	}else{

		return binarySearchRec(a,mid+1,e,key);
	}
}

int binarySearch(int *a,int s,int e,int key){

	while(s<=e){

		int mid=(s+e)/2;

		if(a[mid]==key){
			return mid;
		}
		else if(a[mid]>key){
			e=mid-1;
		}else{
			s=mid+1;
		}

	}

	return -1;
}

int linearSearch(int a[],int i,int n,int key){

	if(i==n){
		return -1;
	}

	if(a[i]==key){
		return i;
	}

	return linearSearch(a,i+1,n,key);
}


int main(){

	int a[]={2,3,4,7,9};
	int n=sizeof(a)/sizeof(int);
	int key=4;
	// cout<<binarySearch(a,0,n-1,key)<<endl;
	// cout<<binarySearchRec(a,0,n-1,key)<<endl;
	cout<<linearSearch(a,0,n,key)<<endl;

  
 
 return 0;
}