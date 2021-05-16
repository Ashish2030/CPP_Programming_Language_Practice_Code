#include<iostream>
#include<map>
#include<list>
#include<cstring>
#include<unordered_map>
#include<queue>
#include<vector>

using namespace std;

class dsu{

    vector<int>part;

public:

    dsu(int n){
        part.resize(n);

        for(int i=0;i<n;i++){
            part[i]=i;
        }

    }

    int get_superparent(int x){

        if(x==part[x]){
            return x;
        }

        return part[x]=get_superparent(part[x]);
    }

    void unite(int x,int y){

        int super_parent_x=get_superparent(x);
        int super_parent_y=get_superparent(y);

        if(super_parent_x!=super_parent_y){
            part[super_parent_x]=super_parent_y;
        }

    }

    bool detect_cycle(){

        int n,m;
        bool cycle_present=false;
        cin>>n>>m;

        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;

            if(get_superparent(x)!=get_superparent(y)){
                unite(x,y);
            }else{
                cycle_present=true;
            }

        }

        return cycle_present;
    }

};

int main(){

    dsu g(5);

    if(g.detect_cycle()){
        cout<<"Cycle is present"<<endl;
    }else{
        cout<<"Cycle not present"<<endl;
    }

    return 0;
}