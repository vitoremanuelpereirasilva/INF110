//projeto chatbot
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<clocale>
#include<cctype>

using namespace std;

void minuscula(char a[]){ // transforma a frase toda em minuscula
	
	for(int i=0;a[i]!='\0';i++){
		a[i] = tolower(a[i]);
	}
	
}

void findmes(char sentece[],char b[],int &a){ // procura dentro da frase qual o m�s e armazena esse valor
	
	char *mes;
	
	char meses[12][12] = {
		"janeiro",
		"fevereiro",
		"marco",
		"abril",
		"maio",
		"junho",
		"julho",
		"agosto ",
		"setembro",
		"outubro",
		"novembro",
		"dezembro"
	
	};
	
	for(int i =0;i<12;i++){
		
		mes = strstr(sentece,meses[i]); // acha o m�s dentro da frase
		
		if(mes!= NULL){
			
			strcpy(b,meses[i]);// armazena dentro de um char
			a=i;// armazena o indice o m�s
		}
		
	}
	
		
}
void finddia(int nmes, int &dia,char mes[]){ // verifica se o dia est� certo ou � um dia inv�lido
	
	if(nmes==0||nmes==2||nmes==4||nmes==6||nmes==7||nmes==9||nmes==11){
		
		while( dia <1 || dia >32){
			cout<< mes <<" n�o tem "<< dia << " dias. Me fale um dia v�lido" <<  endl;
			cin>>dia;
			
		}
		
	}else if(nmes==3||nmes==8||nmes==10||nmes==5){
		
		while( dia <1 || dia >31){
			cout<< mes <<" n�o tem "<< dia << " dias. Me fale um dia v�lido" <<  endl;
			cin>>dia;
			
		}
	}else if(nmes==1){
		
		while( dia <1 || dia >29){
			cout<< mes <<" n�o tem "<< dia << " dias. Me fale um dia v�lido" <<  endl;
			cin>>dia;
			
		}
		
	}
		
	
		
		
}

void findsigno(int mes,int dia){ // de acordo com o m�s e o dia, achar qual � o signo da pessoa e escreve a descri��o
	//�ries: de 21 mar�o a 20 abril
	//Touro: de 21 abril a 20 maio
    //G�meos: de 21 maio a 20 junho
	//C�ncer: de 21 junho a 22 julho
	//Le�o: de 23 julho a 22 agosto
	//Virgem: de 23 agosto a 22 setembro
	//Libra: de 23 setembro a 22 outubro
	//Escorpi�o: de 23 outubro a 21 novembro
	//Sagit�rio: de 22 novembro a 21 dezembro
	//Capric�rnio: de 22 dezembro a 20 janeiro
	//Aqu�rio: de 21 janeiro a 18 fevereiro
	//Peixes: de 19 fevereiro a 20 mar�o
	
	if(mes==0 ){
		
		if(dia<=20 ){
			//capricornio
			cout <<"CAPRIC�RNIO: As vibra��es mais altas de Capric�rnio est�o ligadas � responsabilidade, ao foco, � organiza��o, � ambi��o e o fato de serem muito trabalhadores. J� as vibra��es mais baixas podem acabar sendo a rigidez excessiva, pessimismo e uma poss�vel avareza. Planetas que um indiv�duo tenha em Capric�rnio tendem a se manifestar de forma prudente, s�ria e disciplinada."<<endl;
		}else if(dia>=21 ){
			//aquario
			cout <<"AQU�RIO: Aqu�rio � o signo cujas vibra��es mais altas s�o a criatividade, humanitarismo e o fato de serem verdadeiramente revolucion�rios e originais. J� as vibra��es mais baixas podem ser o excentrismo, rebeldia e racionalidade em excesso. Planetas que um indiv�duo tenha em Aqu�rio tendem a se manifestar de forma original, livre, imprevis�vel e revolucion�ria"<<endl;
		}
		
	}else if(mes==1 ){
		
		if(dia<=18){
			//aquario
			cout <<"AQU�RIO: Aqu�rio � o signo cujas vibra��es mais altas s�o a criatividade, humanitarismo e o fato de serem verdadeiramente revolucion�rios e originais. J� as vibra��es mais baixas podem ser o excentrismo, rebeldia e racionalidade em excesso. Planetas que um indiv�duo tenha em Aqu�rio tendem a se manifestar de forma original, livre, imprevis�vel e revolucion�ria"<<endl;
		}else if(dia >= 19){
			//peixes
			cout <<"PEIXES: Em suas vibra��es mais altas, Peixes tem tudo a ver com sonhos, arte, sensibilidade e espiritualidade. J� em suas vibra��es mais baixas, especialmente para aqueles que t�m o Sol em Peixes ou que t�m este signo forte no mapa, � poss�vel que haja uma dificuldade em manter os p�s no ch�o, uma instabilidade emocional e a busca por recursos de fuga da realidade. Planetas em Peixes tendem a se manifestar de forma m�stica, intuitiva, emp�tica ou fantasiosa. "<<endl;
		}
		
	}else if(mes==2 ){
		
		if(dia<=20 ){
			//peixes
			cout <<"PEIXES: Em suas vibra��es mais altas, Peixes tem tudo a ver com sonhos, arte, sensibilidade e espiritualidade. J� em suas vibra��es mais baixas, especialmente para aqueles que t�m o Sol em Peixes ou que t�m este signo forte no mapa, � poss�vel que haja uma dificuldade em manter os p�s no ch�o, uma instabilidade emocional e a busca por recursos de fuga da realidade. Planetas em Peixes tendem a se manifestar de forma m�stica, intuitiva, emp�tica ou fantasiosa. "<<endl;
		}else if( dia >=21 ){
			//aries
			cout <<"�RIES: Sendo o primeiro do zod�aco, o signo de �ries representa fortemente novos in�cios, pioneirismo, coragem, empreendedorismo, energia, dinamismo e competitividade. Em suas vibra��es mais baixas, temos a impulsividade, ego�smo e a pressa. Planetas que um indiv�duo tenha nesse signo podem se manifestar de forma pioneira, corajosa ou imprudente."<< endl;
		}		
	}else if(mes==3 ){
		
		if(dia<=20 ){
			//aries
			cout <<"�RIES: Sendo o primeiro do zod�aco, o signo de �ries representa fortemente novos in�cios, pioneirismo, coragem, empreendedorismo, energia, dinamismo e competitividade. Em suas vibra��es mais baixas, temos a impulsividade, ego�smo e a pressa. Planetas que um indiv�duo tenha nesse signo podem se manifestar de forma pioneira, corajosa ou imprudente."<< endl;
		}else if(dia >=21 ){
			//touro
			cout <<"TOURO: As principais qualidades de Touro s�o a determina��o, estabilidade, perseveran�a, sensualidade e praticidade. � interessante ter um cuidado com a teimosia, pregui�a, possessividade ou materialismo. Planetas que um indiv�duo tenha em Touro se manifestam de forma est�vel ou at� mesmo um pouco mais lenta."<<endl;
		}
		
	}else if(mes==4 ){
		
		if(dia<=21 ){
			//touro
			cout <<"TOURO: As principais qualidades de Touro s�o a determina��o, estabilidade, perseveran�a, sensualidade e praticidade. � interessante ter um cuidado com a teimosia, pregui�a, possessividade ou materialismo. Planetas que um indiv�duo tenha em Touro se manifestam de forma est�vel ou at� mesmo um pouco mais lenta."<<endl;
		}else if(dia >=22 ){
			//gemeos
			cout <<"G�MEOS: As vibra��es mais altas de G�meos s�o a intelig�ncia, sociabilidade, comunicatividade, a curiosidade para aprender coisas novas e a flexibilidade para compreender outros pontos de vista. J� nas vibra��es mais baixas, h� a dispers�o, a fala em excesso e uma poss�vel superficialidade. Planetas que um indiv�duo tenha em G�meos tendem a se manifestar de forma vers�til, plural ou inconstante. "<<endl;
		}
		
	}else if(mes==5){
		
		if(dia<=20 ){
			//gemeos
			cout <<"G�MEOS: As vibra��es mais altas de G�meos s�o a intelig�ncia, sociabilidade, comunicatividade, a curiosidade para aprender coisas novas e a flexibilidade para compreender outros pontos de vista. J� nas vibra��es mais baixas, h� a dispers�o, a fala em excesso e uma poss�vel superficialidade. Planetas que um indiv�duo tenha em G�meos tendem a se manifestar de forma vers�til, plural ou inconstante. "<<endl;
		}else if(dia >= 21){
			//cancer
			cout <<"C�NCER: As principais caracter�sticas de C�ncer s�o o fato de se tratar de um signo muito amoroso, protetor, simp�tico e receptivo. J� em suas vibra��es mais baixas, com as quais � interessante quem tem o sol nesse signo ter cuidado, s�o a instabilidade emocional, o apego ao passado e a depend�ncia em outras pessoas. Planetas em C�ncer tendem a se manifestar de forma afetiva, sens�vel e protetora."<<endl;
		}
		
	}else if(mes==6 ){
		if(dia<=22){
			//cancer
			cout <<"C�NCER: As principais caracter�sticas de C�ncer s�o o fato de se tratar de um signo muito amoroso, protetor, simp�tico e receptivo. J� em suas vibra��es mais baixas, com as quais � interessante quem tem o sol nesse signo ter cuidado, s�o a instabilidade emocional, o apego ao passado e a depend�ncia em outras pessoas. Planetas em C�ncer tendem a se manifestar de forma afetiva, sens�vel e protetora."<<endl;
		}else if(dia>=23 ){
			//leao
			cout <<"LE�O: As vibra��es mais altas de Le�o s�o a confian�a, entusiasmo, generosidade e a criatividade. As mais baixas, com as quais quem � de le�o tem que ter cuidado, s�o a arrog�ncia, o egocentrismo e a pregui�a. Planetas em Le�o tendem a se manifestar de forma criativa, ousada e dominadora."<<endl;
		}
		
	}else if(mes==7 ){
		if(dia<=22 ){
			//leao
			cout <<"LE�O: As vibra��es mais altas de Le�o s�o a confian�a, entusiasmo, generosidade e a criatividade. As mais baixas, com as quais quem � de le�o tem que ter cuidado, s�o a arrog�ncia, o egocentrismo e a pregui�a. Planetas em Le�o tendem a se manifestar de forma criativa, ousada e dominadora."<<endl;
		}else if(dia>=23 ){
			//virgem
			cout <<"VIRGEM: As principais caracter�sticas de Virgem s�o a incr�vel efici�ncia desse signo, al�m da praticidade, dedica��o, organiza��o e o fato de serem super observadores. J� as vibra��es mais baixas consistem no fato de os virginianos muitas vezes serem cr�ticos demais, n�o s� com os outros como consigo mesmos tamb�m. Planetas em Virgem tendem a se manifestar de forma anal�tica, pr�tica e organizada."<<endl;
		}
		
	}else if(mes==8 ){
		
		if(dia<=22 ){
			//virgem
			cout <<"VIRGEM: As principais caracter�sticas de Virgem s�o a incr�vel efici�ncia desse signo, al�m da praticidade, dedica��o, organiza��o e o fato de serem super observadores. J� as vibra��es mais baixas consistem no fato de os virginianos muitas vezes serem cr�ticos demais, n�o s� com os outros como consigo mesmos tamb�m. Planetas em Virgem tendem a se manifestar de forma anal�tica, pr�tica e organizada."<<endl;
		}else if(dia>=23 ){
			//libra
			cout <<"LIBRA: Quanto �s suas vibra��es mais altas, Libra � o signo mais diplom�tico do zod�aco, tendo a busca por equil�brio como caracter�stica evidente, al�m da sociabilidade e aprecia��o por arte e romance. Em suas vibra��es mais baixas, evidencia-se a indecis�o, por querer tanto considerar os dois lados que acaba n�o se decidindo. Planetas que um indiv�duo tenha em Libra tendem a se manifestar de forma harm�nica, e buscam parcerias e diplomacia."<<endl;
		}
		
	}else if(mes==9 ){
		
		if(dia<=22  ){
			//libra
			cout <<"LIBRA: Quanto �s suas vibra��es mais altas, Libra � o signo mais diplom�tico do zod�aco, tendo a busca por equil�brio como caracter�stica evidente, al�m da sociabilidade e aprecia��o por arte e romance. Em suas vibra��es mais baixas, evidencia-se a indecis�o, por querer tanto considerar os dois lados que acaba n�o se decidindo. Planetas que um indiv�duo tenha em Libra tendem a se manifestar de forma harm�nica, e buscam parcerias e diplomacia."<<endl;
		}else if(dia>=23 ){
			//escorpiao
			cout <<"ESCORPI�O: Sendo um signo bastante intenso e passional, Escorpi�o, em suas vibra��es mais altas, tem tudo para ser incrivelmente transformador, profundo, intuitivo, enigm�tico e curador. Quanto �s vibra��es mais baixas, quem tem o sol, ascendente ou muitos planetas neste signo pode acabar sendo muito possessivo, vingativo ou auto-destrutivo �s vezes. Planetas em Escorpi�o se manifestam possivelmente de forma intensa, poderosa, transformadora ou misteriosa."<<endl;
		}
		
	}else if(mes==10 ){
		
		if(dia<=21 ){
			//escorpiao
			cout <<"ESCORPI�O: Sendo um signo bastante intenso e passional, Escorpi�o, em suas vibra��es mais altas, tem tudo para ser incrivelmente transformador, profundo, intuitivo, enigm�tico e curador. Quanto �s vibra��es mais baixas, quem tem o sol, ascendente ou muitos planetas neste signo pode acabar sendo muito possessivo, vingativo ou auto-destrutivo �s vezes. Planetas em Escorpi�o se manifestam possivelmente de forma intensa, poderosa, transformadora ou misteriosa."<<endl;
		}else if(dia>=22 ){
			//sagitario
			cout <<"SAGIT�RIO: As vibra��es mais altas de Sagit�rio s�o a expans�o, sorte, otimismo, aventura e uma vis�o mais abrangente e filos�fica dos fatos. J� em suas vibra��es mais baixas, sagitarianos podem acabar sendo excessivos, grosseiros (na maneira de falar a �verdade�) e irrespons�veis, al�m de �s vezes acabarem sendo fan�ticos no que acreditam e seguem. Planetas em Sagit�rio se manifestam de forma expansiva, otimista e sincera."<<endl;
		}
		
	}else if(mes==11){
		
		if(dia<=21 ){
			//sagiario
			cout <<"SAGIT�RIO: As vibra��es mais altas de Sagit�rio s�o a expans�o, sorte, otimismo, aventura e uma vis�o mais abrangente e filos�fica dos fatos. J� em suas vibra��es mais baixas, sagitarianos podem acabar sendo excessivos, grosseiros (na maneira de falar a �verdade�) e irrespons�veis, al�m de �s vezes acabarem sendo fan�ticos no que acreditam e seguem. Planetas em Sagit�rio se manifestam de forma expansiva, otimista e sincera."<<endl;
		}else if(dia>=22 ){
			//capricornio
			cout <<"CAPRIC�RNIO: As vibra��es mais altas de Capric�rnio est�o ligadas � responsabilidade, ao foco, � organiza��o, � ambi��o e o fato de serem muito trabalhadores. J� as vibra��es mais baixas podem acabar sendo a rigidez excessiva, pessimismo e uma poss�vel avareza. Planetas que um indiv�duo tenha em Capric�rnio tendem a se manifestar de forma prudente, s�ria e disciplinada."<<endl;
		}
		
	}
	
}

void name(char frase[],char nome[]){ // pega a �ltima palavra da sente�a que tende a ser o nome da pessoa

	
    char *token;
    
    token = strtok(frase," ");
    
    while(token != NULL){
    	
    	
    	strcpy(nome,token);
    	token = strtok(NULL," ");
       		
		
	}
	
		
}

void signo(char frase[], char b[],int &c){ // procura o signo dentro da frase
	
	char *signo;
	
	char signos[12][20] = {
	    "aries",
	    "touro",
	    "gemeos",
		"cancer",
		"leao",
		"virgem",
		"libra",
		"escorpiao",
		"sagitario",
		"capricornio",
		"aquario",
		"peixes"
		
	};
	
	for(int i =0;i<12;i++){
		
		signo = strstr(frase,signos[i]);// verifica se o signo ta dentro da frase
		
		if(signo!= NULL){
			
			strcpy(b,signos[i]);// armazena dentro de um char o signo
			c=i;// armazena o indice
		}
		
	}
	
}

void escreversigno(int a){ // de acordo com o indice do signo armazenado anteriormente, escreve sua descri��o

	if(a==9 ){
		
		
		cout <<"CAPRIC�RNIO: As vibra��es mais altas de Capric�rnio est�o ligadas � responsabilidade, ao foco, � organiza��o, � ambi��o e o fato de serem muito trabalhadores. J� as vibra��es mais baixas podem acabar sendo a rigidez excessiva, pessimismo e uma poss�vel avareza. Planetas que um indiv�duo tenha em Capric�rnio tendem a se manifestar de forma prudente, s�ria e disciplinada."<<endl;
		
		
	}else if(a==10 ){
		
		cout <<"AQU�RIO: Aqu�rio � o signo cujas vibra��es mais altas s�o a criatividade, humanitarismo e o fato de serem verdadeiramente revolucion�rios e originais. J� as vibra��es mais baixas podem ser o excentrismo, rebeldia e racionalidade em excesso. Planetas que um indiv�duo tenha em Aqu�rio tendem a se manifestar de forma original, livre, imprevis�vel e revolucion�ria"<<endl;
		
	}else if(a==11){
		
		
		cout <<"PEIXES: Em suas vibra��es mais altas, Peixes tem tudo a ver com sonhos, arte, sensibilidade e espiritualidade. J� em suas vibra��es mais baixas, especialmente para aqueles que t�m o Sol em Peixes ou que t�m este signo forte no mapa, � poss�vel que haja uma dificuldade em manter os p�s no ch�o, uma instabilidade emocional e a busca por recursos de fuga da realidade. Planetas em Peixes tendem a se manifestar de forma m�stica, intuitiva, emp�tica ou fantasiosa. "<<endl;
				
	}else if(a==0 ){
		
			cout <<"�RIES: Sendo o primeiro do zod�aco, o signo de �ries representa fortemente novos in�cios, pioneirismo, coragem, empreendedorismo, energia, dinamismo e competitividade. Em suas vibra��es mais baixas, temos a impulsividade, ego�smo e a pressa. Planetas que um indiv�duo tenha nesse signo podem se manifestar de forma pioneira, corajosa ou imprudente."<< endl;
	
		
	}else if(a==1 ){
		
		cout <<"TOURO: As principais qualidades de Touro s�o a determina��o, estabilidade, perseveran�a, sensualidade e praticidade. � interessante ter um cuidado com a teimosia, pregui�a, possessividade ou materialismo. Planetas que um indiv�duo tenha em Touro se manifestam de forma est�vel ou at� mesmo um pouco mais lenta."<<endl;
		
	}else if(a==2 ){
		
		
		cout <<"G�MEOS: As vibra��es mais altas de G�meos s�o a intelig�ncia, sociabilidade, comunicatividade, a curiosidade para aprender coisas novas e a flexibilidade para compreender outros pontos de vista. J� nas vibra��es mais baixas, h� a dispers�o, a fala em excesso e uma poss�vel superficialidade. Planetas que um indiv�duo tenha em G�meos tendem a se manifestar de forma vers�til, plural ou inconstante. "<<endl;
		
		
	}else if(a==3 ){
		
		
	cout <<"C�NCER: As principais caracter�sticas de C�ncer s�o o fato de se tratar de um signo muito amoroso, protetor, simp�tico e receptivo. J� em suas vibra��es mais baixas, com as quais � interessante quem tem o sol nesse signo ter cuidado, s�o a instabilidade emocional, o apego ao passado e a depend�ncia em outras pessoas. Planetas em C�ncer tendem a se manifestar de forma afetiva, sens�vel e protetora."<<endl;
	
	}else if(a==4 ){
		
	cout <<"LE�O: As vibra��es mais altas de Le�o s�o a confian�a, entusiasmo, generosidade e a criatividade. As mais baixas, com as quais quem � de le�o tem que ter cuidado, s�o a arrog�ncia, o egocentrismo e a pregui�a. Planetas em Le�o tendem a se manifestar de forma criativa, ousada e dominadora."<<endl;
		
		
	}else if(a==5 ){
		
		cout <<"VIRGEM: As principais caracter�sticas de Virgem s�o a incr�vel efici�ncia desse signo, al�m da praticidade, dedica��o, organiza��o e o fato de serem super observadores. J� as vibra��es mais baixas consistem no fato de os virginianos muitas vezes serem cr�ticos demais, n�o s� com os outros como consigo mesmos tamb�m. Planetas em Virgem tendem a se manifestar de forma anal�tica, pr�tica e organizada."<<endl;	
	
		
	}else if(a==6 ){
		
		cout <<"LIBRA: Quanto �s suas vibra��es mais altas, Libra � o signo mais diplom�tico do zod�aco, tendo a busca por equil�brio como caracter�stica evidente, al�m da sociabilidade e aprecia��o por arte e romance. Em suas vibra��es mais baixas, evidencia-se a indecis�o, por querer tanto considerar os dois lados que acaba n�o se decidindo. Planetas que um indiv�duo tenha em Libra tendem a se manifestar de forma harm�nica, e buscam parcerias e diplomacia."<<endl;
		
		
	}else if(a==7 ){
		
		cout <<"ESCORPI�O: Sendo um signo bastante intenso e passional, Escorpi�o, em suas vibra��es mais altas, tem tudo para ser incrivelmente transformador, profundo, intuitivo, enigm�tico e curador. Quanto �s vibra��es mais baixas, quem tem o sol, ascendente ou muitos planetas neste signo pode acabar sendo muito possessivo, vingativo ou auto-destrutivo �s vezes. Planetas em Escorpi�o se manifestam possivelmente de forma intensa, poderosa, transformadora ou misteriosa."<<endl;
		
	}else if(a==8 ){
		
			cout <<"SAGIT�RIO: As vibra��es mais altas de Sagit�rio s�o a expans�o, sorte, otimismo, aventura e uma vis�o mais abrangente e filos�fica dos fatos. J� em suas vibra��es mais baixas, sagitarianos podem acabar sendo excessivos, grosseiros (na maneira de falar a �verdade�) e irrespons�veis, al�m de �s vezes acabarem sendo fan�ticos no que acreditam e seguem. Planetas em Sagit�rio se manifestam de forma expansiva, otimista e sincera."<<endl;			
		
	}


}	


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char saudacao [3][100] = {
		"Ol�, eu sou o XR8. Meu hobby � falar sobre signos do zod�aco. Qual � o seu nome?",
		
		"Bom dia, me chamo XR8. Eu sei falar sobre signos do zod�aco. Qual � o seu nome?",
		
		"Ol�, meu nome � XR8. Eu sei falar sobre signos do zod�aco.Qual � o seu nome?"
	
	};
	
	char despedida[3][20]= {
		"At� logo!",
		"Tchau!",
		"At� mais!"
	};
	
		
	char frase[101];
	char sig[31];
	int dia=0,nmes=-1,nsig=-1;
	char mes[21];
	
	char nome[30];
	char *final;
	int cont=0;
	
	
	srand (time(NULL));
		
    cout << saudacao[rand()%3]<< endl;
    
    cin.getline(frase,100);
    
    name(frase,nome);
    
    nome[0] = toupper(nome[0]); // coloca a primeira letra do nome em maiusculo
      
    cout  << "Ol� "<< nome <<".";
    
	
	
	while(true){
		
				
		cout<<"Me fale um signo ou um m�s do ano." <<endl;
				
		cin.getline(frase,101);
		
		minuscula(frase);
		
		final= strstr(frase,"tchau");// procura a palavra tchau dentro da frase
		
		if(final!=NULL){
			cont++;// se tiver conta 1
		}
		
				
		findmes(frase,mes,nmes);
		
		signo(frase, sig,nsig);
		
				
				
		if(nmes!=-1){ // se na frase tiver um mes , executa esse bloco
			
									
			cout<<"Me fale um dia " << endl;
			
			cin>>dia;
			
			finddia(nmes, dia,mes);
							
			findsigno(nmes ,dia);
			
		    nmes=-1;
		    
		    cin.ignore();
			
		}else if(nsig!=-1){ // se na frase tiver um signo, executa esse bloco
			
			escreversigno(nsig);
			
			nsig=-1;
			
							
		}else if(cont==1){ // se tiver a palavra tchau, executa a despedida e sai do loop
			cont=0;
			
			srand (time(NULL));
			
    		cout << despedida[rand()%3]<< endl;
			
			return false;
			
		}
		
	
		
		cout<< endl;
			
			
		
	}
	
	return 0;
}


