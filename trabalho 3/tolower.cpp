#include<iostream>
#include<cctype>

using namespace std;

int main(){
	
	char a[50];
	
	cin.getline(a,50);
	
    for(int i=0;a[i]!='\0';i++){
		a[i] = tolower(a[i]);
	}
	
	cout << a << endl;
	
	
	
	return 0;
}
