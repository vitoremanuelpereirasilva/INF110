#include<iostream>

using namespace std;

int main(){
	
	int n , c , s , e , capacidade = 0 , cont=0;
	
	cin >> n >> c;
	
	for(int i = 0; i< n; i++){
		
		cin >> s >> e;
		capacidade = capacidade -s+e;
		if(capacidade>c){
			cont++;
		}
	}
	
	if(cont>0){
		cout<< "S" << endl;
	}else {
		cout<< "N" << endl;
	}
	
	
	
	return 0;
}
