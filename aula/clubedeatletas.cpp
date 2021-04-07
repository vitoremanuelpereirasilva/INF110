#include<iostream>

using namespace std;

int main(){
    double altura[10];
	int idade[10];
	char sexo[10];// m ou f	
	double mediahm = 0, mediahf = 0, mediaidade = 0;
	double cont1 =0, cont2 = 0;
	
	for(int i = 0; i<10; i++){
		cin>> altura[i];
		cin >> idade [i];
		cin >> sexo [i];
		
		mediaidade+= idade[i];
		
		if(sexo[i]=='m'){
			mediahm+= altura[i];
			cont1++;
		}else{
			mediahf+= altura[i];
			cont2++;
		}
	}
	
	cout << "a media de idade : " << mediaidade/10.0<< endl;
	cout << "media de altura masculina: " << mediahm/cont1 << endl;
	cout << "media de altura feminina: " << mediahf/cont2 << endl;
	
  return 0;	
}
