#include<iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int length(char a[]) {
	int num=0;

	for(int i=0;a[i]!='\0';i++) {
        num++;
	}
	
	return num;
}

void reverse_string(char a[]){
	
	int len=length(a);
    int j=len -1;
    int i=0;

	while(i<j){
       
       swap(a[i],a[j]) ;    
       i++;
       j--;

	}

	cout<<a<<" ";
}



int main (){

  char str[] ="This a sample string";
  char * pch;
  
  pch = strtok (str," ");
  while(pch != NULL){

    reverse_string(pch);
    
    pch = strtok (NULL," ");
  }

  cout<<endl;
  return 0;
}