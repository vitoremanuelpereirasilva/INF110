#include <iostream>
using namespace std;

bool bissexto(int n){
	
	if(n%400==0){
		return 1;
	}else if(n%100==0){
	  return 0;
	} else {
		if(n%4==0){
	    	return 1;
		}else{
			return 0;
		}
	
	}
	 	
}

int main(){
	
	int a,i=1;
	int b[100000];
	
	cin >> a;
	b[0]=a;
	
    while(a>=0){
    	cin>>a;
    	b[i]=a;
    	i++;
	}
	
    for(int j = 0; j<i;j++){
    	if(b[j]>=0){
    		if(bissexto(b[j])){
    		cout<<"bissexto"<<endl;
	    	}else{
		    cout<<"nao bissexto"<<endl;
		}
		}
		
	}
	
	return 0;
}

