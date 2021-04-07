#include<iostream>
using namespace std;

int main(){
	
	int x;
	
	cin>>x;
	
	int matrizA[x][x], matrizB[x][x], matrizid[x][x], matrizC[x][x],aux[x*x],aux2[x];
	
	for(int i=0;i<x;i++){
		for(int j= 0;j<x;j++){
			cin >> matrizA[i][j];
			
		}
	}
	
	for(int i=0;i<x;i++){
		for(int j= 0;j<x;j++){
			cin >> matrizB[i][j];
			
		}
	}
	
	for(int i=0;i<x;i++){
		for(int j= 0;j<x;j++){
			if(i==j){
				matrizid[i][j]=1;
			}else{
				matrizid[i][j]=0;
			}
			
		}
	}
	
	for(int i=0;i<x;i++){
		for(int j= 0;j<x;j++){
			aux[i+j] = matrizA[i][j]*matrizB[j][i];
			
		}
	}
	

	
	for(int i=0;i<x;i++){
		for(int j= 0;j<x;j++){
			matrizC[i][j]=aux[i+j];
			
		}
	}
	
	for(int i=0;i<x;i++){
		for(int j= 0;j<x;j++){
		  cout<< matrizC[i][j]<<" ";
			
		}
		cout<< endl;
	}
	
	return 0;
}
