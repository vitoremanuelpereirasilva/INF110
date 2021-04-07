#include<iostream>

using namespace std;

int main(){
	
    int x=0, soma1=0, soma2=0, soma3=0;
    
    cin>>x;
    
    int a[x],b[x],c[x];
		
	for(int i=0;i<x;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<x;i++){
		cin>>b[i];
	}
	
	for(int i=0;i<x;i++){
		cin>>c[i];
	}
	
	for(int i =0;i<x;i++){
		soma1+=a[i]*b[i];
		soma2+=a[i]*c[i];
		soma3+=b[i]*c[i];
	}
	
	if(soma1>soma2 && soma1>soma3){
		cout<< "1 2"<< endl;
	}else if(soma2>soma1 && soma2>soma3){
		cout<< "1 3"<< endl;
	}else {
		cout<< "2 3"<< endl;
	}
	
	return 0;
}
