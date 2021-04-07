#include<iostream>
using namespace std;

double soma(double matriz[3][3],int n){
	double soma=0;
	for(int i=0;i<n;i++){
		soma+=matriz[i][i];
	}
	
	return soma;
}


int main(){
	
	
	double m[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>m[i][j];
		}
	}
	
	cout << "A soma diagonal principal: " << soma(m,3)<< endl;
	
	return 0;
}


