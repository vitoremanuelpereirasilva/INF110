//esqui
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
    double d, nota[5],maior=0, menor=20,pontos;// variavel da distancia, a nota dos juizes, a maior nota, a menor nota e a pontuação
	
	cin>>d;// ler a distancia
	
	for(int i=0;i<5;i++){
		cin>> nota[i];//ler as notas
		
		if(nota[i]>maior){
			maior= nota[i];//verificar qual é a maior
		}
		
		if(nota[i]<menor){
			menor= nota[i];//verificar qual é a menor
		}
	}
	
	if(d==120){
	   pontos=60;//pontos iniciais quando a distancia é 120
	   
	   for(int i=0;i<5;i++){
	   	
	   	pontos+=nota[i];//somar as notas dos juizes nos pontos
	   	
	   }
	   
	   pontos=pontos-(menor+maior);// tirar a maior e a menor da pontuação
	   
	   cout<<fixed<<setprecision(1)<<pontos<< endl;	
	   
	}else if(d<120){
	   pontos=60-((120-d)*1.8);//pontos iniciais quando a distancia é menor que 120
	   
	   for(int i=0;i<5;i++){
	   	
	   	pontos+=nota[i];//somar as notas dos juizes nos pontos
	   	
	   }
	   
	   pontos=pontos-(menor+maior);// tirar a maior e a menor da pontuação
	   
	   cout<<fixed<<setprecision(1)<<pontos<< endl;	
	   
	}else {
	   pontos=60+((d-120)*1.8);//pontos iniciais quando a distancia é maior que 120
	   
	   for(int i=0;i<5;i++){
	   	
	   	pontos+=nota[i];//somar as notas dos juizes nos pontos
	   	
	   }
	   
	   pontos=pontos-(menor+maior);// tirar a maior e a menor da pontuação
	   
	   cout<<fixed<<setprecision(1)<<pontos<< endl;	
	}
	
	return 0;
}
