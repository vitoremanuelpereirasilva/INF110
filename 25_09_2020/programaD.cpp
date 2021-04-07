#include<iostream>

using namespace std;

int main(){
	
	int contc=0,contd=0,conte= 0,contr= 0,contt = 0;
	double total;
	char letra;
	
	while(letra != 'X'){
		cin >> letra;
		
		if(letra=='C'){
			contc++;
		}else if(letra=='D'){
			contd++;
		}else if(letra=='E'){
			conte++;
		}else if(letra=='R'){
			contr++;
		}else if (letra == 'T') {
			contt++;
		} 
		
		
	}
	
	total =contc + contd +conte + contr +contt;
	
	total = total/2.0;
	
    if(contc>total){
    	cout<< "SIM"<< endl;
    	
	} else if(contd>total){
    	cout<< "SIM"<< endl;
    	
	} else if(conte>total){
    	cout<< "SIM"<< endl;
    	
	} else if(contr>total){
    	cout<< "SIM"<< endl;
    	
	} else if(contt>total){
    	cout<< "SIM"<< endl;
    	
	} else {
		cout << "NAO" << endl;
	}
	
	
	return 0;
}
