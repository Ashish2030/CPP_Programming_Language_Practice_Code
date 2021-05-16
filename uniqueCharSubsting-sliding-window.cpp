#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
#include<stack>
#include<queue>
#include<set>
#include<cstring>
#include<cmath>
#include<queue>
#include<algorithm>

using namespace std;

#define int long long int



int solve(string s){

	deque<char>Q;
	unordered_map<char,int>mp;
	int len=0;

	for(int i=0;i<s.size();i++){
		

		if(mp.count(s[i])!=0){
			len=max(len,Q.size());
			while(Q.front()!=s[i]){
				char ch=Q.front();
				mp.erase(ch);
				Q.pop_front();
			}
			mp.erase(Q.front());
			Q.pop_front();
		}

		mp[s[i]]=i;
		Q.push_back(s[i]);

	}

	return max(len,Q.size());
}

int32_t main(){

	// string s="abcdabflmnobacd";

	string s="abcabcdeexyzwstr";
	cout<<solve(s)<<endl;



return 0;
}