// BST
#include <iostream>
#include <queue>
#include <climits>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;

	node(int d):data(d),left(NULL),right(NULL){

	}
};

node* InsertInBST(node* root,int data){
	if(root==NULL){
		root=new node(data);
		return root;
	}
	
	if(data<=root->data){
		root->left=InsertInBST(root->left,data);
	}
	else{
		root->right=InsertInBST(root->right,data);
	}
	return root;
}
node* buildTree(){
	int data;
	cin>>data;
	node* root=NULL;

	while(data!=-1){
		root=InsertInBST(root,data);
		cin>>data;
	}
	return root;
}

void LevelOrder(node* root){
	queue<node*> q;

	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		if(temp==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<temp->data<<" ";
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}
	}
}

node* SearchInBST(node* root,int key){
	// base case
	if(root==NULL){
		return NULL;
	}

	// recursive case
	if(root->data==key){
		return root;
	}
	else if(root->data>key){
		return SearchInBST(root->left,key);
	}
	else{
		return SearchInBST(root->right,key);
	}
}

bool isBST(node* root,int min=INT_MIN,int max=INT_MAX){
	if(root==NULL){
		return true;
	}

	if(root->data>=min && root->data<=max && isBST(root->left,min,root->data) && isBST(root->right,root->data,max)){
		return true;
	}
	else{
		return false;
	}

}

void printRange(node* root,int k1,int k2){

}

void PreOrder(node* root){
	if(root==NULL){
		return;
	}

	cout<<root->data<<" ";
	PreOrder(root->left);
	PreOrder(root->right);
}

void InOrder(node* root){
	if(root==NULL){
		return;
	}

	InOrder(root->left);
	cout<<root->data<<" ";
	InOrder(root->right);

}

void PostOrder(node* root){
	if(root==NULL){
		return;
	}

	PostOrder(root->left);
	PostOrder(root->right);
	cout<<root->data<<" ";
}

class Pair1{
public:
	int height;
	bool balance;

};


Pair1 isBalanced(node* root){
	Pair1 p;
	// base case
	if(root==NULL){
		p.height=0;
		p.balance=true;
		return p;
	}

	// recursive case
	Pair1 left=isBalanced(root->left);
	Pair1 right=isBalanced(root->right);

	p.height=max(left.height,right.height)+1;
	if(left.balance&&right.balance&& abs(left.height-right.height)<=1){
		p.balance=true;
	}
	else{
		p.balance=false;
	}
	return p;

}

node* ArrayToBST(int *a,int s,int e){
	if(s>e){
		return NULL;
	}

	int mid=(s+e)/2;
	node* root=new node(a[mid]);
	root->left=ArrayToBST(a,s,mid-1);
	root->right=ArrayToBST(a,mid+1,e);

	return root;
}

class linkedlist{
public:
	node* head;
	node* tail;
};

linkedlist BSTtoLL(node* root){
	linkedlist l;
	// base case
	if(root==NULL){
		l.head=l.tail=NULL;
		return l;
	}

	// recursive case
	if(root->left!=NULL && root->right==NULL){
		linkedlist left=BSTtoLL(root->left);
		left.tail->right=root;
		l.head=left.head;
		l.tail=root;
		return l;
	}
	else if(root->right!=NULL && root->left==NULL){
		linkedlist right=BSTtoLL(root->right);
		root->right=right.head;
		l.head=root;
		l.tail=right.tail;
		return l;
	}
	else if(root->right==NULL && root->left==NULL){
		l.head=l.tail=root;
		return l;
	}
	else{
		linkedlist left=BSTtoLL(root->left);
		linkedlist right=BSTtoLL(root->right);
		left.tail->right=root;
		root->right=right.head;
		l.head=left.head;
		l.tail=right.tail;
		return l;
	}
}

void print(node* root){
	while(root){
		cout<<root->data<<"-->";
		root=root->right;
	}
	cout<<endl;
}


void InOrderSuccessor(node*root,int parent,int key){
    
    if(root==NULL){
        return;
    }
    
    if(key==root->data){
       cout<<parent<<endl;
       return;
    }
    if(key<root->data){
        InOrderSuccessor(root->left,root->data,key);
    }else{
        InOrderSuccessor(root->right,root->data,key);
    }
    
}

int main(){
	int a[]={1,2,3,4,5,6,7};
	int n=sizeof(a)/sizeof(int);

	// node* root=buildTree();
	node* root=ArrayToBST(a,0,n-1);
	linkedlist l=BSTtoLL(root);
	print(l.head);
	// PreOrder(root);
	// cout<<endl;
	// InOrder(root);
	// cout<<endl;
	// PostOrder(root);
	// cout<<endl;

	// LevelOrder(root);	

    
    InOrderSuccessor(root,root->data,2);
	

	return 0;
}