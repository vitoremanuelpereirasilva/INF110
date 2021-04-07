#include<iostream>

using namespace std;

int main(){
	 
	int a,b, resto ;
	
	cin>> a >> b;
	
	resto = (a+b)%2;
	
	if(resto== 0){
		cout<< "valor medio: " << (a+b)/2 << endl;
	}else{
		cout<< "Nao existe valor medio inteiro!"<< endl;
	}
	
	return 0;
}
