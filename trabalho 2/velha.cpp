#include<iostream>
using namespace std;

int main(){
	
	int x;
	
	cin >> x;//n° de jogadas realizadas
	
	int a, b,contx=0, conto =0,winx=0,wino=0;// a e b sao as variaveis das posições e os win para verficar quem venceu
	
	char c,velha[3][3];
	
	for(int i=0;i<x;i++){
		cin >> c >> a >> b;// ler O ou X e a posição no jogo da velha
		
		velha[a][b]=c;// inserir o valor na posição
	}
	
	//verificar se o X  venceu na horizontal(linhas)
	if(velha[0][0]=='x' && velha[0][1]=='x' && velha[0][2]=='x'  ){
		winx++;
	}else if(velha[1][0]=='x' && velha[1][1]=='x' && velha[1][2]=='x'  ){
		winx++;
	}else if(velha[2][0]=='x' && velha[2][1]=='x' && velha[2][2]=='x'  ){
		winx++;
	}
	
	//verificar se o O  venceu na horizontal(linhas)
	if(velha[0][0]=='o' && velha[0][1]=='o' && velha[0][2]=='o'  ){
		wino++;
	}else if(velha[1][0]=='o' && velha[1][1]=='o' && velha[1][2]=='o'  ){
		wino++;
	}else if(velha[2][0]=='o' && velha[2][1]=='o' && velha[2][2]=='o'  ){
		wino++;
	}
	// verificar se X venceu na vertical(coluna)
		
	if(velha[0][0]=='x' && velha[1][0]=='x' && velha[2][0]=='x'  ){
		winx++;
	}else if(velha[0][1]=='x' && velha[1][1]=='x' && velha[2][1]=='x'  ){
		winx++;
	}else if(velha[0][2]=='x' && velha[1][2]=='x' && velha[2][2]=='x'  ){
		winx++;
	} 
	// verificar se O venceu na vertical(coluna)
		
	if(velha[0][0]=='o' && velha[1][0]=='o' && velha[2][0]=='o'  ){
		wino++;
	}else if(velha[0][1]=='o' && velha[1][1]=='o' && velha[2][1]=='o'  ){
		wino++;
	}else if(velha[0][2]=='o' && velha[1][2]=='o' && velha[2][2]=='o'  ){
		wino++;
	} 
	//verifica se algum dos dois ganhou na diagonal principal

		
	if(velha[0][0]=='x' && velha[1][1]=='x' && velha[2][2]=='x'){
		winx++;
	}else if(velha[0][0]=='o' && velha[1][1]=='o' && velha[2][2]=='o'){
		wino++;
	}
		
	 
	// os dois proximos if verifica se X ou O ganhou na outra diagonal
	if(velha[0][2]=='x' && velha[1][1]=='x' && velha[2][0]=='x'){
		winx++;
	}
	
	if(velha[0][2]=='o' && velha[1][1]=='o' && velha[2][0]=='o'){
		wino++;
	}
	
	
	
	//Verifica quem ganhou, se nenhum dos dois tiver ganhado imprime "velha"
	if(winx==1){
		cout<<"Venceu x!" <<endl;
	}else if(wino==1){
		cout<<"Venceu o!" <<endl;
	}else {
		
		cout<<"Velha!" <<endl;
	}
	
	return 0;
}
