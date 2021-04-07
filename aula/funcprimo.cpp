#include<iostream>
using namespace std;

int primo(int n){
	int cont =0, primo=n;
	
	for(int i=1;i<=n;i++){
		if(primo%i==0){
			cont++;
		}
	}
	
	if(cont==2){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	
	int x;
	
	cin>>x;
	
	cout << "=====Primo retorna 1 | Nao primo retorna 0=====\n\n" ;
	
	cout<< primo(x)<< endl;
	
	
	
	return 0;
}



