#include<iostream>
#include<cmath>
using namespace std;
double s(double z);// prototipo da função sigmoide(ativação)
int neuronio(double a,double b);// prototipo da função neurônio

int main(){
	
	double a,b;
	
	cin>>a>>b;// le o valor em salários minimos que a pessoa ganha e o quanto ela quer de empréstimo
	
	cout<< neuronio(a,b) << endl;// a função neurônio retorna 1 para aceito o empréstimo e 0 para negado.
	
	
	
	return 0;
}

int neuronio(double a,double b){
	double z=0,erro;
	
	double x[2][10] = {{2.7 ,1.5 ,5.5 ,3.5 ,3.1 ,7.6 ,1.5,6.9,8.6,7.66 },
    {10.5,11.8,20.0,15.2,14.5,14.5,3.5,8.5,2.0,3.5 }};// os 10 primeiros valores das duas entradas para realizar o treino do neurônio
    double y[10] ={0 ,0 ,0 ,0 ,0 ,1 ,1 ,1 ,1 , 1 };// os 10 primeiros valores que a função retornaria
    
	double w[2]={0.5,0.5}; // os pesos w1 e w2 iniciais
		
	for(int i=0;i<1000;i++){ // treino para as 1000 epocas
		for(int j=0;j<10;j++){ // treino para os 10 valores iniciais para ajustar os pesos
		z = x[0][j]*w[0]+ x[1][j]*w[1]; // função somatória
		s(z);// calculando a função sigmoide com o z
		erro = y[j] - s(z);
		w[0] = w[0] + 0.1 * erro * s(z)*(1 - s(z))*x[0][j];// ajuste do peso 1
		w[1] = w[1] + 0.1 * erro * s(z)*(1 - s(z))*x[1][j];// ajuste do peso 2
		}
	}
	
	z=a*w[0]+b*w[1];// função somatória após o treino dos pesos, utilizando as entradas lidas
	
	if(s(z)>0.5){ // se o valor da função sigmoide for maior que 0.5, o empréstimo pode ser concedido e retorna 1. Caso contrário, retorna 0
	    return 1;
	}else{
		return 0;
	}
	    
	
		
}


double s(double z){
	return 1/(1+pow(2.71828182846,-z));
}



