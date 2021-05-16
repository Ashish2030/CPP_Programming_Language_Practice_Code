#include<iostream>
#include<map>
#include<list>
#include<cstring>
#include<unordered_map>
#include<queue>
#include<vector>

using namespace std;


class dsu{

public:
    vector<int>par;
    int connected_com;



    dsu(int n){
        par.resize(n);
        connected_com=n;
        for(int i=0;i<n;i++){
            par[i]=i;
        }
    }

    int getsuperparent(int x){

        if(x==par[x]){
            return x;
        }

        return par[x]=getsuperparent(par[x]);
    }

    void unite(int x,int y){

        int super_parent_x=getsuperparent(x);
        int super_parent_y=getsuperparent(y);

        if(super_parent_x!=super_parent_y){
            par[super_parent_x]=super_parent_y;
            connected_com--;
        }

        cout<<"Connected Comp : "<<connected_com<<endl;
    }



};


int main(){

    dsu G(5);

    cout<<G.connected_com<<endl;

    G.unite(0,1);
    G.unite(2,4);
    G.unite(1,4);





    return 0;
}