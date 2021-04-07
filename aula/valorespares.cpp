#include<iostream>

using namespace std;

int main(){
	
	int a, b;
	
	cin >> a >> b;
	
	for(int i = a ; i<=b ;i+=2){
		if(i%2==0){
			cout << i << endl;
		}else{
			i++;
			cout<< i << endl;
		}
	}
	
	return 0;
}
