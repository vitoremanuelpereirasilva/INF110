#include<iostream>
using namespace std;

int espelhar(int n){
	int a1,a2,a3,a4;
    a1 = n/1000;
    n = n%1000;
    a2 = n/100;
    n = n%100;
    a3 = n/10;
    a4 = n%10;
    n = a4*1000+a3*100+a2*10+a1;
    
    return n;

	
}

int main(){
	int x, y;
	
	 while(true){
        cin>>x>>y;
        if(x==0 && y==0){
            break;
        }
        if(espelhar(x)==y){
            cout<<"espelho"<<endl;
        }
        else{
            cout<<"nao espelho"<<endl;
        }
    }
	
	return 0;
}
