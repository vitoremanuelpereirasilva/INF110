// Programa5 : salario base
#include<iostream>

using namespace std;

int main(){
	
	int salariobase, horaextra , horas , total ;
	
	cout << "Salario base: " ;
	cin >> salariobase ;
	cout << "Valor hora extra: " ;
	cin >> horaextra ;
	cout << "Horas extras trabalhadas: " ;
	cin >> horas ;
	
	total = salariobase + horaextra*horas;
	
	cout << "\nSalario total: " << total << endl;
	
	
	return 0;
}
