#include<iostream>
#include<map>
#include<list>
#include<cstring>
#include<unordered_map>
#include<queue>
using namespace std;

class graph{

    map<string,list<string> >mp;

public:

    void addEdge(string u,string v){
        mp[u].push_back(v);
    }

    void topological_sort(string src){

        unordered_map<string,int>indegree;
        queue<string>q;

        for(auto x:mp){
            for(auto y:x.second){
                indegree[y]++;
            }
        }

        for(auto x:mp){
            if(indegree[x.first]==0){
                q.push(x.first);
            }
        }

        while(!q.empty()){

            string node=q.front();

            cout<<node<<" ";

            q.pop();


            for(auto nbr:mp[node]){
                indegree[nbr]--;
                if(indegree[nbr]==0){
                    q.push(nbr);
                }
            }
        }

    }


};

int main(){

    graph g;

    g.addEdge("English","Program Logic");
    g.addEdge("Maths","Program Logic");
    g.addEdge("English","HTML");
    g.addEdge("Program Logic","HTML");
    g.addEdge("HTML","CSS");
    g.addEdge("Program Logic","Python");
    g.addEdge("Program Logic","JS");
    g.addEdge("Program Logic","Java");
    g.addEdge("Python","WebD");
    g.addEdge("Java","WebD");
    g.addEdge("JS","WebD");
    g.addEdge("CSS","JS");

    g.topological_sort("English");
    cout<<endl;
   

   


    return 0;
}