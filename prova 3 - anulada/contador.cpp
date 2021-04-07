#include<iostream>
#include<cstring>

using namespace std;


int main(){
	
	char a[101];
	cin.getline(a,100);
	
	char *token[100];
    int cont=0,cont2=0;
    
    token[0] = strtok(a," ");
    
    while(token[cont] != NULL){
    	
     	cont++;
    	token[cont] = strtok(NULL," ");
       		
		
	}
	
	for(int i=0;i<=cont-1;i++){
    	for(int j=i+1;j<=cont-1;j++)
    		if(strcmp(token[i],token[j])==0) 
				cont2++;
    }
	
	cout<<cont<<" "<<cont-cont2<<endl;
	
	return 0;
}
