#include<iostream>

using namespace std;

int main(){
	
	double h, m, imc;
	
	cin >> h >> m ;
	
	imc = m/(h*h);
	
	if(imc < 18.5){
		cout << "Abaixo do peso" << endl;
    } else if(imc >= 18.5 && imc< 25){
		cout << "Peso normal" << endl;
	} else if(imc >= 25 && imc <30 ){
		cout << "Acima do peso" << endl;
	}else {
		cout <<"Obesidade" << endl;
	}
	
	
	
	return 0;
}
