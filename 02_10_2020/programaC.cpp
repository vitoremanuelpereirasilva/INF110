#include<iostream>

using namespace std;

int main(){
	
	int n, idade, l, cont =0;
	
	cin >> n >> idade >> l ;
	
	int id[n];
	
	for(int i = 0;i<n ;i++ ){
		cin>> id[i];
	}
	for(int i =0; i<n ;i++){
		if(id[i] >= idade){
			cont++;
		}
	
	}
	
	if(cont<= l){
		cout<< "Aceito."<< endl;
	}else{
		cout << "Nao aceito." << endl;
	}
	
	return 0;
}
