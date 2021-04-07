#include <iostream>
using namespace std;

void ordenar(int &a, int &b, int &c){
	if(a<=b && b<=c){
		
	}else if(a<=c && c<=b){
		int aux = c;
		c= b;
		b= aux;
	}else if(b<=a && a<=c){
		int aux = a;
		a= b;
		b= aux;
	}else if(b<=c && c<=a){
		int aux = a;
		a= b;
		b= c;
		c=aux;
		
	}else if(c<=b && b<=a){
		int aux = a;
		a= c;
		c=aux;
	}
	else if(c<=a && a<=b){
		int aux1 = a;
		int aux2 =b;
		a= c;
		b= aux1;
		c=aux2;
	}
	
}

int main(){
	int a, b, c;
	
	cin >> a >> b >> c;
	
	ordenar(a, b, c);
	
	cout << a << " " << b << " " << c << endl;
	
	return 0;
}

