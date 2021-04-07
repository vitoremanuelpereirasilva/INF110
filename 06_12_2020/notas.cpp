#include<iostream>
#include<cstring>

using namespace std;

struct aluno{
	int matricula, nota;
};

int main(){
	
	int n;
	
	cin >> n;
	
	aluno v[n];
	
	for(int i =0;i<n;i++){
		
		cin >> v[i].matricula >> v[i].nota ;
		
		
	}
	
 	for(int i= 0; i<n; i++){
 		
       for(int j = i+1; j<n; j++)
       {
           if(v[i].matricula > v[j].matricula)
           {
               int aux = v[i].matricula;
               int auxn = v[i].nota;
               v[i].matricula = v[j].matricula;
               v[i].nota =v[j].nota;
               v[j].matricula = aux;
               v[j].nota = auxn;
           }
        }

   }
		
	
	for(int i =0;i<n;i++){
		
		cout<< v[i].matricula << " " << v[i].nota << endl;
		
		
	}
	
	return 0;
}
