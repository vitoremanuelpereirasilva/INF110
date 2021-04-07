#include<iostream>
#include<cstring>

using namespace std;

struct resultado{
	int mat;
	
	char name[50];
	
	int nota1, nota2, nota3;
};

int main(){
	
	int n;
	
	cin>> n;
	
	resultado v[n];
	
	double media[n];
	
	for(int i= 0;i<n;i++){
		cin.ignore();
		cin.getline(v[i].name,50);
	    cin >> v[i].mat;
		cin >> v[i].nota1 >> v[i].nota2 >> v[i].nota3;
	
		
		media[i] = (v[i].nota1 + v[i].nota2 + v[i].nota3 )/3.0;
				
	}
	
	cout << "\n==APROVADOS==\n";
	
	for(int i=0;i<n;i++){
		
		if(media[i]>=60){
			cout << v[i].name << endl;
		}
		
	}
	
	cout << "\n==REPROVADOS==\n";
	
	for(int i=0;i<n;i++){
		
		if(media[i]<60){
			cout << v[i].name << endl;
		}
		
	}
	
	
	return 0;
}
