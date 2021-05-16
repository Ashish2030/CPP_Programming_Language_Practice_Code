#include<iostream>
#include<map>
#include<list>
#include<cstring>
#include<unordered_map>
#include<queue>
using namespace std;

void bubbleSort(int *a,int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

void selectionSort(int *a,int n){

    int min;
    for(int i=0;i<n;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
        swap(a[min],a[i]);
    }

}

void insertionSort(int *a,int n){
    int no,j;
    for(int i=1;i<n;i++){
        no=a[i];
        for(j=i-1;j>=0&&a[j]>no;j--){
            // a[j+1]=a[j];
            swap(a[j+1],a[j]);
        }
        a[j+1]=no;
    }

}


int main(){

    int a[]={5,4,1,2,3};
    int n=sizeof(a)/sizeof(int);

    // bubbleSort(a,n);

    // selectionSort(a,n);

    insertionSort(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}