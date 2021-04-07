//estações do ano
#include<iostream>

using namespace std;

int main(){
	
	int d, m;
	
	cin>> d >> m; // ler a data
	
	//identificar qual mês foi lido
	if(m==1){
		
		cout<< d << " de janeiro\n";
		cout<< "Verao" << endl;
		
	}else if(m==2){
		
		cout<< d << " de fevereiro\n";
		cout<< "Verao" << endl;
		
	}else if(m==3){
		
		cout<< d << " de marco\n";
		
		//identificar a estação do ano
		if(d<20){
			cout<< "Verao" << endl;
		}else{
			cout<< "Outono" << endl;
		}
	
		
	}else if(m==4){
		
		cout<< d << " de abril\n";
		cout<< "Outono" << endl;
		
	}else if(m==5){
		
		cout<< d << " de maio\n";
		cout<< "Outono" << endl;
		
	}else if(m==6){
		
		cout<< d << " de junho\n";
		
		//identificar a estação do ano
		if(d<21){
			cout<< "Outono" << endl;
		}else{
			cout << "Inverno" << endl;
		}
		
	}else if(m==7){
		
		cout<< d << " de julho\n";
		cout << "Inverno" << endl;
		
	}else if(m==8){
		
		cout<< d << " de agosto\n";
		cout << "Inverno" << endl;
		
	}else if(m==9){
		
		cout<< d << " de setembro\n";
		
		//identificar a estação do ano
		if(d<23){
			cout << "Inverno" << endl;
		}else{
			cout << "Primavera" << endl;
		}
		
	}else if(m==10){
		
		//identificar a estação do ano
		cout<< d << " de outubro\n";
	    cout << "Primavera" << endl;
		
	}else if(m==11){
		
		cout<< d << " de novembro\n";
		cout << "Primavera" << endl;
		
	}else if(m==12){
		
		cout<< d << " de dezembro\n";
		
		//identificar a estação do ano
		if(d<22){
			cout << "Primavera" << endl;
		}else{
			cout << "Verao" << endl;
		}
		
	}
	
	return 0;
}
