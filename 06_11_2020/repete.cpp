#include<iostream>
using namespace std;

int main(){
	
	int t,n,rep;
	
	cin>> t;
	
	for(int i=0;i<t;i++){
		cin >> n;
		int a[n]={0};
		rep=0;
				
		for(int j=0;j<n;j++){
		cin >> a[j];
	    }
					
	    for(int k=0;k<n;k++){
	    	rep=0;
	       	for(int l=k+1;l<n;l++){
	       		if(a[l]==a[k]){
	       			rep++;
				}
				
			}
		   	
			if(rep==1){
			   	cout <<"SIM: " << a[k] <<endl;
			   	break;			 
		    }
		   
		}  
	if(rep==0){
		cout<<"NAO"<<endl;
	}	
	
	}
	    
	   	
	return 0;
}
