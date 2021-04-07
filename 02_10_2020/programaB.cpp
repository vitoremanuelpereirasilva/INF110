#include<iostream>

using namespace std ;

int main (){
	
	int n,  divisores =0;
	
	cin>> n;
	
	for(int i = 1; i<n;i++){
		if(n%i== 0){
			divisores+= i;
		}
	}
	
	if(n== divisores){
		cout<< "SIM" << endl;
	}else{
		cout << "NAO" << endl;
	}
	
	return 0;
}
