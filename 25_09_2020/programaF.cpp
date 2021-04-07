#include <iostream>
#include <iomanip>     
#include <math.h>    

using namespace std;

int main()
{
	long long ant1 = 1, ant2 = 0, n, total = 0;
	cin >> n;
	if((n==0)||(n==1)){
        cout<<n<<endl;
    }else{
	
	
	for(int i = 1; i < n; i++){
		total = ant1 + ant2;
		ant2 = ant1;
		ant1 = total;
	}

	cout << total << endl;
	}
	
	
		

	return 0;
	
}
