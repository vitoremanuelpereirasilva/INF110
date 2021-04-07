#include<iostream>
using namespace std;

int main(){
	
	int p, v, pago=0;//variavel do preço, valor pago em moedas, auxiliar pra quanto foi pago
	
	cin>>p >> v;
	
	pago+=v;//somar os valores na variavel do quanto foi pago
	
	while(v!=0){
		cin>>v;
		pago+=v;
	}
	
	//se o valor pago for menor que o preco do produto, o saldo é insuficiente. Se não for, retorna o valor do troco
	if(pago<p){
		cout<<"Saldo insuficiente."<< endl;
	}else{
		cout <<"Troco de "<< (pago-p)  <<" centavos."<< endl;
	}
	
	
	
	return 0;
}
