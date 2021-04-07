#include<iostream>
using namespace std;

void inverter(int v[], int n ){
	int aux;
	
	for(int i=0;i<n;i++){
		aux= v[i];
		v[i]=v[n-i-1];
		v[n-i-1] = aux;
	}
	
}


int main(){
	
	int n;
	
	cin>>n;
	
	int va[n];
	
	for(int i=0;i<n;i++){
		cin>>va[i];
	}
		
	inverter(va,n);
	
	for(int i=0;i<n;i++){
		cout<<va[i]<<" ";
	}
	
	return 0;
}
