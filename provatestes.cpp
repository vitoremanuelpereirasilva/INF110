#include<iostream>
using namespace std;

int recur(int **mat, int l, int c, int x, int y){
    if(x>=l || x<0 || y>=c || y<0) {
		return 0;
	}else {
if(mat[x][y]==1){
  			mat[x][y] =0;
			mat[x-1][y] = recur(mat,l,c,x-1,y);
			mat[x+1][y] = recur(mat,l,c,x+1,y);
			mat[x][y-1] = recur (mat,l,c,x,y-1);
			mat[x][y+1] = recur(mat,l,c,x,y+1);
		}
	}

}
int main(){

      int **mat,l,c;

      cin>> l >> c;
      
      mat = new int *[l];

      for(int i = 0; i<l;i++){
             mat[i] = new int [c];
      }
      
       for ( int i =0;i<l;i++){
	for(int j = 0 ; j<c; j++){
		
cin >> mat [i][j];

	}
      }	
     int x, y;
     cin >> x >>y;

     recur(mat,l,c,x,y); 

 for(int i = 0; i<l; i++){
	for(int j=0;j<c;j++){
		cout << mat [i][j] << " ";
	}
cout<< endl;
}




    for(int i=0;i<l;i++){
	delete [] mat[i];
    }
    delete [] mat;

      return 0;
}

