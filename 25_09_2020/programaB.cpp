#include<iostream>

using namespace std;

int main(){
	
	int n,cont = 0;
	
	cin >> n;
	
	for(int i= 1; i<=n ;i++){
		if(n%i==0){
			cont++;
		}
		
		
	}
	
	
	if(cont==2){
		
		cout<< "Primo."<< endl;
		
	}else if (cont > 2){
		
		cout<< "Nao primo."<< endl;
				
	}
	return 0;
}
