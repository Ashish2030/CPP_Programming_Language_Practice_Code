#include<iostream>
#include<map>
#include<list>
#include<cstring>
#include<unordered_map>
#include<queue>
using namespace std;

class dsu{

public:

    vector<int>part;

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

};

class graph{

    vector<vector<int> >edgelist;
    int V;

public:

    graph(int n){
        V=n;
    }

    void addEdge(int x,int y,int w){
        vector<int>temp;
        
        temp.push_back(w);
        temp.push_back(x);
        temp.push_back(y);

        edgelist.push_back(temp);
    }

    int kruskals_mst(){

        sort(edgelist.begin(),edgelist.end());
        int wt=0;

        dsu d(V);

        for(auto edge:edgelist){

            int w=edge[0];
            int x=edge[1];
            int y=edge[2];

            if(d.get_superparent(x)!=d.get_superparent(y)){
                d.unite(x,y);
                wt+=w;
            }
        }

        return wt;
    }
};



int main(){

    int n,m;
    cin>>n>>m;

    graph g(n);

    for(int i=0;i<m;i++){

        int x,y,w;

        cin>>x>>y>>w;

        g.addEdge(x,y,w);

    }

    cout<<g.kruskals_mst()<<endl;



    return 0;
}