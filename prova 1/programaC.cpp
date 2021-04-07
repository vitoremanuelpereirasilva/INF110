#include<iostream>

using namespace std;

int main(){
	
	int x,soma=0,cont=0,aux=0;
	
	cin>> x;
	
	for(int i=0;i<x;i++){
		soma+=i;
		if(soma==x){
			cont++;
		}
		if(soma>x && cont==0){
			aux++;
	        i=aux;
	        soma=0;
		}
	}
	
	if(cont==1){
		cout<<"SIM"<<endl;
	}else{
		cout<<"NAO"<<endl;
	}
	return 0;
}
