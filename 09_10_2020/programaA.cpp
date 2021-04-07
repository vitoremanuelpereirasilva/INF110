#include<iostream>
using namespace std;

int main(){
	
	int n,cont = 0,x;
	cin>>n;
	
	int num[n];
	
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	
	cin>>x;
	
	for(int i=0;i<n;i++){
		if(num[i]>=x){
			cont++;
		}
	}
	
	cout<< cont << endl;
	
	return 0;
}
