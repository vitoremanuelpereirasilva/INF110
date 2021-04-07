#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	
	srand (time(NULL));
	
	int v =rand() % 10+1;//começa do 1 e vai até o 10	
	
	cout << v << endl;
	
	
	
	return 0;
}
