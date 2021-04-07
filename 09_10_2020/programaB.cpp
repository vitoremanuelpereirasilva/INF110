#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int num[n],invert[n];
	
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	
		
	for(int i=0;i<n;i++){
		invert[n-i-1] = num[i];
		
	}
	
	cout<< invert[0] ;
	
    for(int i =1; i<n; i++){
    	cout<<" " <<invert[i] ;
	}
	
	cout<< endl;
	
	return 0;
}
