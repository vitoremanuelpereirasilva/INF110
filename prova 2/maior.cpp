#include<iostream>
using namespace std;


int maior(int v[],int posicao,int n){
	
	if(posicao==n-1){
		
		return v[posicao];
	
		
	} 
	
	
    int aux;
    
    
    aux = maior(v, posicao+1, n);
    
    
    if (v[posicao]>aux){
   	
   	    return v[posicao];
   	
    }else{
   	 
   	    return aux;
   	
    } 
	
}



int main(){
	
	int x ;
	
	cin>> x ;
	
	
	int a[x] ;
	
	
	
	for(int i=0;i<x;i++)
	{
		
		cin>>a[i];
		
	}
	
    cout<< maior(a,0,x)<< endl;
	
	
	return 0;
}
