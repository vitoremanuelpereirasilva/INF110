#include<iostream>
#include<cctype>
using namespace std;

int main(){
	
	char a[50];
	
	cin>>a; 
	
	
	for(int i=0;a[i]!='\0';i++){
		
		a[i]=toupper(a[i]);
		
	} 
	  
	
	cout << "A palavra toda em maiuscula : " << a << endl;
	
	
	
	return 0;
}
