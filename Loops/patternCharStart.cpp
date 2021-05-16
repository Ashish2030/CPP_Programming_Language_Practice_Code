#include<iostream>
using namespace std;

int main(){


    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=n;j++){
            if(j<=i){
                cout<<ch<<" ";
                ch=ch+1;
            }else{
                cout<<"*"<<" ";
            }
        }
        cout<<endl;

    }


    return 0;
}