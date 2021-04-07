#include<iostream>
#include<cstring>

using namespace std;


int main(){
	
	int cont=0;
	
	char a[101];
	
	cin.getline(a,100);
	
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='('){
			cont++;
		}
		if(a[i]==')'){
			cont--;
		}
		if(cont<0){
			break;
		}
	}
	
	if(cont==0){
		cout << "SIM"<< endl;
	}else{
		cout << "NAO"<< endl;
	}
	
	
	
	
	return 0;
}
