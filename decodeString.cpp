#include<iostream>
#include<stack>
#include<cstring>
#include<algorithm>
using namespace std;

stack<char>v,m;

void solve(string s){


	int b=0;
	string ans="";

	for(int i=0;i<s.size();i++){
		if(s[i]=='['){
			b++;
		}
		v.push(s[i]);
	}

	// cout<<b<<endl;

	int count=1;

	while(count<=b){
		
		int flag=0;
		string temp="";
		int sflag=0;
		int mark=0;
		string another="";
		while(!v.empty()&&v.top()!='['){

			if(mark==1&&v.top()>='a'&&v.top()<='z'){
				another+=v.top();
			}
			else if(flag==1&&v.top()>='a'&&v.top()<='z'){
				temp+=v.top();
			}
			else if(!m.empty()&&sflag==0&&m.top()==']'&&v.top()>='a'&&v.top()<='z'){
				m.pop();
				temp+=v.top();
				flag=1;
				sflag=1;
			
			}else if(flag==1&&v.top()==']'){
				mark=1;
			}
			else{
				m.push(v.top());
			}
			v.pop();
		}
		v.pop();
		int markAnother=0;

		
		if(another.size()>0){
			m.push(']');
			markAnother=1;
		}
		
		string num="";
		while(!v.empty()&&v.top()>='0'&&v.top()<='9'){
			num+=v.top();
			v.pop();
		}
		reverse(num.begin(),num.end());
		int k=stoi(num);

		
		if(markAnother==1){
			string a="";
			reverse(another.begin(),another.end());
			
			while(k--){
				a+=another;
			}
			
			for(int i=0;i<a.size();i++){
				v.push(a[i]);
			}

			reverse(temp.begin(),temp.end());
			for(int i=0;i<temp.size();i++){
				v.push(temp[i]);
			}

			
			while(!m.empty()){
				v.push(m.top());
				m.pop();
			}
			

		}else{
			string a="";

			reverse(temp.begin(),temp.end());


			while(k--){
				a+=temp;
			}


			for(int i=0;i<a.size();i++){
				v.push(a[i]);
			}
	
			while(!m.empty()){
				v.push(m.top());
				m.pop();
			}

		}

		count++;
	}

}



int main(){
 	
 	// string s="3[a2[c]mn2[xy2[op]]]";

 	string s="2[2[y]pq4[2[jk]]e]"; 

 	solve(s);

 	string ans="";
 	
 	while(!v.empty()){
 		ans+=v.top();
 		v.pop();
 	}

 	reverse(ans.begin(),ans.end());

 	for(int i=0;i<ans.size();i++){
 		cout<<ans[i];
 	}
 	cout<<endl;
 
 return 0;
}