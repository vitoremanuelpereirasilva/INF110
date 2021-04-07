#include<iostream>
#include<cstring>
#include<cctype>


using namespace std;

int main(){
	
	char a[31];
	bool mai=false,min=false,dig=false,esp=false;
	cin>>a;
	for(int i=0;a[i]!='\0';i++){
		if(islower(a[i])){
			min=true;
			break;
		}
	}
	for(int i=0;a[i]!='\0';i++){
		if(isupper(a[i])){
			mai=true;
			break;
		}
	}
	for(int i=0;a[i]!='\0';i++){
		if(isdigit(a[i])){
			dig=true;
			break;
		}
	}
	for(int i=0;a[i]!='\0';i++){
		if(!isalnum(a[i])){
			esp=true;
			break;
		}
	}
	int seg=min+mai+dig+esp;
	if(seg==4){
		cout<<"segura"<<endl;		
	}else{
		if(seg==3||seg==2){
			cout<<"media"<<endl;		
		}else{
			cout<<"fraca"<<endl;
		}	
	}
	
	return 0;
}
