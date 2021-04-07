#include<iostream>
#include<cstring>
#include<cmath>
#include<iomanip>

using namespace std;

struct Ponto {
	int x,y;
};

double distancia (Ponto A, Ponto B);

double area (Ponto P, Ponto Q, Ponto R){
	
	double a,b,c;
	
	a=distancia ( P, Q);
	b=distancia ( P, R);
	c=distancia ( R, Q);
	
	double semi = (a + b + c)/2.0;
	
	return sqrt(semi*(semi -a )*(semi -b)*(semi -c));
	
}

double distancia (Ponto A, Ponto B){
		
	return sqrt((A.x - B.x)*(A.x - B.x) + (A.y - B.y)*(A.y - B.y) );
	
}
	

int main(){
	
	Ponto a,b,c;
	
	cin >> a.x >> a.y;
	cin >> b.x >> b.y;
	cin >> c.x >> c.y;
	
	cout << fixed << setprecision(2) << area (a,b,c) << endl;
	
	
	return 0;
}
