#include<iostream>

using namespace std;

int main(){
	
	int nf, ft , fp;
	
	cin >> nf >> ft >> fp;
	
	if (nf<40 || ft > 15 ||fp >7){
		cout << "Reprovado" << endl;
	}else if ( nf>=40 && nf <60){
		cout << "Final" << endl ;
		
	}else {
		cout<< "Aprovado" << endl;
	}
	
	return 0;
}
