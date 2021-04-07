#include<iostream>
#include<cstring>

using namespace std;

char * concatena(char a[],char b[]){
	
	char *c;
	c= new char [43];
	
	for(int i =0;i<strlen(a);i++){
		c[i]=a[i];
			
	}

	int j=0;
	for(int i =strlen(a);i<=strlen(b)+strlen(a);i++){
		c[i]=b[j];
		j++	;
	}
	
	return c;
	
}

int main(){
	
	char a[21], b[21];
	
	cin >> a >> b;
	
	char *c = concatena(a,b);
	
	cout << c <<endl;
	
	delete []c;
	
	return 0;
}
