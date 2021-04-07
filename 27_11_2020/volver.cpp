#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int n,soma;
	cin>>n;
	char sol[n],aux,auxsol[n];
	int troca01(char sol[101],int troca[101],int &soma);
	int troca[n]={0};
	cin>>sol;
	do{
		for(int i=0;i<n;i++){
			if(troca[i]){
				aux=sol[i];
				sol[i]=sol[i+1];
				sol[i+1]=aux;
			}
		}
			for(int j=0;j<n;j++){	
			cout<<sol[j];
		}
		cout<<endl;
		troca01(sol,troca,soma);
	}while(soma);
	return 0;
}


	int troca01(char sol[101], int troca[101],int &soma){
		soma=0;
		for(int k=0;sol[k]!='\0';k++){
			troca[k]=0;
			if((sol[k]=='D')&&(sol[k+1]=='E')){
				troca[k]=1;
			}
			soma+=troca[k];	
		}
}
