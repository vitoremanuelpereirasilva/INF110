#include<iostream>

using namespace std;

int main(){
	
	char a,b[1000000],cont=0;
	int x;
	
	cin>>x;
	cin>>a;
	
	for(int i=0;i<x;i++){
		b[i]=a;
	}
	
	cont=x;
	
	while(x!=0){
		cin>>x;
		cin>>a;
		
	    for(int i=cont;i<cont+x;i++){
		    b[i]=a;
	    }
            
        if(x==0){
		}else{
			cont+=x;
		}
		
	}
	
	
	
	
	for(int j =0;j<cont;j++){
		cout<<b[j];
	}
	
	cout<<"."<<endl;
	
	return 0;
}
	
