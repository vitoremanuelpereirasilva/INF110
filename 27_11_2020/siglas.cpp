#include<iostream>
#include<cstring>
#include<cctype>


using namespace std;

int main(){
	
	char a[201],b[201];
	
    cin.getline(a,201);
    int j=0;
    
   for(int i =0 ;i<strlen(a) ;i++){
   	    
   	    if(a[i]!=' '){
   	    	if(a[i]==toupper(a[i])){
   	        cout<<a[i];  	
		    }
   	    	
		}
   	    
   	
   }
	
	cout<<endl;

	
	
	
	return 0;
}
