#include<iostream>

using namespace std;

int main(){
	
	int n, par = 2;
	
	cin >> n;
	
	for(int i = par ; i<=n ;i+=2){
		cout << i << endl;
	}
	
	return 0;
}
