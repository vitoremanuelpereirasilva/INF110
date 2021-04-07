#include<iostream>
using namespace std;

int main(){
	
	int n,cont = 0,soma;
	cin>>n;
	
	int a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	cin>> soma;
	
	
	
	for(int i=0;i<n;i++){
		for(int j =0; j<n; j++){
			
			if(a[i]==a[j]){
				
			}else{
			
			
		    if(soma==a[i]+a[j]){
		    	cont++;
		 	}
		 	
		 }
		}
		
		
	}
	
		
	if(cont==0){
		cout<<"NAO"<< endl;
	}else{
		cout<<"SIM"<< endl;
	}
	
	
	
	return 0;
}

