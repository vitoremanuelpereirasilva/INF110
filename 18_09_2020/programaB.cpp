#include<iostream>

using namespace std;

int main(){
	
	int n, a, l, p;
	
	cin >> n>> a >> l >> p;
	
	if( n <= l && n <= a && n <= p ){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	return 0;
}
