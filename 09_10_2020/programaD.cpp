#include<iostream>
using namespace std;

int main(){
	
	int n,cont,x;
	cin>>n>>x;
	
	int a[n],b[x];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<x;i++){
		cin>>b[i];
	}
	
	cout<<"{";
	
	for(int i=0;i<n;i++){
		cont=0;
		
		for(int j =0; j<x; j++){
		    if(a[i]==b[j]){
		    	cont++;
			}
		}
		
		
		if(cont==1){
			cout<<a[i] << " ";
		}
		
	}
	
	cout<<"}"<< endl;
	return 0;
}

