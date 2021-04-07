#include<iostream>

using namespace std;

int main(){
	
	double pnormal = 100, desconto, pfinal;
	char resposta;
	
	cout << "O preco normal e " << pnormal << endl;
	
	cout << "\nTem desconto? (s/n) " ;
	cin >> resposta;
	
	if(resposta == 's'){
	    cout << "Qual o valor do desconto em  %? " ;
	    cin >> desconto;
	    
	    pfinal = pnormal - (pnormal*desconto/100);
	    
	    cout << "\nO preco final e " << pfinal << endl;
	    
	}else {
		cout << "\nO preco final e " << pnormal << endl;
	}
	
	
	return 0;
}
