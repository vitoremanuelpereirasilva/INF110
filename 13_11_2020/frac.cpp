#include<iostream>
using namespace std;

void somafrac(int na, int da, int nb, int db, int &nr, int &dr){
	
	dr= da*db;
	nr = na*(dr/da) + (dr/db)*nb;
	int aux;
	
	if(nr>=dr){
        for(int i=1;i<=nr;i++){
            if(nr%i==0 && dr%i==0){
                aux = i;
            }
        }
    }
    else{
        for(int i=1;i<=dr;i++){
            if(nr%i==0 && dr%i==0){
                aux = i;
            }
        }
    }
    if(aux>=1){
        dr = dr/aux;
        nr = nr/aux;
    }
	
}

int main(){
	
	int a, b, c, d, nr=0 , dr=0;
	char x,y;
	
	cin >> a >> x >> b >> c >> y >> d;
	
	somafrac(a, b, c, d, nr, dr );
	
	cout << a <<"/"<<b << "+" << c <<"/"<<d << "=" << nr<<"/"<<dr<< endl; 
	
	return 0;
}

