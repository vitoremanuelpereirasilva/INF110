#include<iostream>
using namespace std;

int main(){
	
	int d,f;
	
	cin>> d >> f;
	
	int matriz[d][f];
	
	for(int i=0;i<d;i++){
		for(int j=0;j<f;j++){
		    cin>>matriz[i][j];
	    }
	}
	
	for(int i=0;i<f;i++){
		for(int j=0;j<d;j++){
			
			if(j==d-1){
				cout<<matriz[j][i];
			}else{
				cout<<matriz[j][i]<<" ";
			}
		    
	    }
	    cout<< endl;
	}
	
	
	return 0;
}
