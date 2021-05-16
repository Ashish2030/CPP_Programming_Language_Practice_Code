#include<iostream>
using namespace std;

class node{
public:

	int data;
	node*next;

	node(int data){
		this->data=data;
		next=NULL;
	}

};


node* insert(node*head,node*&tail,int data){

	node*temp=head;

	if(head==NULL){
		node*n=new node(data);
		n->next=head;
		temp=n;
		tail=n;
		return temp;
	}

	node*n=new node(data);
	tail->next=n;
	tail=n;

	return temp;
}


void print(node*head){

	if(head==NULL){
		return;
	}
	cout<<head->data<<" ";
	print(head->next);
}


void insertAtMid(node*&head,int data,int pos){

	if(head==NULL){
		return;
	}




	node*temp=head;
	int j=1;

	while(j<pos){
		temp=temp->next;
		j++;
	}

	// cout<<temp->data<<endl;
	node*n=new node(data);
	n->next=temp->next;
	temp->next=n;

}

void deleteAtMid(node*head,int pos){

	if(head==NULL){
		return;
	}

	int j=1;

	node*temp=head;
	
	node*prev=NULL;

	while(j<pos){
		prev=temp;
		temp=temp->next;
		j++;
	}

	prev->next=temp->next;

	delete temp;

}



int main(){

	node*head=NULL;
	node*tail=NULL;


	head=insert(head,tail,1);
	head=insert(head,tail,2);
	head=insert(head,tail,3);
	head=insert(head,tail,4);
	head=insert(head,tail,5);
	
	insert(head,tail,6);

	print(head);
	cout<<endl;

	insertAtMid(head,99,4);

	print(head);
	cout<<endl;

	deleteAtMid(head,5);

	print(head);
	cout<<endl;

	deleteAtMid(head,2);

	print(head);
	cout<<endl;
	


  
 
 return 0;
}