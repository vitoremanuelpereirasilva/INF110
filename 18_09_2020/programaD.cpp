#include<iostream>

#include<iomanip>

using namespace std;

int main(){
	
	double T;
	char E;
	
	cin >> T >> E;	
	
	
	if ( E == 'F') {
		cout <<fixed <<setprecision(1)<<(5.0/9.0)*(T-32) <<" C" << endl;
	}else {
		cout << fixed <<setprecision(1)<<(9.0/5.0)*T+32<< " F"<< endl;
	}
	
	return 0;
}
