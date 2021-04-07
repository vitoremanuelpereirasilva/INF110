#include<iostream>
using namespace std;

int main(){
	
	int a= 5;
	int *p;
	
	p= new int [5];
	
	for(int i=0;i<5;i++ ){
		cin>>p[i];
	}
	
	for(int i=0;i<5;i++ ){
		cout<< p[i] << " ";
	}
	
	delete []p;
	
	return 0;
}
