#include<iostream>

using namespace std;

int main(){
	
	char maiuscula = 'A';
	char minuscula = 'a';
	
	for( ; maiuscula<= 'Z'; maiuscula++ ){
		cout<< maiuscula << " ";
	}
	cout << "\n\n";
	
	for( ;minuscula<= 'z'; minuscula++ ){
		cout<< minuscula << " ";
	}
	
	
	return 0;
}
