#include<iostream>
#include<cstring>

using namespace std;

struct Horario {
	int horas, minutos;
};

void escreve (Horario h){
	
	if(h.minutos>=10){
		
		if(h.horas >= 12){
			if(h.horas == 12){
				
				cout <<  h.horas<<":" << h.minutos << " PM" << endl;
		
			}else{
				if(h.horas - 12 >=10){
					cout <<  h.horas - 12 <<":" << h.minutos << " PM" << endl;
				}else{
					cout << "0"<< h.horas - 12 <<":" << h.minutos << " PM" << endl;
				}
				
				
			}
		}else{
			if(h.horas == 0){
				
				cout <<  h.horas +12<<":" << h.minutos << " AM" << endl;
		
			}else{
				if(h.horas >=10){
					cout <<  h.horas  <<":" << h.minutos << " AM" << endl;
				}else{
					cout << "0"<< h.horas <<":" << h.minutos << " AM" << endl;
				}
				
				
			}
		      
		
		}
		
	}else{
		if(h.horas >= 12){
			if(h.horas == 12){
				
				cout <<  h.horas<<":" <<"0"<< h.minutos << " PM" << endl;
		
			}else{
				if(h.horas - 12 >=10){
					cout <<  h.horas - 12 <<":" << "0"<< h.minutos << " PM" << endl;
				}else{
					cout << "0"<< h.horas - 12 <<":" << "0"<<h.minutos << " PM" << endl;
				}
				
				
			}
		}else{
			if(h.horas == 0){
				
				cout <<  h.horas +12<<":" <<"0"<< h.minutos << " AM" << endl;
		
			}else{
				if(h.horas >=10){
					cout << h.horas  <<":" << "0"<<h.minutos << " AM" << endl;
				}else{
					cout << "0"<< h.horas <<":" << "0"<<h.minutos << " AM" << endl;
				}
				
				
			}
		      
		
		}
		
	}
	
	
	
	
}
int main(){
	
	int n;
	
	cin >>n;
	
	Horario a[n];
	
	for(int i =0; i<n;i++){
		cin>> a[i].horas >> a[i].minutos;
	}
	
	for(int i =0; i<n;i++){
		escreve(a[i]);
	}
	
	return 0;
}
