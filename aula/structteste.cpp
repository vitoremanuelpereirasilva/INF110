#include<iostream>
#include<cstring>

using namespace std;

struct horario{
	int hora, min;
	char a;
};

int main(){
	
	horario v[2];
	
	cin >> v[0].hora>> v[0].a>> v[0].min;
	
	cin >> v[1].hora>> v[1].a>> v[1].min;
	
	if(v[0].hora == v[1].hora){
		
		cout << v[0].hora << v[0].a << v[1].min - v[0].min << endl;
		
	}else if(v[0].hora < v[1].hora && v[0].min <= v[1].min){
		
		cout << v[1].hora- v[0].hora << v[0].a << v[1].min - v[0].min << endl;
		
	}else if(v[0].hora < v[1].hora && v[0].min>=v[1].min){
		
		cout << 0 << v[0].a << v[1].min - v[0].min + 60 << endl;
		
	}
	
	
	return 0;
}
