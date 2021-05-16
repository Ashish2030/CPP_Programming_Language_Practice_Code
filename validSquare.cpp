#include<iostream>
#include<vector>
using namespace std;


bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        
        int x1=p1[0];
        int y1=p1[1];
        
        int x2=p2[0];
        int y2=p2[1];
        
        int x3=p3[0];
        int y3=p3[1];
        
        int x4=p4[0];
        int y4=p4[1];
        
        float d1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        float d2=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
        float d3=sqrt((x4-x1)*(x4-x1)+(y4-y1)*(y4-y1));
        
        cout<<d1*d1<<endl;
        cout<<d2<<endl;
        cout<<d3<<endl;
        
        if(d1==d2 && (float)d3*d3==(float)(2*d1*d1)){
            return true;
        }
        else if(d1==d3 && (float)d2*d2==(float)(2*d1*d1)){
            return true;
        }
        else if(d2==d3 && (float)d1==(float)(d2*sqrt(2))){
            return true;
        }

        return false;
    }


int main(){

	vector<int>p1;
	p1.push_back(0);
	p1.push_back(0);

	vector<int>p2;

	p2.push_back(1);
	p2.push_back(1);
	vector<int>p3;

	p3.push_back(1);
	p3.push_back(0);

	vector<int>p4;

	p4.push_back(0);
	p4.push_back(1);

	if(validSquare(p1,p2,p3,p4)){
		cout<<"Square"<<endl;
	}else{
		cout<<"Not Square"<<endl;
	}
  
 
 return 0;
}