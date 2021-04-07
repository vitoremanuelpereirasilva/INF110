#include<iostream>
using namespace std;

int maior(int v[],int pos, int n){
	
	if(pos==n-1){
		return v[pos];
	}
	
	int aux=maior(v,pos+1,n);
	
    if(v[pos]>aux){
    	return v[pos];
	}else{
		return aux;
	}
}

int main(){
	
	int a[5] ={1,7,3,4,5};
	
	cout << maior(a,0,5) << endl;
	
	
	return 0;
}
