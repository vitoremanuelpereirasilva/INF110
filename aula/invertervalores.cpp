#include<iostream>

using namespace std;

int main(){
	
	int n,digito;
	
	cin >> n;
	
	while(n>0){
		digito = n%10;
		cout<< digito ;
		n = (n-digito)/10;
		
			
	}
	
	
	return 0;
}
