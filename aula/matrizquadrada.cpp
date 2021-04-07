#include<iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	double matriz[n][n], media=0, cont=0, diagonal=0, diagonalsec=1;
	
	
	for(int i = 0;i<n ;i++){
		for(int j =0 ;j<n; j++){
			cin>> matriz[i][j];
			media+=matriz[i][j];
		}
	}
	
	media= media/(n*n);	
	
	for(int i = 0;i<n ;i++){
		for(int j =0 ;j<n; j++){
			if(matriz[i][j]<media){
				cont++;
			}
		}
	}
	
	for(int i= 0; i<n;i++){
		diagonal+=matriz[i][i];
	}	
	
	diagonal= diagonal/n;
	
	for(int i = n-1; i>=0 ; i-- ){
		diagonalsec= diagonalsec*matriz[i][i];
	}
	
	
	cout << media << " " << cont << " " << diagonal << " " << diagonalsec << endl;
	
	return 0;
}
