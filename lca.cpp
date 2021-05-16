#include<iostream>
using namespace std;

class node{

public:

	int data;
	node*left;
	node*right;

	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}

};




node* buildTree(string s){

	if(s=="true"){

		int d;
		cin>>d;

		node*root=new node(d);

		string l;
		cin>>l;

		if(l=="true"){
			root->left=buildTree(l);
		}

		string r;
		cin>>r;
		if(r=="true"){
			root->right=buildTree(r);
		}
		return root;
	}
	
	return NULL;
}

void preorder(node*root){

	if(root==NULL){
		return;
	}

	cout<<root->data<<' ';
	preorder(root->left);
	preorder(root->right);
}

node* lca(node*root,int a,int b){

	if(root==NULL){
		return NULL;
	}

	if(root->data==a || root->data==b){
		return root;
	}

	node*left_ans=lca(root->left,a,b);
	node*right_ans=lca(root->right,a,b);

	if(left_ans!=NULL and right_ans!=NULL){
		return root;
	}

	if(left_ans!=NULL){
		return left_ans;
	}

	return right_ans;
}


int main(){

	node*root=buildTree("true");

	// preorder(root);
	int a,b;
	cin>>a>>b;

	node*ans=lca(root,a,b);

	cout<<ans->data<<endl;


	// cout<<endl;
 	

 
 return 0;
}