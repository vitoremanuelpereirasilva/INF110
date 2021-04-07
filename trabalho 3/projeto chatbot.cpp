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

void findmes(char sentece[],char b[],int &a){ // procura dentro da frase qual o mês e armazena esse valor
	
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
		
		mes = strstr(sentece,meses[i]); // acha o mês dentro da frase
		
		if(mes!= NULL){
			
			strcpy(b,meses[i]);// armazena dentro de um char
			a=i;// armazena o indice o mês
		}
		
	}
	
		
}
void finddia(int nmes, int &dia,char mes[]){ // verifica se o dia está certo ou é um dia inválido
	
	if(nmes==0||nmes==2||nmes==4||nmes==6||nmes==7||nmes==9||nmes==11){
		
		while( dia <1 || dia >32){
			cout<< mes <<" não tem "<< dia << " dias. Me fale um dia válido" <<  endl;
			cin>>dia;
			
		}
		
	}else if(nmes==3||nmes==8||nmes==10||nmes==5){
		
		while( dia <1 || dia >31){
			cout<< mes <<" não tem "<< dia << " dias. Me fale um dia válido" <<  endl;
			cin>>dia;
			
		}
	}else if(nmes==1){
		
		while( dia <1 || dia >29){
			cout<< mes <<" não tem "<< dia << " dias. Me fale um dia válido" <<  endl;
			cin>>dia;
			
		}
		
	}
		
	
		
		
}

void findsigno(int mes,int dia){ // de acordo com o mês e o dia, achar qual é o signo da pessoa e escreve a descrição
	//Áries: de 21 março a 20 abril
	//Touro: de 21 abril a 20 maio
    //Gêmeos: de 21 maio a 20 junho
	//Câncer: de 21 junho a 22 julho
	//Leão: de 23 julho a 22 agosto
	//Virgem: de 23 agosto a 22 setembro
	//Libra: de 23 setembro a 22 outubro
	//Escorpião: de 23 outubro a 21 novembro
	//Sagitário: de 22 novembro a 21 dezembro
	//Capricórnio: de 22 dezembro a 20 janeiro
	//Aquário: de 21 janeiro a 18 fevereiro
	//Peixes: de 19 fevereiro a 20 março
	
	if(mes==0 ){
		
		if(dia<=20 ){
			//capricornio
			cout <<"CAPRICÓRNIO: As vibrações mais altas de Capricórnio estão ligadas à responsabilidade, ao foco, à organização, à ambição e o fato de serem muito trabalhadores. Já as vibrações mais baixas podem acabar sendo a rigidez excessiva, pessimismo e uma possível avareza. Planetas que um indivíduo tenha em Capricórnio tendem a se manifestar de forma prudente, séria e disciplinada."<<endl;
		}else if(dia>=21 ){
			//aquario
			cout <<"AQUÁRIO: Aquário é o signo cujas vibrações mais altas são a criatividade, humanitarismo e o fato de serem verdadeiramente revolucionários e originais. Já as vibrações mais baixas podem ser o excentrismo, rebeldia e racionalidade em excesso. Planetas que um indivíduo tenha em Aquário tendem a se manifestar de forma original, livre, imprevisível e revolucionária"<<endl;
		}
		
	}else if(mes==1 ){
		
		if(dia<=18){
			//aquario
			cout <<"AQUÁRIO: Aquário é o signo cujas vibrações mais altas são a criatividade, humanitarismo e o fato de serem verdadeiramente revolucionários e originais. Já as vibrações mais baixas podem ser o excentrismo, rebeldia e racionalidade em excesso. Planetas que um indivíduo tenha em Aquário tendem a se manifestar de forma original, livre, imprevisível e revolucionária"<<endl;
		}else if(dia >= 19){
			//peixes
			cout <<"PEIXES: Em suas vibrações mais altas, Peixes tem tudo a ver com sonhos, arte, sensibilidade e espiritualidade. Já em suas vibrações mais baixas, especialmente para aqueles que têm o Sol em Peixes ou que têm este signo forte no mapa, é possível que haja uma dificuldade em manter os pés no chão, uma instabilidade emocional e a busca por recursos de fuga da realidade. Planetas em Peixes tendem a se manifestar de forma mística, intuitiva, empática ou fantasiosa. "<<endl;
		}
		
	}else if(mes==2 ){
		
		if(dia<=20 ){
			//peixes
			cout <<"PEIXES: Em suas vibrações mais altas, Peixes tem tudo a ver com sonhos, arte, sensibilidade e espiritualidade. Já em suas vibrações mais baixas, especialmente para aqueles que têm o Sol em Peixes ou que têm este signo forte no mapa, é possível que haja uma dificuldade em manter os pés no chão, uma instabilidade emocional e a busca por recursos de fuga da realidade. Planetas em Peixes tendem a se manifestar de forma mística, intuitiva, empática ou fantasiosa. "<<endl;
		}else if( dia >=21 ){
			//aries
			cout <<"ÁRIES: Sendo o primeiro do zodíaco, o signo de Áries representa fortemente novos inícios, pioneirismo, coragem, empreendedorismo, energia, dinamismo e competitividade. Em suas vibrações mais baixas, temos a impulsividade, egoísmo e a pressa. Planetas que um indivíduo tenha nesse signo podem se manifestar de forma pioneira, corajosa ou imprudente."<< endl;
		}		
	}else if(mes==3 ){
		
		if(dia<=20 ){
			//aries
			cout <<"ÁRIES: Sendo o primeiro do zodíaco, o signo de Áries representa fortemente novos inícios, pioneirismo, coragem, empreendedorismo, energia, dinamismo e competitividade. Em suas vibrações mais baixas, temos a impulsividade, egoísmo e a pressa. Planetas que um indivíduo tenha nesse signo podem se manifestar de forma pioneira, corajosa ou imprudente."<< endl;
		}else if(dia >=21 ){
			//touro
			cout <<"TOURO: As principais qualidades de Touro são a determinação, estabilidade, perseverança, sensualidade e praticidade. É interessante ter um cuidado com a teimosia, preguiça, possessividade ou materialismo. Planetas que um indivíduo tenha em Touro se manifestam de forma estável ou até mesmo um pouco mais lenta."<<endl;
		}
		
	}else if(mes==4 ){
		
		if(dia<=21 ){
			//touro
			cout <<"TOURO: As principais qualidades de Touro são a determinação, estabilidade, perseverança, sensualidade e praticidade. É interessante ter um cuidado com a teimosia, preguiça, possessividade ou materialismo. Planetas que um indivíduo tenha em Touro se manifestam de forma estável ou até mesmo um pouco mais lenta."<<endl;
		}else if(dia >=22 ){
			//gemeos
			cout <<"GÊMEOS: As vibrações mais altas de Gêmeos são a inteligência, sociabilidade, comunicatividade, a curiosidade para aprender coisas novas e a flexibilidade para compreender outros pontos de vista. Já nas vibrações mais baixas, há a dispersão, a fala em excesso e uma possível superficialidade. Planetas que um indivíduo tenha em Gêmeos tendem a se manifestar de forma versátil, plural ou inconstante. "<<endl;
		}
		
	}else if(mes==5){
		
		if(dia<=20 ){
			//gemeos
			cout <<"GÊMEOS: As vibrações mais altas de Gêmeos são a inteligência, sociabilidade, comunicatividade, a curiosidade para aprender coisas novas e a flexibilidade para compreender outros pontos de vista. Já nas vibrações mais baixas, há a dispersão, a fala em excesso e uma possível superficialidade. Planetas que um indivíduo tenha em Gêmeos tendem a se manifestar de forma versátil, plural ou inconstante. "<<endl;
		}else if(dia >= 21){
			//cancer
			cout <<"CÂNCER: As principais características de Câncer são o fato de se tratar de um signo muito amoroso, protetor, simpático e receptivo. Já em suas vibrações mais baixas, com as quais é interessante quem tem o sol nesse signo ter cuidado, são a instabilidade emocional, o apego ao passado e a dependência em outras pessoas. Planetas em Câncer tendem a se manifestar de forma afetiva, sensível e protetora."<<endl;
		}
		
	}else if(mes==6 ){
		if(dia<=22){
			//cancer
			cout <<"CÂNCER: As principais características de Câncer são o fato de se tratar de um signo muito amoroso, protetor, simpático e receptivo. Já em suas vibrações mais baixas, com as quais é interessante quem tem o sol nesse signo ter cuidado, são a instabilidade emocional, o apego ao passado e a dependência em outras pessoas. Planetas em Câncer tendem a se manifestar de forma afetiva, sensível e protetora."<<endl;
		}else if(dia>=23 ){
			//leao
			cout <<"LEÃO: As vibrações mais altas de Leão são a confiança, entusiasmo, generosidade e a criatividade. As mais baixas, com as quais quem é de leão tem que ter cuidado, são a arrogância, o egocentrismo e a preguiça. Planetas em Leão tendem a se manifestar de forma criativa, ousada e dominadora."<<endl;
		}
		
	}else if(mes==7 ){
		if(dia<=22 ){
			//leao
			cout <<"LEÃO: As vibrações mais altas de Leão são a confiança, entusiasmo, generosidade e a criatividade. As mais baixas, com as quais quem é de leão tem que ter cuidado, são a arrogância, o egocentrismo e a preguiça. Planetas em Leão tendem a se manifestar de forma criativa, ousada e dominadora."<<endl;
		}else if(dia>=23 ){
			//virgem
			cout <<"VIRGEM: As principais características de Virgem são a incrível eficiência desse signo, além da praticidade, dedicação, organização e o fato de serem super observadores. Já as vibrações mais baixas consistem no fato de os virginianos muitas vezes serem críticos demais, não só com os outros como consigo mesmos também. Planetas em Virgem tendem a se manifestar de forma analítica, prática e organizada."<<endl;
		}
		
	}else if(mes==8 ){
		
		if(dia<=22 ){
			//virgem
			cout <<"VIRGEM: As principais características de Virgem são a incrível eficiência desse signo, além da praticidade, dedicação, organização e o fato de serem super observadores. Já as vibrações mais baixas consistem no fato de os virginianos muitas vezes serem críticos demais, não só com os outros como consigo mesmos também. Planetas em Virgem tendem a se manifestar de forma analítica, prática e organizada."<<endl;
		}else if(dia>=23 ){
			//libra
			cout <<"LIBRA: Quanto às suas vibrações mais altas, Libra é o signo mais diplomático do zodíaco, tendo a busca por equilíbrio como característica evidente, além da sociabilidade e apreciação por arte e romance. Em suas vibrações mais baixas, evidencia-se a indecisão, por querer tanto considerar os dois lados que acaba não se decidindo. Planetas que um indivíduo tenha em Libra tendem a se manifestar de forma harmônica, e buscam parcerias e diplomacia."<<endl;
		}
		
	}else if(mes==9 ){
		
		if(dia<=22  ){
			//libra
			cout <<"LIBRA: Quanto às suas vibrações mais altas, Libra é o signo mais diplomático do zodíaco, tendo a busca por equilíbrio como característica evidente, além da sociabilidade e apreciação por arte e romance. Em suas vibrações mais baixas, evidencia-se a indecisão, por querer tanto considerar os dois lados que acaba não se decidindo. Planetas que um indivíduo tenha em Libra tendem a se manifestar de forma harmônica, e buscam parcerias e diplomacia."<<endl;
		}else if(dia>=23 ){
			//escorpiao
			cout <<"ESCORPIÃO: Sendo um signo bastante intenso e passional, Escorpião, em suas vibrações mais altas, tem tudo para ser incrivelmente transformador, profundo, intuitivo, enigmático e curador. Quanto às vibrações mais baixas, quem tem o sol, ascendente ou muitos planetas neste signo pode acabar sendo muito possessivo, vingativo ou auto-destrutivo às vezes. Planetas em Escorpião se manifestam possivelmente de forma intensa, poderosa, transformadora ou misteriosa."<<endl;
		}
		
	}else if(mes==10 ){
		
		if(dia<=21 ){
			//escorpiao
			cout <<"ESCORPIÃO: Sendo um signo bastante intenso e passional, Escorpião, em suas vibrações mais altas, tem tudo para ser incrivelmente transformador, profundo, intuitivo, enigmático e curador. Quanto às vibrações mais baixas, quem tem o sol, ascendente ou muitos planetas neste signo pode acabar sendo muito possessivo, vingativo ou auto-destrutivo às vezes. Planetas em Escorpião se manifestam possivelmente de forma intensa, poderosa, transformadora ou misteriosa."<<endl;
		}else if(dia>=22 ){
			//sagitario
			cout <<"SAGITÁRIO: As vibrações mais altas de Sagitário são a expansão, sorte, otimismo, aventura e uma visão mais abrangente e filosófica dos fatos. Já em suas vibrações mais baixas, sagitarianos podem acabar sendo excessivos, grosseiros (na maneira de falar a “verdade”) e irresponsáveis, além de às vezes acabarem sendo fanáticos no que acreditam e seguem. Planetas em Sagitário se manifestam de forma expansiva, otimista e sincera."<<endl;
		}
		
	}else if(mes==11){
		
		if(dia<=21 ){
			//sagiario
			cout <<"SAGITÁRIO: As vibrações mais altas de Sagitário são a expansão, sorte, otimismo, aventura e uma visão mais abrangente e filosófica dos fatos. Já em suas vibrações mais baixas, sagitarianos podem acabar sendo excessivos, grosseiros (na maneira de falar a “verdade”) e irresponsáveis, além de às vezes acabarem sendo fanáticos no que acreditam e seguem. Planetas em Sagitário se manifestam de forma expansiva, otimista e sincera."<<endl;
		}else if(dia>=22 ){
			//capricornio
			cout <<"CAPRICÓRNIO: As vibrações mais altas de Capricórnio estão ligadas à responsabilidade, ao foco, à organização, à ambição e o fato de serem muito trabalhadores. Já as vibrações mais baixas podem acabar sendo a rigidez excessiva, pessimismo e uma possível avareza. Planetas que um indivíduo tenha em Capricórnio tendem a se manifestar de forma prudente, séria e disciplinada."<<endl;
		}
		
	}
	
}

void name(char frase[],char nome[]){ // pega a última palavra da senteça que tende a ser o nome da pessoa

	
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

void escreversigno(int a){ // de acordo com o indice do signo armazenado anteriormente, escreve sua descrição

	if(a==9 ){
		
		
		cout <<"CAPRICÓRNIO: As vibrações mais altas de Capricórnio estão ligadas à responsabilidade, ao foco, à organização, à ambição e o fato de serem muito trabalhadores. Já as vibrações mais baixas podem acabar sendo a rigidez excessiva, pessimismo e uma possível avareza. Planetas que um indivíduo tenha em Capricórnio tendem a se manifestar de forma prudente, séria e disciplinada."<<endl;
		
		
	}else if(a==10 ){
		
		cout <<"AQUÁRIO: Aquário é o signo cujas vibrações mais altas são a criatividade, humanitarismo e o fato de serem verdadeiramente revolucionários e originais. Já as vibrações mais baixas podem ser o excentrismo, rebeldia e racionalidade em excesso. Planetas que um indivíduo tenha em Aquário tendem a se manifestar de forma original, livre, imprevisível e revolucionária"<<endl;
		
	}else if(a==11){
		
		
		cout <<"PEIXES: Em suas vibrações mais altas, Peixes tem tudo a ver com sonhos, arte, sensibilidade e espiritualidade. Já em suas vibrações mais baixas, especialmente para aqueles que têm o Sol em Peixes ou que têm este signo forte no mapa, é possível que haja uma dificuldade em manter os pés no chão, uma instabilidade emocional e a busca por recursos de fuga da realidade. Planetas em Peixes tendem a se manifestar de forma mística, intuitiva, empática ou fantasiosa. "<<endl;
				
	}else if(a==0 ){
		
			cout <<"ÁRIES: Sendo o primeiro do zodíaco, o signo de Áries representa fortemente novos inícios, pioneirismo, coragem, empreendedorismo, energia, dinamismo e competitividade. Em suas vibrações mais baixas, temos a impulsividade, egoísmo e a pressa. Planetas que um indivíduo tenha nesse signo podem se manifestar de forma pioneira, corajosa ou imprudente."<< endl;
	
		
	}else if(a==1 ){
		
		cout <<"TOURO: As principais qualidades de Touro são a determinação, estabilidade, perseverança, sensualidade e praticidade. É interessante ter um cuidado com a teimosia, preguiça, possessividade ou materialismo. Planetas que um indivíduo tenha em Touro se manifestam de forma estável ou até mesmo um pouco mais lenta."<<endl;
		
	}else if(a==2 ){
		
		
		cout <<"GÊMEOS: As vibrações mais altas de Gêmeos são a inteligência, sociabilidade, comunicatividade, a curiosidade para aprender coisas novas e a flexibilidade para compreender outros pontos de vista. Já nas vibrações mais baixas, há a dispersão, a fala em excesso e uma possível superficialidade. Planetas que um indivíduo tenha em Gêmeos tendem a se manifestar de forma versátil, plural ou inconstante. "<<endl;
		
		
	}else if(a==3 ){
		
		
	cout <<"CÂNCER: As principais características de Câncer são o fato de se tratar de um signo muito amoroso, protetor, simpático e receptivo. Já em suas vibrações mais baixas, com as quais é interessante quem tem o sol nesse signo ter cuidado, são a instabilidade emocional, o apego ao passado e a dependência em outras pessoas. Planetas em Câncer tendem a se manifestar de forma afetiva, sensível e protetora."<<endl;
	
	}else if(a==4 ){
		
	cout <<"LEÃO: As vibrações mais altas de Leão são a confiança, entusiasmo, generosidade e a criatividade. As mais baixas, com as quais quem é de leão tem que ter cuidado, são a arrogância, o egocentrismo e a preguiça. Planetas em Leão tendem a se manifestar de forma criativa, ousada e dominadora."<<endl;
		
		
	}else if(a==5 ){
		
		cout <<"VIRGEM: As principais características de Virgem são a incrível eficiência desse signo, além da praticidade, dedicação, organização e o fato de serem super observadores. Já as vibrações mais baixas consistem no fato de os virginianos muitas vezes serem críticos demais, não só com os outros como consigo mesmos também. Planetas em Virgem tendem a se manifestar de forma analítica, prática e organizada."<<endl;	
	
		
	}else if(a==6 ){
		
		cout <<"LIBRA: Quanto às suas vibrações mais altas, Libra é o signo mais diplomático do zodíaco, tendo a busca por equilíbrio como característica evidente, além da sociabilidade e apreciação por arte e romance. Em suas vibrações mais baixas, evidencia-se a indecisão, por querer tanto considerar os dois lados que acaba não se decidindo. Planetas que um indivíduo tenha em Libra tendem a se manifestar de forma harmônica, e buscam parcerias e diplomacia."<<endl;
		
		
	}else if(a==7 ){
		
		cout <<"ESCORPIÃO: Sendo um signo bastante intenso e passional, Escorpião, em suas vibrações mais altas, tem tudo para ser incrivelmente transformador, profundo, intuitivo, enigmático e curador. Quanto às vibrações mais baixas, quem tem o sol, ascendente ou muitos planetas neste signo pode acabar sendo muito possessivo, vingativo ou auto-destrutivo às vezes. Planetas em Escorpião se manifestam possivelmente de forma intensa, poderosa, transformadora ou misteriosa."<<endl;
		
	}else if(a==8 ){
		
			cout <<"SAGITÁRIO: As vibrações mais altas de Sagitário são a expansão, sorte, otimismo, aventura e uma visão mais abrangente e filosófica dos fatos. Já em suas vibrações mais baixas, sagitarianos podem acabar sendo excessivos, grosseiros (na maneira de falar a “verdade”) e irresponsáveis, além de às vezes acabarem sendo fanáticos no que acreditam e seguem. Planetas em Sagitário se manifestam de forma expansiva, otimista e sincera."<<endl;			
		
	}


}	


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char saudacao [3][100] = {
		"Olá, eu sou o XR8. Meu hobby é falar sobre signos do zodíaco. Qual é o seu nome?",
		
		"Bom dia, me chamo XR8. Eu sei falar sobre signos do zodíaco. Qual é o seu nome?",
		
		"Olá, meu nome é XR8. Eu sei falar sobre signos do zodíaco.Qual é o seu nome?"
	
	};
	
	char despedida[3][20]= {
		"Até logo!",
		"Tchau!",
		"Até mais!"
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
      
    cout  << "Olá "<< nome <<".";
    
	
	
	while(true){
		
				
		cout<<"Me fale um signo ou um mês do ano." <<endl;
				
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


