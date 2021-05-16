#include<iostream>
#include<map>
#include<list>
#include<cstring>
#include<unordered_map>
#include<queue>
#include<algorithm>
using namespace std;

int main(){

    int a[]={1,2,3,4,5};

    int n=sizeof(a)/sizeof(int);

    int k;
    cin>>k;

    reverse(a,a+n);

    reverse(a,a+k);

    reverse(a+k,a+n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;




    return 0;
}