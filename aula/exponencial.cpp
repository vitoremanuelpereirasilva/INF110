#include<iostream>
using namespace std;

int exponencial(int, int);

int main(){
	
	
	cout << exponencial(2,3)<< endl;
	
	
	return 0;
	
}

int exponencial(int x, int y){
	
	int a= x, b=y;
	int valor=1;
	
	for(int i=1; i<=b;i++){
		valor*=a;
	}
	
		
	
	return valor;
}
