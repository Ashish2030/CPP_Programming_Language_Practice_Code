#include<iostream>
#include<map>
#include<list>
#include<cstring>
#include<unordered_map>
using namespace std;

class graph{

    map<string,list<string> >mp;

public:

    void addEdge(string u,string v){
        mp[u].push_back(v);
    }

    void dfs_helper(string src,unordered_map<string,bool>&visited,list<string>&ordering){

        visited[src]=true;

        for(auto nbr:mp[src]){
            if(!visited[nbr]){
                dfs_helper(nbr,visited,ordering);
            }
        }

        ordering.push_front(src);

        return;
    }


    void toplogical_sort(){

        unordered_map<string,bool>visited;

        list<string>ordering;

        string src="English";

        dfs_helper(src,visited,ordering);

        for(auto city:mp){
            if(!visited[city.first]){
                dfs_helper(city.first,visited,ordering);
            }
        }

        for(auto city:ordering){
            cout<<city<<" ";
        }
        cout<<endl;

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
   

    g.toplogical_sort();


    return 0;
}