#include<iostream>
using namespace std;

class node{
public:

	int data;
	node*next;

	node(int d){
		data=d;
		next=NULL;
	}

};

class linkedList{
	
	node*head;
	node*tail;

	
public:

	// Constructor
	linkedList(){
		head=NULL;
		tail=NULL;
	}

	// Copy Constructor
	linkedList(linkedList &l){
		cout<<"Copy Constructor Called"<<endl;
		head=l.head;
		tail=l.tail;
	}


	// Copy Assignment Operator
	void operator = (linkedList l){
		cout<<"Copy Assignment operator Called"<<endl;
		head=l.head;
		tail=l.tail;
	}


	void insertInLL(int d){
		if(head==NULL){
			node*n=new node(d);
			head=tail=n;
		}else{
			node*n=new node(d);
			tail->next=n;
			tail=n;
		}
	}

	void print(){
		
		node*temp=head;

		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}


	// Destructor
	~linkedList(){
		cout<<"Destroying the LinkedList"<<endl;
	}
};

int main(){

	node a(1);
	node b(2);

	node *p=&a;

	a.next=&b;

	// use of arrow operator

	cout<<((*a.next).data)<<endl;
	cout<<a.next->data<<endl;
	cout<<p->data<<endl;


	linkedList l;

	l.insertInLL(1);
	l.insertInLL(2);
	l.insertInLL(3);
	l.insertInLL(4);
	l.insertInLL(5);
	l.insertInLL(6);
	l.insertInLL(7);

	l.print();

	linkedList m;

	m=l;


 
 return 0;
}