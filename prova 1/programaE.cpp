#include<iostream>

using namespace std;

int main(){
	
	int n =0, a=0, b=0 ,c=0;
	
	cin>> n >> a >> b>>c;
	
	if(n%a==0){
		cout<< n/a <<" doces de "<<a<<" reais"<< endl;
	}else if(n%b==0){
		cout<< n/b <<" doces de "<<b<<" reais"<< endl;
	} else if(n%c==0){
		cout<< n/c <<" doces de "<<c<<" reais"<< endl;
	} else{
		cout<< "Capivaristo ficara sem doce"<< endl;
	}
	
	
	
	return 0;
}
