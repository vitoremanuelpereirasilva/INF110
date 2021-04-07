#include<iostream>

using namespace std;

int main(){
	
	int n , g, cont = 0;
    long long quantidade=0;
	
	cin >> n >> g;
	
	quantidade = n;
	
	while(quantidade< 1000000000){
		quantidade= quantidade + quantidade*g;
		cont++;
	}
	
	cout << cont << endl;
	
	
	return 0;
}
