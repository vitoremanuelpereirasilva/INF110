#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
	
	double x1, y1 , x2, y2 , distancia ;
	
	cin>> x1 >> y1 >> x2 >> y2;
	
	distancia = sqrt( ( x2-x1)*( x2-x1) + ( y2-y1)*(y2-y1));
		
	cout<< fixed << setprecision(2) << distancia  << endl;
	
	return 0;
}
