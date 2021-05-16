#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int rnum=0;

    while(n!=0){ //condition

        int r=n%10;

        rnum=rnum*10+r;

        // Updation
        n/=10;

    }

    cout<<rnum<<endl;

    return 0;
}