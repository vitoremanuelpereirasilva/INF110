#include<iostream>
using namespace std;

void convhoras(int seg, int &h, int &m, int &s){
	
	if(seg>=3600){
		h = seg/3600;
		seg = seg - 3600*h;
	}
	
	if(seg>=60){
		m = seg/60;
		seg = seg - 60*m;
	}
	
	s = seg;
}

int main(){
    
    int x,h=0,m=0,s=0;
       
    cin>>x;
    
    convhoras(x,h,m,s);
    
    if(h<10){
    	if(m<10){
    		if(s<10){
    			cout << "0"<< h <<":"<<"0"<<m<<":"<<"0"<<s<< endl;
			}else{
				cout << "0"<< h <<":"<<"0"<<m<<":"<<s<< endl;
			}
		}else{
			if(s<10){
    			cout << "0"<< h <<":"<<m<<":"<<"0"<<s<< endl;
			}else{
				cout << "0"<< h <<":"<<m<<":"<<s<< endl;
			}
			
		}
	}else if(h>10){
		if(m<10){
    		if(s<10){
    			cout << "0"<< h <<":"<<"0"<<m<<":"<<"0"<<s<< endl;
			}else{
				cout << "0"<< h <<":"<<"0"<<m<<":"<<s<< endl;
			}
		}else{
			if(s<10){
    			cout << "0"<< h <<":"<<m<<":"<<"0"<<s<< endl;
			}else{
				cout << "0"<< h <<":"<<m<<":"<<s<< endl;
			}
			
		}
	}else{
		cout << h <<":"<<m<<":"<<s<< endl;
	}
    
    

    return 0;
}

