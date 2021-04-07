#include <iostream>
#include <cstring>
using namespace std;

struct TipoPartida {
    char time1[31], time2[31];
    int placar1, placar2;
};

int main(){
	
	TipoPartida partida[50];
    char selecoes[4][31];
    int n;
    char x;
    int pts[4]={0};
    
    cin >> n;
    
    for(int i=0; i<n; i++){
    	
		cin>>partida[i].time1>>partida[i].placar1>>x>>partida[i].placar2>>partida[i].time2;
    
   		cin.ignore();
    	
	}
        	
	
	for(int i=0; i<4; i++) {
		
		cin>>selecoes[i];
	}
		
	
	 for(int i=0; i<4; i++) {
	 	
        for(int j=0; j<n; j++) {
        	
            if(strcmp(partida[j].time1, selecoes[i]) == 0) {
            	
                if(partida[j].placar1 > partida[j].placar2){
                	
                	pts[i] += 3;
				}
                   
                else if(partida[j].placar1 == partida[j].placar2) {
                	
                	pts[i] += 1;
                	
				}
                    
            } else if(strcmp(partida[j].time2, selecoes[i]) == 0) {
            	
                if(partida[j].placar2 > partida[j].placar1){
                	
                	pts[i] += 3;
                	
				}
                    
                else if(partida[j].placar2 == partida[j].placar1){
                	
                	pts[i] += 1;
                	
				}
                     
            }
        }
    }
    
	
	for(int i=0; i<4; i++) {
		
		cout<<selecoes[i]<<" "<<pts[i]<<endl;
		
	}
        
	
	return 0;
}
