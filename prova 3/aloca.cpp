#include<iostream>

using namespace std;



int main(){
	
	int **mat;
	int n, principal=0, oposta=0;
	cin>>n;
	
	mat= new int *[n];
	
	for(int i=0;i<n;i++){
		mat[i] = new int [n];
	}
	
    for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>> mat[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		principal+=mat[i][i];		
	}
	
	int j=0;
	
	for(int i=n-1;i!=-1;i--){
	    oposta+=mat[j][i];	
		j++;	
	}
	
	cout << principal  - oposta <<  endl;
	
	for(int i=0;i<n;i++){
		delete []mat[i];
	}
	
	delete []mat;
	
	return 0;
}
