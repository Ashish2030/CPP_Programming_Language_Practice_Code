#include<iostream>
using namespace std;

class Car{

private:

	string name;
	float price;
	int model;
	bool isAbs;

public:

	/*
		Default Functions or Methods
			1.Constructor
			2.Destructor
			3.Copy Constructor
			4.Copy Assignment Operator
	
	*/


	// Constructor

	// Default Constructor
	Car(){
		cout<<"Constructer Called!!"<<endl;
	}

	// Parametarised Constructor
	Car(string n,float p,int m){
		price=p;
		model=m;
		name=n;
		isAbs=false;
		cout<<"Parametarised Constructor Called!!!!"<<endl;
	}

	Car(float p,int m,string n){
		price=p;
		model=m;
		name=n;
		isAbs=true;
		cout<<"Second Parametarised Constructor Called"<<endl;
	}

	// Setter
	void make_car(string n,float p,int m,bool ibs){
		name=n;

		if(p<0){
			price=20000;
		}
		model=m;
		isAbs=ibs;
	}

	// Getter
	void showCar(){
		cout<<"Name : "<<name<<endl;
		cout<<"Price : "<<price<<endl;
		cout<<"Model : "<<model<<endl;
		isAbs==true?cout<<"ABS"<<endl:cout<<"Non-ABS"<<endl;

	}

	void updatePrice(int p){

		price=p;

		return;
	}

	// Copy Constructor

	Car(Car &X){
		name=X.name;
		price=X.price;
		model=X.model;
		isAbs=X.isAbs;

		cout<<"Copy Constructor Called"<<endl;
	}


	// Destructor
	~Car(){
		cout<<"Destructor is Called!!!!"<<endl;
	}


	// Friend Function in C++
	friend int getPrice(Car X);

};

int getPrice(Car X){


	return X.price;
}



void fun(){

	Car X("Range Rover",40000000,2020);
	X.showCar();
	X.updatePrice(200);
	X.showCar();


}

int main(){


	// Car A,B;
	// A.make_car("Audi",202.2020,1999,false);
	// A.showCar();

	// B.make_car("Scorpio",-100,2050,true);
	// B.showCar();

	// Car D("Maruti",10000,2030);
	// D.showCar();

	// Car E(100.5,2015,"BMW");
	// E.showCar();

	// fun();

	// Car Y("Audi",100,2014);

	Car *ptr=new Car("Bulero",500,2050);
	
	ptr->showCar();	

	delete ptr;
	// Y.showCar();

	// Car Z(Y);
	// Z.updatePrice(3000);
	// Z.showCar();


	// int price=getPrice(Z);
	// cout<<"Price of Z Car is : "<<price<<endl;


 
 return 0;
}