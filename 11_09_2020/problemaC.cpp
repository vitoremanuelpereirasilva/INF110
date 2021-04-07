#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	
	double r, a , pi= 3.1415 ;
	
	cin>> r >> a;
	
	cout<< fixed << setprecision(2) << pi*r*r*a << endl;
	
	return 0;
}
