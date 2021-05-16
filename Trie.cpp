#include<iostream>
#include<unordered_map>
#include<cstring>
using namespace std;


class node{
public:

	bool isTerminal;
	char ch;
	unordered_map<char,node*>mp;

	node(char data){
		ch=data;
		isTerminal=false;
	}
};

class Trie{

	node*root;

public:

	Trie(){
		root=new node('\0');
	}

	void AddWord(string word){

		node*temp=root;

		for(int i=0;i<word.size();i++){
			char ch=word[i];
			if(temp->mp.count(ch)==0){
				node*n=new node(ch);
				temp->mp[ch]=n;
				temp=n;
			}else{
				temp=temp->mp[ch];
			}

		}
		temp->isTerminal=true;
	}

	bool searchWord(string word){

		node*temp=root;

		for(int i=0;i<word.size();i++){
			char ch=word[i];

			if(temp->mp.count(ch)==0){
				return false;
			}else{
				temp=temp->mp[ch];
			}
		}
		return temp->isTerminal;
	}

	void solve(char ch,node*temp,vector<char>p){

		if(temp->isTerminal==true and mp.count(temp->char)==0){
			return;
		}

		for(auto x:temp->mp[ch]){
			
		}



	}

	void print(string word){
		node*temp=root;
		vector<char>p;

		for(int i=0;i<word.size();i++){
			char ch=word[i];
			if(temp->mp.count(ch)==0){
				return;
			}else{
				temp=temp->mp[ch];
				p.push_back(ch);
				solve(char ch,temp,p);
			}
		}

	}

	

};


int main(){
 	

	Trie T;

	T.AddWord("bat");
	T.AddWord("batman");
	T.AddWord("aabbc");
	T.AddWord("abc");

	if(T.searchWord("batman")){
		cout<<"Present"<<endl;
	}else{
		cout<<"Not Present"<<endl;
	}

 
 return 0;
}