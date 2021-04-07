#include<iostream>

using namespace std;

int main(){
	
	double nota[5][3], total[5]={0,0,0,0,0},media[3]={0,0,0};
	
	for(int i = 0;i<5 ;i++){
		for(int j =0 ;j<3; j++){
			cin>> nota[i][j];
			total[i]+=nota[i][j];
			media[j]+=nota[i][j];
		}
	}
	
	for(int i = 0;i<5 ;i++){
		
		cout<<"Aluno "<< i+1 <<" - ";
		
		for(int j =0 ;j<3; j++){
			cout<< nota[i][j]<<" ";
						
		}
		
		cout<< "- total: " << total[i]<< endl;
		
	}
	
	cout<< "media das provas: ";
	
	for(int i = 0;i<3;i++){
		cout<< media[i]/3 << " ";
	}
	
	cout<<endl;
	
	return 0;
}
