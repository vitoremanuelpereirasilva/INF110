#include<iostream>
#include<cstring>

using namespace std;

int main(){
	
	char **nomes;
	int n;
	char *aux;
	
	cin>> n;
	
	nomes = new char*[n];
	aux = new char [51];
	
	for(int i=0;i<n;i++){
		nomes[i]=new char [51];
		
	}
	
	cin.ignore();
	
	for(int i=0; i<n; i++){
        
        cin.getline(nomes[i],50);
        
    }
    
      for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(strcmp(nomes[i], nomes[j]) > 0)
            {
               strcpy(aux, nomes[i]);
               strcpy(nomes[i], nomes[j]);
               strcpy(nomes[j], aux);
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout << nomes[i] << endl;
    }
	
	delete []nomes;
	delete []aux;
	
	return 0;
}
