#include<iostream>
using namespace std;

int main(){

    int a[]={5,4,1,2,3};
    int n=sizeof(a)/sizeof(int);

    for(int i=1;i<n;i++){

        int hand=a[i];
        int j=i-1;

        while(j>=0 && hand<a[j]){

            a[j+1]=a[j];

            j--;
        }
        a[j+1]=hand;

    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}