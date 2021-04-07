#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int n;
	
	cin>>n;
	
	char a[n];
	
	cin>> a;
	
	for(int i =0;a[i]!='\0';i++){
		if(a[i]=='D' && a[i+1]=='E'){
			a[i]='E';
			a[i+1]='D';
			cout << a << endl;
		}
		
	}
	
	
	
	return 0;
}



