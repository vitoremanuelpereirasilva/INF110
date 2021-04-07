#include<iostream>

using namespace std;

int main(){
	
	int n, impar = 1,cont =0;
	cin >> n;
	
	while(cont<n){
		
		cout << impar<< " " ;
		impar+=2;
		
		cont++;
	}
	
	
	return 0;
}
