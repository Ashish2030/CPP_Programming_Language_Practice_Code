#include<iostream>
using namespace std;
int main() {
	char ch;
	int a, b;
	bool start = true;
	while(start){
		cin>>ch;
		if(ch == '+' || ch == '-' || ch == '*'|| ch == '/' || ch == '%'){
			cin>>a>>b;
			if(ch == '+')		cout<<a + b<<endl;
			else if(ch == '-')		cout<<a - b<<endl;
			else if(ch == '*')		cout<<a * b<<endl;
			else if(ch == '/')		cout<<a / b<<endl;
			else if(ch=='%')	cout<<a % b<<endl;
			
		}else if(ch == 'X' || ch == 'x')	start = false;
		else	cout<<"Invalid operation. Try again."<<endl;

	}
	return 0;
}