//esqui
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
    double d, nota[5],maior=0, menor=20,pontos;// variavel da distancia, a nota dos juizes, a maior nota, a menor nota e a pontua��o
	
	cin>>d;// ler a distancia
	
	for(int i=0;i<5;i++){
		cin>> nota[i];//ler as notas
		
		if(nota[i]>maior){
			maior= nota[i];//verificar qual � a maior
		}
		
		if(nota[i]<menor){
			menor= nota[i];//verificar qual � a menor
		}
	}
	
	if(d==120){
	   pontos=60;//pontos iniciais quando a distancia � 120
	   
	   for(int i=0;i<5;i++){
	   	
	   	pontos+=nota[i];//somar as notas dos juizes nos pontos
	   	
	   }
	   
	   pontos=pontos-(menor+maior);// tirar a maior e a menor da pontua��o
	   
	   cout<<fixed<<setprecision(1)<<pontos<< endl;	
	   
	}else if(d<120){
	   pontos=60-((120-d)*1.8);//pontos iniciais quando a distancia � menor que 120
	   
	   for(int i=0;i<5;i++){
	   	
	   	pontos+=nota[i];//somar as notas dos juizes nos pontos
	   	
	   }
	   
	   pontos=pontos-(menor+maior);// tirar a maior e a menor da pontua��o
	   
	   cout<<fixed<<setprecision(1)<<pontos<< endl;	
	   
	}else {
	   pontos=60+((d-120)*1.8);//pontos iniciais quando a distancia � maior que 120
	   
	   for(int i=0;i<5;i++){
	   	
	   	pontos+=nota[i];//somar as notas dos juizes nos pontos
	   	
	   }
	   
	   pontos=pontos-(menor+maior);// tirar a maior e a menor da pontua��o
	   
	   cout<<fixed<<setprecision(1)<<pontos<< endl;	
	}
	
	return 0;
}
