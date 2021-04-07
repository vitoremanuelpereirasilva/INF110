#include<iostream>
using namespace std;

bool divresto(int, int, int &, int &);

int main(){
	
	int x,a,b,div,resto;
	
	cin>>x;
	
	for(int i=0;i<x;i++){
		cin>>a>>b;
		if(divresto(a,b,div,resto)==0){
			cout <<"indefinido"<< endl;
		}else if(divresto(a,b,div,resto)==1){
			
			cout << div << " " << resto<< endl;
			
		}
	}
	
	return 0;
}


bool divresto(int a, int b, int &c, int &d){
	if(b==0){
		return 0;
	}else{
		c=a/b;
		d=a%b;
				
		return 1;
	}
}
