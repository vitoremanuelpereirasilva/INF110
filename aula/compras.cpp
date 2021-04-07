#include<iostream>

using namespace std;

int main(){
    double A[10], valor [10];
    int B[10];
	
	
	for(int i = 0; i<10; i++){
		cin>> A[i]>> B[i];
		
		valor[i] = A[i]*B[i];
	}
		
	cout << "nota fiscal:"<< endl;
	
	for(int i = 0 ;i<10 ; i++){
		cout << "total do produto " << i+1 <<" = " << valor[i]<< endl;
	}
		
	
  return 0;	
}
