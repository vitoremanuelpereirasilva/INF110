#include<iostream>
using namespace std;

int main(){
	
    int n,soma=0;
    
    cin >> n;
    
    int vetora[n], vetorb[n],multi[n];
    
    for(int i = 0 ; i<n ; i++){
    	cin>> vetora[i];
	}
	for(int i = 0 ; i<n ; i++){
    	cin>> vetorb[i];
	}
	
	for(int i = 0 ; i<n ; i++){
    	multi[i]= vetora[i]*vetorb[i];
	}
	
	for(int i = 0 ; i<n ; i++){
    	soma+=multi[i];
	}
	
	cout<< soma << endl;
	
	return 0;
}
