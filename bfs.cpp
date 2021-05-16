#include<iostream>
#include<list>
#include<unordered_map>
#include<queue>
#include<map>
#include<climits>
using namespace std;

class graph{

	unordered_map<int,list<int> >mp;
	

public:

	

	void addEdge(int u,int v){
		mp[u].push_back(v);
		mp[v].push_back(u);

	}

	void print(){

		for(auto x:mp){
			cout<<x.first<<"-->";
			for(auto y:x.second){
				cout<<y<<" ";
			}
			cout<<endl;
		}
	}

	void SSSP(int src){

		map<int,int>dist;

		for(auto x:mp){
			dist[x.first]=INT_MAX;
		}

		queue<int>Q;

		dist[src]=0;
		Q.push(src);

		while(!Q.empty()){

			int node=Q.front();
			cout<<node<<" ";
			Q.pop();

			for(auto nbr:mp[node]){
				if(dist[nbr]==INT_MAX){
					dist[nbr]=1+dist[node];
					Q.push(nbr);
				}
			}

		}

		for(auto x:dist){
			cout<<x.first<<"-->"<<x.second<<endl;
		}

	}




};

int main(){


	graph g;

	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(1,3);
	g.addEdge(1,4);
	g.addEdge(3,4);
	g.addEdge(4,5);


	// g.print();
	g.SSSP(0);
  
  
 return 0;
}