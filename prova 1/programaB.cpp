#include<iostream>

using namespace std;

int main(){
	
	long long int a[10],b[10];
	int cont=0;
	
	for(int i = 0;i<10; i++){
		cin>>a[i];
		
	}
	
	for(int i = 0;i<10; i++){
		cin>>b[i];
		
	}
	
	for(int i = 0;i<10; i++){
		cont=0;
		for(int j=0;j<10;j++){
			if(a[i]==b[j]){
				cont++;
			}
		}
		
		if(cont==0){
			cout<<a[i]<< " ";
		}
		
		
	}
	
	for(int i = 0;i<10; i++){
		cont=0;
		for(int j=0;j<10;j++){
			if(b[i]==a[j]){
				cont++;
			}
		}
		
		if(cont==0){
			cout<<b[i]<< " ";
		}
		
		
		
		
		
	}
	
	cout<< endl;
	
	return 0;
}
