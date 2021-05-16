#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int j;

    for(int no=2;no<=n;no++){
        
        for(j=2;j<no;j++){
            if(no%j==0){
                break;
            }
        }
        if(j==no){
            cout<<no<<" ";
        }

    }

    cout<<endl;

    return 0;
}