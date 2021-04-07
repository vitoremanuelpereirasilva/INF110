#include<iostream>

using namespace std;

int main(){
	
	int vetor[10], n, cont =0;
	
	cin >> n;
	
	for(int i = 0; i<n;i++){
		cin >> vetor[i];
	}
	
	for(int i = 0 ; i< n-1; i++){
		if(vetor[i]<= vetor[i+1]){
			cont++;
		}
	}
	
	if(cont == n-1){
	   cout << "ordem crescente"<< endl;
	}else{
		cout << "nao esta em ordem crescente"<< endl;
	}
	
	return 0;
	
}
