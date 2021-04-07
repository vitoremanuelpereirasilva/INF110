#include<iostream>
using namespace std;

int main(){
	
	int m,n,v,cont;
	
	cin>> m >> n;
	
	int matriz[m][n],cont2[m];
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		    cin>>matriz[i][j];
	    }
	}
	
    cin>>v;
    
    for(int i=0;i<m;i++){
        cont=0;
		
		for(int j=0;j<n;j++){
		    if(matriz[i][j]==v){
		    	cont++;
			}
	    }
	   cont2[i]=cont; 
	}
	
	for(int i=0;i<m;i++){
        
	    cout<< cont2[i]<<endl; 
	}
	
	
	return 0;
}
