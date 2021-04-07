#include <iostream>

using namespace std;

int main(){

    int n,m;
    cin >> n >> m;

    int valorpratos[n][m],valorpreco[m],total=0;
    
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> valorpratos[i][j];
        }
    }

    for(int i=0; i<m; i++){
        cin >> valorpreco[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            total += (valorpreco[j]*valorpratos[i][j]);
        }
        cout << total;

        if(i == n-1){
		    cout << endl;
		}else{
		    cout << " ";
		}
        total = 0;
    }

    return 0;
}
