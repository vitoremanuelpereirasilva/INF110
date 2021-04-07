#include<iostream>

using namespace std;

int main(){
	
	int n,cont;
	cin>> n;
	int lista[n];
	
	for(int i =0 ; i<n; i++){
		cin >> lista[i];
	}
	
	for(int i = 1; i <=n ; i++){
		cont = 0;
		for(int j = 0 ; j<n ; j++ ){
			
			if(lista[j] == i){
			   cont++;
			   	
			}
			
		}
		
		if(cont==0){
			cout << i << " ";
		}
		
		 
		
		
	}
	
	return 0;
}
