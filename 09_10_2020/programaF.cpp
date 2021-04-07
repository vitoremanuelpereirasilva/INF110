#include<iostream>
using namespace std;

int main(){
	
	int n,cont=0, maior, r;
	cin>>n;
	
	long long int a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	maior=a[0];
	
	for(int i=i;i<n;i++){
		if(maior<a[i]){
			maior=a[i];
		}
		
	}
	
	r=maior+1;
	
	for(int i=0;i<n;i++){
		
		for(int j=i+1;j<n ; j++){
			if(a[i]==a[j]){
				a[j]=r;
			}
	}
		}
		
	for(int i=0;i<n;i++){
		if(a[i]<r) 
			cont++;
	}
	
	
	cout<<cont<<endl;
		
		
	return 0;
}

