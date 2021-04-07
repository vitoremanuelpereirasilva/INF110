#include<iostream>
using namespace std;

int soma(int x){
	if(x==0){
		return 0;
	}else{
		return x%10+soma(x/10);
	}
   	
}

int main(){
	
	int x;
	
	cin>>x;
	
    cout << soma(x)<<endl;
    	
	
	return 0;
}
