#include<iostream>
#include<cstring>


using namespace std;

int main(){
	
	char a[31],b[31];
	
    cin>>a;
    
    int cont=0;
	
	for(int i=0;i< strlen(a) ;i++){
	    b[i]= a[strlen(a)-(i+1)];
	}
	
	for(int i=0;i< strlen(a) ;i++){
	    if(a[i]==b[i]){
	    	cont++;
		}
	}
	
	if(cont==strlen(a)){
		cout<<"PALINDROMO"<< endl;
	}else{
		cout<< "NAO"<< endl;
	}
	
	return 0;
}
