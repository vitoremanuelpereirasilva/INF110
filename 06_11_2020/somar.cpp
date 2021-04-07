#include<iostream>
using namespace std;

int main(){
	
	int n,x,soma,cont=0;
	
	cin>> n;
	
	int a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	cin>>x;

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			soma = a[i]+a[j];
			if(x==soma){
				cont++;
			}
		}
	}
	
	if(cont>=1){
		cout<< "SIM"<< endl;
	}else{
		cout<<"NAO"<<endl;
	}
		
	return 0;
}
