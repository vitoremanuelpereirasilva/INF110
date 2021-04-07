#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main(){
	
	double a, b, c, delta ;
	
	cin>> a >> b >> c ;
	
	delta = b*b-4*a*c;
	
	if(delta<0){
		cout << "Nao ha raiz real" << endl;
	}else if(delta==0){
		cout<< fixed << setprecision(2) << (-b )/(2.0*a )<< endl;
	}else{
		cout<< fixed << setprecision(2) << (-b - sqrt(delta))/(2.0*a )<<" "<< (-b + sqrt(delta))/(2.0*a)<< endl;
	}
	
	
	
	return 0;
}
