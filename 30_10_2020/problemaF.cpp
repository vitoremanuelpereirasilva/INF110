#include<iostream>
#include<iomanip>
using namespace std;

double imposto(double v){
	double imp;
	
	if(v <=22847.76){
		imp= 0.00;
	}else if(v>22847.76 && v<=33919.80){
		imp = (v*0.075)- 1713.58;
	
	}else if(v>33919.80 && v<=45012.60){
		imp = (v*0.15) - 4257.57;
	
	}else if(v>45012.60 && v<=55976.16){
		imp = (v*0.225)-  7633.51;
	
	}else{
		imp = (v*0.275)-  10432.32;
		
	}
	
	return imp;
}



int main(){
	
    long double a;
    		
    while(true){
        cin>>a;
        if(a==0){
            break;
        }
        cout<<fixed<<setprecision(2)<<"R$ "<<imposto(a)<<endl;
       
	}
	
    return 0;
}
