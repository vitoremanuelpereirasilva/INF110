#include<iostream>
using namespace std;

int main(){
	
	int p, v,total=0,preco,troco;//qual o produto, a quantidade em celula ou moeda , o total pago, o preco do produto, troco
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
				troco= total-preco;
				
				//inicio da sequencia de loop que irão comparar se o troco é maior que a ultima maior nota ou moeda. Se for, emite o valor da nota ou moeda e subtrai do troco
				while(troco>=10000){
					
					cout << "C 100"<< endl;
					
					troco-=10000;
										
				}
				
				while(troco>=5000){
					
					cout << "C 50"<< endl;
					
					troco-=5000;
										
				}
				
				while(troco>=2000){
					
					cout << "C 20"<< endl;
					
					troco-=2000;
										
				}
				
				while(troco>=1000){
					
					cout << "C 10"<< endl;
					
					troco-=1000;
										
				}
				
				while(troco>=500){
					
					cout << "C 5"<< endl;
					
					troco-=500;
										
				}
				
				while(troco>=200){
					
					cout << "C 2"<< endl;
					
					troco-=200;
										
				}
				
				while(troco>=100){
					
					cout << "M 100"<< endl;
					
					troco-=100;
										
				}
				
				while(troco>=50){
					
					cout << "M 50"<< endl;
					
					troco-=50;
										
				}
				
				while(troco>=25){
					
					cout << "M 25"<< endl;
					
					troco-=25;
										
				}
				
				while(troco>=10){
					
					cout << "M 10"<< endl;
					
					troco-=10;
										
				}
				
				while(troco>=5){
					
					cout << "M 5"<< endl;
					
					troco-=5;
										
				}
				
				while(troco>=1){
					
					cout << "M 1"<< endl;
					
					troco-=1;
										
				}
				
			}
			
			
		}else if(p==2){
			
			preco=270;//valor do produto 2
			
			if(total<preco){
				cout<<"Saldo insuficiente."<< endl;
			}else{
				
				troco= total-preco;
				
				while(troco>=10000){
					
					cout << "C 100"<< endl;
					
					troco-=10000;
										
				}
				
				while(troco>=5000){
					
					cout << "C 50"<< endl;
					
					troco-=5000;
										
				}
				
				while(troco>=2000){
					
					cout << "C 20"<< endl;
					
					troco-=2000;
										
				}
				
				while(troco>=1000){
					
					cout << "C 10"<< endl;
					
					troco-=1000;
										
				}
				
				while(troco>=500){
					
					cout << "C 5"<< endl;
					
					troco-=500;
										
				}
				
				while(troco>=200){
					
					cout << "C 2"<< endl;
					
					troco-=200;
										
				}
				
				while(troco>=100){
					
					cout << "M 100"<< endl;
					
					troco-=100;
										
				}
				
				while(troco>=50){
					
					cout << "M 50"<< endl;
					
					troco-=50;
										
				}
				
				while(troco>=25){
					
					cout << "M 25"<< endl;
					
					troco-=25;
										
				}
				
				while(troco>=10){
					
					cout << "M 10"<< endl;
					
					troco-=10;
										
				}
				
				while(troco>=5){
					
					cout << "M 5"<< endl;
					
					troco-=5;
										
				}
				
				while(troco>=1){
					
					cout << "M 1"<< endl;
					
					troco-=1;
										
				}
				
			}
			
		}else if(p==3){
			
			preco=143;//valor do produto 3
			
			if(total<preco){
				cout<<"Saldo insuficiente."<< endl;
			}else{
				
				troco= total-preco;
				
				while(troco>=10000){
					
					cout << "C 100"<< endl;
					
					troco-=10000;
										
				}
				
				while(troco>=5000){
					
					cout << "C 50"<< endl;
					
					troco-=5000;
										
				}
				
				while(troco>=2000){
					
					cout << "C 20"<< endl;
					
					troco-=2000;
										
				}
				
				while(troco>=1000){
					
					cout << "C 10"<< endl;
					
					troco-=1000;
										
				}
				
				while(troco>=500){
					
					cout << "C 5"<< endl;
					
					troco-=500;
										
				}
				
				while(troco>=200){
					
					cout << "C 2"<< endl;
					
					troco-=200;
										
				}
				
				while(troco>=100){
					
					cout << "M 100"<< endl;
					
					troco-=100;
										
				}
				
				while(troco>=50){
					
					cout << "M 50"<< endl;
					
					troco-=50;
										
				}
				
				while(troco>=25){
					
					cout << "M 25"<< endl;
					
					troco-=25;
										
				}
				
				while(troco>=10){
					
					cout << "M 10"<< endl;
					
					troco-=10;
										
				}
				
				while(troco>=5){
					
					cout << "M 5"<< endl;
					
					troco-=5;
										
				}
				
				while(troco>=1){
					
					cout << "M 1"<< endl;
					
					troco-=1;
										
				}
				
			}
			
		}
		
	}
	
	
	return 0;
}
