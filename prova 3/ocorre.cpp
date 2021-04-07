#include <iostream>
#include <cstring>
using namespace std;

int main () {
	
	int cont=-1;
	
	bool resul;
	
	char a [101];
	
	char b [101];
	
	cin>>a>>b;

	if(strlen(b) >= strlen(a)){
   	    for(int i = 0; i < (strlen(b) - strlen(a) + 1); i++){
  		        resul = true;
           for(int j = 0; j < strlen(a); j++){
                if(b[i + j] != a[j])
                    resul = false;
            }
            if(resul)
                cont=i;
        }
    }
  
  cout<<cont<<endl;
  
  return 0;
}
