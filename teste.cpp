#include<iostream>
// matriz com ponteiros

using namespace std;



int main(){
	
	int **mat;
	int n;
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
		for(int j=0;j<n;j++){
			cout<< mat[i][j] << " ";
		}
		cout<< endl;
	}
	
	for(int i=0;i<n;i++){
		delete []mat[i];
	}
	
	delete []mat;
	
	return 0;
}
