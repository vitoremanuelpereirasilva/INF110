#include <iostream>
using namespace std;
int main() {
	
    int n;
    
    
    bool matriz=true;
    
    
    cin>>n;
    
    int matriz1[n][n];
    
    
    for (int i=0; i<n; i++){
    	
    	for (int j=0; j<n; j++){
        	cin>>matriz1[i][j];
		}
              	
	}
           
    
    int i=0, j=0;
    
    while (i!=n-1 || j!=n-1){
    	
        if(matriz1[i+1][j] == 1)
		{
        	
        	i++;
        	
		}
		else if(matriz1[i][j+1] == 1 )
		{
			
			j++;
			
		}
		else if(matriz1[i+1][j+1]== 1)
		{
			
            i++;
            
            j++;
            
        }
		else{
        	
            matriz=false;
            
            break;
            
        }
    }
    
    
    if(matriz){
    	
		cout<<"SIM\n";
    	
    }
	else
	{
   	   
		cout <<"NAO\n";
		
    }
 
    return 0;
}
