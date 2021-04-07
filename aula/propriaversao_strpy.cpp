//propria versão de strpy

#include<iostream>
#include<cstring>

using namespace std;

int main(){
	
	char a[21],b[21];
	
	cin.getline(a,20);
	
		
	for(int i=0;i<strlen(a);i++){
		
		b[i]=a[i];
		
	}
	
	cout << b;
	
	return 0;
}
