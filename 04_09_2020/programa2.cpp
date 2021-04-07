//Programa 2 : calculo da nota final de um candidato a monitoria
#include<iostream>

using namespace std;

int main(){
	int entrevista, curriculo, prova;
	int total, media;
	
	cout<< "Escreva a nota da entrevista: ";
	cin>> entrevista;
	cout<< "Escreva a nota do curriculo: ";
	cin>> curriculo;
	cout<< "Escreva a nota da prova: ";
	cin>> prova;
	
	total = entrevista+ curriculo + prova;
	media = total/3;
	
	cout << "Nota final do candidato: " << total <<"\n";
	cout << "Media: " << media << endl;
	
	return 0;
	
}
 
