#include<iostream>
#include<cstring>
#include<iomanip>


using namespace std;

int main(){
	
	char a[31];
	
	double cont=0;
	
	double x;
	
	cin>>a;
	
	for(int i=0;i< strlen(a) ;i++){
	    if(a[i]=='a'|| a[i]== 'e'|| a[i]== 'i'|| a[i]=='o'||a[i]=='u'|| a[i]=='A'||a[i]=='E'|a[i]=='I'|a[i]=='O'| a[i]=='U'){
	    	cont++;
		}
	}
	
	
	x = double(cont/strlen(a))*100.0;
	
	
	cout << fixed<< setprecision(0) <<x << "%" << endl; 
	
	return 0;
}
