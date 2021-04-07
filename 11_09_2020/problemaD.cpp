#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main(){
	
	double a, b, c, delta ;
	
	cin>> a >> b >> c ;
	
	delta = b*b-4*a*c;
	
	cout<< fixed << setprecision(4) << (-b + sqrt(delta))/(2.0*a )<<" "<< (-b - sqrt(delta))/(2.0*a)<< endl;
	
	return 0;
}
