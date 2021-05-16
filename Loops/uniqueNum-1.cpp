#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    int uniqueNum=0;

    while(i<=n){
        
        int num;
        cin>>num;

        uniqueNum^=num;

        i++;
    }

    cout<<uniqueNum<<endl;
  

    return 0;
}