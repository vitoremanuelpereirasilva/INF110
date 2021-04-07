#include<iostream>
using namespace std;

long long fatorial(long long n){
	
	long long fatorial = 1;
	
	for(int i = 1; i <= n ; i++){
		
		fatorial = fatorial*i;
	}
	
	return fatorial;
}

int main(){
	
	cout<< fatorial(5)<< endl;
	
	return 0;
}
