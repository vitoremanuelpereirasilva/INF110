// Programa4 : ler dimensões da caixa
#include<iostream>

using namespace std;

int main(){
	
	int l, a , c , volume;
	
	cout << "Largura: " ;
	cin >> l ;
	cout << "Altura: " ;
	cin >> a ;
	cout << "Comprimento: " ;
	cin >> c ;
	
	volume = l*a*c;
	
	cout << "\nVolume: " << volume << endl;
	
	
	return 0;
}
