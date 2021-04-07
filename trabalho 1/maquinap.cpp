#include<iostream>
using namespace std;

int main(){
	
	int p, v,total=0,preco;//qual o produto, a quantidade em celula ou moeda , o total pago, o preco do produto
	char t;//variavel cedula ou moeda
	
	cin>>p;
	
	cin>>t>>v;
	
	if(t=='C'){
		
		total+=v*100;//transformar a cedula em valor de moeda e somar no total pago
		
	}else if(t=='M'){
		
		total+=v;// somar o valor de moeda no total pago
	}
	
	while(v!=0){
	
	cin>>t>>v;
	
	if(t=='C'){
		
		total+=v*100;
		
	}else if(t=='M'){
		
		total+=v;
	}
		
	}
	
	//verificar se o p lido é referente a algum produto.Se não for, retorna produto inexistente
	if(p!=1 && p!=2 && p!=3 ){
		
		cout<<"Produto inexistente."<< endl;
		
	}else{
		
		if(p==1){
			
			preco=430;//valor do produto 1
			
			//verificar se o total pago é menor do que o preço do produto. Se for retorna saldo insuficiente,se nao for retorna o troco
			if(total<preco){
				cout<<"Saldo insuficiente."<< endl;
			}else{
				cout <<"Troco de "<<total-preco<<" centavos."<< endl;
			}
			
			
		}else if(p==2){
			
			preco=270;//valor do produto 2
			
			if(total<preco){
				cout<<"Saldo insuficiente."<< endl;
			}else{
				cout <<"Troco de "<<total-preco<<" centavos."<< endl;
			}
			
		}else if(p==3){
			
			preco=143;//valor do produto 3
			
			if(total<preco){
				cout<<"Saldo insuficiente."<< endl;
			}else{
				cout <<"Troco de "<<total-preco<<" centavos."<< endl;
			}
			
		}
		
	}
	
	
	return 0;
}
