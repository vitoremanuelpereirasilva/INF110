//Programa 3 : caixa de restaurante
#include<iostream>

using namespace std;

int main(){
	int comida, bebida, sobremesa;
	int valordaconta, valorpago, troco;
	
	cout<< "Escreva o valor consumido em comida, bebida e sobremesa: ";
	cin>> comida >> bebida >> sobremesa ;
	cout<< "Escreva o valor pago pelo cliente: ";
	cin>> valorpago;
	
	valordaconta = comida+ bebida +sobremesa ;
	troco = valorpago - valordaconta;
	
    cout<< "\n\nRESTAURANTE PEGUE E PAGUE\n";
    cout << "Consumo: " << comida << " + " << bebida << " + " << sobremesa << " = "; 
    cout << valordaconta << "\n" ;
    cout << "Valor Pago " << valorpago << "\n" ;
    cout << "Troco: " << troco << "\n" ;
    cout << "Volte sempre!\n" ;
	
	return 0;
	
}
 
