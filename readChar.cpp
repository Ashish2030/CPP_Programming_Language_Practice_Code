#include<iostream>
using namespace std;

int main(){ 

    char ch;

    ch=cin.get();

    int countA=0;
    int countN=0;
    int countWspaces=0;
    int countOthers=0;

    while(ch!='$'){

        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
            countA++;
        }
        else if(ch>='0'&&ch<='9'){
            countN++;
        }
        else if(ch=='\n'||ch=='\t'||ch==' '){
            countWspaces++;
        }else{
            countOthers++;
        }

        ch=cin.get();
    }

    cout<<"Char : "<<countA<<endl;
    cout<<"Number : "<<countN<<endl;
    cout<<"White Spaces : "<<countWspaces<<endl;
    cout<<"Others : "<<countOthers<<endl;

    return 0;
}