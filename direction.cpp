#include<iostream>
using namespace std;

int main(){ 

    char ch;

    ch=cin.get();

    int N=0,S=0,E=0,W=0;

    while(ch!='\n'){

        if(ch=='E'){
            E++;
            W--;
        }
        else if(ch=='W'){
            W++;
            E--;
        }
        else if(ch=='N'){
            N++;
            S--;
        }
        else if(ch=='S'){
            S++;
            N--;
        }
        ch=cin.get();
    }

    while(E>0){
        cout<<"E";
        E--;
    }
    while(N>0){
        cout<<"N";
        N--;
    }

    while(S>0){
        cout<<"S";
        S--;
    }
    while(W>0){
        cout<<"W";
        W--;
    }

    cout<<endl;
    
    return 0;
}