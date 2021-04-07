#include<iostream>

using namespace std;

int main(){
	double comida, bebida, sobremesa;
	double valordaconta, valorpago, troco;
	
	cin>> comida >> bebida >> sobremesa ;

	cin>> valorpago;
	
	valordaconta = comida+ bebida +sobremesa ;
	troco = valorpago - valordaconta;
	
    if(troco<0){
    	cout<< "Valor pago insuficiente"<< endl;
	}else{
		cout << "Troco: " << troco << endl;
					
	}
	
		
	return 0;
	
}
 
