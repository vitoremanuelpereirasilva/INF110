//chatbot de signo
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<clocale>
#include<cctype>
using namespace std;

void minuscula(char a[]){
	
	for(int i=0;a[i]!='\0';i++){
		a[i] = tolower(a[i]);
	}
	
}

bool temmes(char sentece[]){
	
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
		
		mes = strstr(sentece,meses[i]);
		
		if(mes!= NULL){
			
			return 1;
		}else{
			return 0;
		}
		
	}
	
	
}

void findmes(char sentece[],char b[]){
	
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
		
		mes = strstr(sentece,meses[i]);
		
		if(mes!= NULL){
			
			strcpy(b,meses[i]);
		}
		
	}
	
		
}

void finddia(char mes[], int &dia){
	
	if(mes=="janeiro"||mes=="marco"||mes=="maio"||mes=="julho"||mes=="agosto"||mes=="outubro"||mes=="dezembro"){
		
		while( dia <1 || dia >32){
			cout<< mes <<" não tem "<< dia << " dias. Me fale um dia válido" <<  endl;
			cin>>dia;
			
		}
		
	}else if(mes=="abril"||mes=="setembro"||mes=="novembro"||mes=="junho"){
		
		while( dia <1 || dia >31){
			cout<< mes <<" não tem "<< dia << " dias. Me fale um dia válido" <<  endl;
			cin>>dia;
			
		}
	}else if(mes=="fevereiro"){
		
		while( dia <1 || dia >29){
			cout<< mes <<" não tem "<< dia << " dias. Me fale um dia válido" <<  endl;
			cin>>dia;
		
		}
		
	}
		
}

void signo(char sentece[], char b[]){
	
	char *signo;
	
	char signos[12][20] = {
	    "áries",
	    "touro",
	    "gêmeos",
		"câncer",
		"leão",
		"virgem",
		"libra",
		"escorpião",
		"sagitário",
		"capricórnio",
		"aquário",
		"peixes"
		
	};
	
	for(int i =0;i<12;i++){
		
		signo = strstr(sentece,signos[i]);
		
		if(signo!= NULL){
			
			strcpy(b,signos[i]);
		}
		
	}
	
}

bool temsigno(char sentece[]){
	
	char *signo;
	
	char signos[12][20] = {
	    "áries",
	    "touro",
	    "gêmeos",
		"câncer",
		"leão",
		"virgem",
		"libra",
		"escorpião",
		"sagitário",
		"capricórnio",
		"aquário",
		"peixes"
		
	};
	
	for(int i =0;i<12;i++){
		
		signo = strstr(sentece,signos[i]);
		
		if(signo!= NULL){
			
			return 1;
		}else{
			return 0;
		}
		
	}
	
}
	
void findsigno(char mes [],int dia){
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
	
	if(mes=="janeiro" ){
		
		if(dia<=20 ){
			//capricornio
			cout <<"CAPRICÓRNIO: As vibrações mais altas de Capricórnio estão ligadas à responsabilidade, ao foco, à organização, à ambição e o fato de serem muito trabalhadores. Já as vibrações mais baixas podem acabar sendo a rigidez excessiva, pessimismo e uma possível avareza. Planetas que um indivíduo tenha em Capricórnio tendem a se manifestar de forma prudente, séria e disciplinada."<<endl;
		}else if(dia>=21 ){
			//aquario
			cout <<"AQUÁRIO: Aquário é o signo cujas vibrações mais altas são a criatividade, humanitarismo e o fato de serem verdadeiramente revolucionários e originais. Já as vibrações mais baixas podem ser o excentrismo, rebeldia e racionalidade em excesso. Planetas que um indivíduo tenha em Aquário tendem a se manifestar de forma original, livre, imprevisível e revolucionária"<<endl;
		}
		
	}else if(mes=="fevereiro" ){
		
		if(dia<=18){
			//aquario
			cout <<"AQUÁRIO: Aquário é o signo cujas vibrações mais altas são a criatividade, humanitarismo e o fato de serem verdadeiramente revolucionários e originais. Já as vibrações mais baixas podem ser o excentrismo, rebeldia e racionalidade em excesso. Planetas que um indivíduo tenha em Aquário tendem a se manifestar de forma original, livre, imprevisível e revolucionária"<<endl;
		}else if(dia >= 19){
			//peixes
			cout <<"PEIXES: Em suas vibrações mais altas, Peixes tem tudo a ver com sonhos, arte, sensibilidade e espiritualidade. Já em suas vibrações mais baixas, especialmente para aqueles que têm o Sol em Peixes ou que têm este signo forte no mapa, é possível que haja uma dificuldade em manter os pés no chão, uma instabilidade emocional e a busca por recursos de fuga da realidade. Planetas em Peixes tendem a se manifestar de forma mística, intuitiva, empática ou fantasiosa. "<<endl;
		}
		
	}else if(mes=="marco" ){
		
		if(dia<=20 ){
			//peixes
			cout <<"PEIXES: Em suas vibrações mais altas, Peixes tem tudo a ver com sonhos, arte, sensibilidade e espiritualidade. Já em suas vibrações mais baixas, especialmente para aqueles que têm o Sol em Peixes ou que têm este signo forte no mapa, é possível que haja uma dificuldade em manter os pés no chão, uma instabilidade emocional e a busca por recursos de fuga da realidade. Planetas em Peixes tendem a se manifestar de forma mística, intuitiva, empática ou fantasiosa. "<<endl;
		}else if( dia >=21 ){
			//aries
			cout <<"ÁRIES: Sendo o primeiro do zodíaco, o signo de Áries representa fortemente novos inícios, pioneirismo, coragem, empreendedorismo, energia, dinamismo e competitividade. Em suas vibrações mais baixas, temos a impulsividade, egoísmo e a pressa. Planetas que um indivíduo tenha nesse signo podem se manifestar de forma pioneira, corajosa ou imprudente."<< endl;
		}		
	}else if(mes=="abril" ){
		
		if(dia<=20 ){
			//aries
			cout <<"ÁRIES: Sendo o primeiro do zodíaco, o signo de Áries representa fortemente novos inícios, pioneirismo, coragem, empreendedorismo, energia, dinamismo e competitividade. Em suas vibrações mais baixas, temos a impulsividade, egoísmo e a pressa. Planetas que um indivíduo tenha nesse signo podem se manifestar de forma pioneira, corajosa ou imprudente."<< endl;
		}else if(dia >=21 ){
			//touro
			cout <<"TOURO: As principais qualidades de Touro são a determinação, estabilidade, perseverança, sensualidade e praticidade. É interessante ter um cuidado com a teimosia, preguiça, possessividade ou materialismo. Planetas que um indivíduo tenha em Touro se manifestam de forma estável ou até mesmo um pouco mais lenta."<<endl;
		}
		
	}else if(mes=="maio" ){
		
		if(dia<=21 ){
			//touro
			cout <<"TOURO: As principais qualidades de Touro são a determinação, estabilidade, perseverança, sensualidade e praticidade. É interessante ter um cuidado com a teimosia, preguiça, possessividade ou materialismo. Planetas que um indivíduo tenha em Touro se manifestam de forma estável ou até mesmo um pouco mais lenta."<<endl;
		}else if(dia >=22 ){
			//gemeos
			cout <<"GÊMEOS: As vibrações mais altas de Gêmeos são a inteligência, sociabilidade, comunicatividade, a curiosidade para aprender coisas novas e a flexibilidade para compreender outros pontos de vista. Já nas vibrações mais baixas, há a dispersão, a fala em excesso e uma possível superficialidade. Planetas que um indivíduo tenha em Gêmeos tendem a se manifestar de forma versátil, plural ou inconstante. "<<endl;
		}
		
	}else if(mes=="junho" ){
		
		if(dia<=20 ){
			//gemeos
			cout <<"GÊMEOS: As vibrações mais altas de Gêmeos são a inteligência, sociabilidade, comunicatividade, a curiosidade para aprender coisas novas e a flexibilidade para compreender outros pontos de vista. Já nas vibrações mais baixas, há a dispersão, a fala em excesso e uma possível superficialidade. Planetas que um indivíduo tenha em Gêmeos tendem a se manifestar de forma versátil, plural ou inconstante. "<<endl;
		}else if(dia >= 21){
			//cancer
			cout <<"CÂNCER: As principais características de Câncer são o fato de se tratar de um signo muito amoroso, protetor, simpático e receptivo. Já em suas vibrações mais baixas, com as quais é interessante quem tem o sol nesse signo ter cuidado, são a instabilidade emocional, o apego ao passado e a dependência em outras pessoas. Planetas em Câncer tendem a se manifestar de forma afetiva, sensível e protetora."<<endl;
		}
		
	}else if(mes=="julho" ){
		if(dia<=22){
			//cancer
			cout <<"CÂNCER: As principais características de Câncer são o fato de se tratar de um signo muito amoroso, protetor, simpático e receptivo. Já em suas vibrações mais baixas, com as quais é interessante quem tem o sol nesse signo ter cuidado, são a instabilidade emocional, o apego ao passado e a dependência em outras pessoas. Planetas em Câncer tendem a se manifestar de forma afetiva, sensível e protetora."<<endl;
		}else if(dia>=23 ){
			//leao
			cout <<"LEÃO: As vibrações mais altas de Leão são a confiança, entusiasmo, generosidade e a criatividade. As mais baixas, com as quais quem é de leão tem que ter cuidado, são a arrogância, o egocentrismo e a preguiça. Planetas em Leão tendem a se manifestar de forma criativa, ousada e dominadora."<<endl;
		}
		
	}else if(mes=="agosto" ){
		if(dia<=22 ){
			//leao
			cout <<"LEÃO: As vibrações mais altas de Leão são a confiança, entusiasmo, generosidade e a criatividade. As mais baixas, com as quais quem é de leão tem que ter cuidado, são a arrogância, o egocentrismo e a preguiça. Planetas em Leão tendem a se manifestar de forma criativa, ousada e dominadora."<<endl;
		}else if(dia>=23 ){
			//virgem
			cout <<"VIRGEM: As principais características de Virgem são a incrível eficiência desse signo, além da praticidade, dedicação, organização e o fato de serem super observadores. Já as vibrações mais baixas consistem no fato de os virginianos muitas vezes serem críticos demais, não só com os outros como consigo mesmos também. Planetas em Virgem tendem a se manifestar de forma analítica, prática e organizada."<<endl;
		}
		
	}else if(mes=="setembro" ){
		
		if(dia<=22 ){
			//virgem
			cout <<"VIRGEM: As principais características de Virgem são a incrível eficiência desse signo, além da praticidade, dedicação, organização e o fato de serem super observadores. Já as vibrações mais baixas consistem no fato de os virginianos muitas vezes serem críticos demais, não só com os outros como consigo mesmos também. Planetas em Virgem tendem a se manifestar de forma analítica, prática e organizada."<<endl;
		}else if(dia>=23 ){
			//libra
			cout <<"LIBRA: Quanto às suas vibrações mais altas, Libra é o signo mais diplomático do zodíaco, tendo a busca por equilíbrio como característica evidente, além da sociabilidade e apreciação por arte e romance. Em suas vibrações mais baixas, evidencia-se a indecisão, por querer tanto considerar os dois lados que acaba não se decidindo. Planetas que um indivíduo tenha em Libra tendem a se manifestar de forma harmônica, e buscam parcerias e diplomacia."<<endl;
		}
		
	}else if(mes=="outubro" ){
		
		if(dia<=22  ){
			//libra
			cout <<"LIBRA: Quanto às suas vibrações mais altas, Libra é o signo mais diplomático do zodíaco, tendo a busca por equilíbrio como característica evidente, além da sociabilidade e apreciação por arte e romance. Em suas vibrações mais baixas, evidencia-se a indecisão, por querer tanto considerar os dois lados que acaba não se decidindo. Planetas que um indivíduo tenha em Libra tendem a se manifestar de forma harmônica, e buscam parcerias e diplomacia."<<endl;
		}else if(dia>=23 ){
			//escorpiao
			cout <<"ESCORPIÃO: Sendo um signo bastante intenso e passional, Escorpião, em suas vibrações mais altas, tem tudo para ser incrivelmente transformador, profundo, intuitivo, enigmático e curador. Quanto às vibrações mais baixas, quem tem o sol, ascendente ou muitos planetas neste signo pode acabar sendo muito possessivo, vingativo ou auto-destrutivo às vezes. Planetas em Escorpião se manifestam possivelmente de forma intensa, poderosa, transformadora ou misteriosa."<<endl;
		}
		
	}else if(mes=="novembro" ){
		
		if(dia<=21 ){
			//escorpiao
			cout <<"ESCORPIÃO: Sendo um signo bastante intenso e passional, Escorpião, em suas vibrações mais altas, tem tudo para ser incrivelmente transformador, profundo, intuitivo, enigmático e curador. Quanto às vibrações mais baixas, quem tem o sol, ascendente ou muitos planetas neste signo pode acabar sendo muito possessivo, vingativo ou auto-destrutivo às vezes. Planetas em Escorpião se manifestam possivelmente de forma intensa, poderosa, transformadora ou misteriosa."<<endl;
		}else if(dia>=22 ){
			//sagitario
			cout <<"SAGITÁRIO: As vibrações mais altas de Sagitário são a expansão, sorte, otimismo, aventura e uma visão mais abrangente e filosófica dos fatos. Já em suas vibrações mais baixas, sagitarianos podem acabar sendo excessivos, grosseiros (na maneira de falar a “verdade”) e irresponsáveis, além de às vezes acabarem sendo fanáticos no que acreditam e seguem. Planetas em Sagitário se manifestam de forma expansiva, otimista e sincera."<<endl;
		}
		
	}else if(mes=="dezembro" ){
		
		if(dia<=21 ){
			//sagiario
			cout <<"SAGITÁRIO: As vibrações mais altas de Sagitário são a expansão, sorte, otimismo, aventura e uma visão mais abrangente e filosófica dos fatos. Já em suas vibrações mais baixas, sagitarianos podem acabar sendo excessivos, grosseiros (na maneira de falar a “verdade”) e irresponsáveis, além de às vezes acabarem sendo fanáticos no que acreditam e seguem. Planetas em Sagitário se manifestam de forma expansiva, otimista e sincera."<<endl;
		}else if(dia>=22 ){
			//capricornio
			cout <<"CAPRICÓRNIO: As vibrações mais altas de Capricórnio estão ligadas à responsabilidade, ao foco, à organização, à ambição e o fato de serem muito trabalhadores. Já as vibrações mais baixas podem acabar sendo a rigidez excessiva, pessimismo e uma possível avareza. Planetas que um indivíduo tenha em Capricórnio tendem a se manifestar de forma prudente, séria e disciplinada."<<endl;
		}
		
	}
	
}

void escreversigno(char a[]){

	if(a=="capricórnio" ){
		
		
		cout <<"CAPRICÓRNIO: As vibrações mais altas de Capricórnio estão ligadas à responsabilidade, ao foco, à organização, à ambição e o fato de serem muito trabalhadores. Já as vibrações mais baixas podem acabar sendo a rigidez excessiva, pessimismo e uma possível avareza. Planetas que um indivíduo tenha em Capricórnio tendem a se manifestar de forma prudente, séria e disciplinada."<<endl;
		
		
	}else if(a=="aquário" ){
		
		cout <<"AQUÁRIO: Aquário é o signo cujas vibrações mais altas são a criatividade, humanitarismo e o fato de serem verdadeiramente revolucionários e originais. Já as vibrações mais baixas podem ser o excentrismo, rebeldia e racionalidade em excesso. Planetas que um indivíduo tenha em Aquário tendem a se manifestar de forma original, livre, imprevisível e revolucionária"<<endl;
		
	}else if(a=="peixes" ){
		
		
		cout <<"PEIXES: Em suas vibrações mais altas, Peixes tem tudo a ver com sonhos, arte, sensibilidade e espiritualidade. Já em suas vibrações mais baixas, especialmente para aqueles que têm o Sol em Peixes ou que têm este signo forte no mapa, é possível que haja uma dificuldade em manter os pés no chão, uma instabilidade emocional e a busca por recursos de fuga da realidade. Planetas em Peixes tendem a se manifestar de forma mística, intuitiva, empática ou fantasiosa. "<<endl;
				
	}else if(a=="áries" ){
		
			cout <<"ÁRIES: Sendo o primeiro do zodíaco, o signo de Áries representa fortemente novos inícios, pioneirismo, coragem, empreendedorismo, energia, dinamismo e competitividade. Em suas vibrações mais baixas, temos a impulsividade, egoísmo e a pressa. Planetas que um indivíduo tenha nesse signo podem se manifestar de forma pioneira, corajosa ou imprudente."<< endl;
	
		
	}else if(a=="touro" ){
		
		cout <<"TOURO: As principais qualidades de Touro são a determinação, estabilidade, perseverança, sensualidade e praticidade. É interessante ter um cuidado com a teimosia, preguiça, possessividade ou materialismo. Planetas que um indivíduo tenha em Touro se manifestam de forma estável ou até mesmo um pouco mais lenta."<<endl;
		
	}else if(a=="gêmeos" ){
		
		
		cout <<"GÊMEOS: As vibrações mais altas de Gêmeos são a inteligência, sociabilidade, comunicatividade, a curiosidade para aprender coisas novas e a flexibilidade para compreender outros pontos de vista. Já nas vibrações mais baixas, há a dispersão, a fala em excesso e uma possível superficialidade. Planetas que um indivíduo tenha em Gêmeos tendem a se manifestar de forma versátil, plural ou inconstante. "<<endl;
		
		
	}else if(a=="câncer" ){
		
		
	cout <<"CÂNCER: As principais características de Câncer são o fato de se tratar de um signo muito amoroso, protetor, simpático e receptivo. Já em suas vibrações mais baixas, com as quais é interessante quem tem o sol nesse signo ter cuidado, são a instabilidade emocional, o apego ao passado e a dependência em outras pessoas. Planetas em Câncer tendem a se manifestar de forma afetiva, sensível e protetora."<<endl;
	
	}else if(a=="leão" ){
		
	cout <<"LEÃO: As vibrações mais altas de Leão são a confiança, entusiasmo, generosidade e a criatividade. As mais baixas, com as quais quem é de leão tem que ter cuidado, são a arrogância, o egocentrismo e a preguiça. Planetas em Leão tendem a se manifestar de forma criativa, ousada e dominadora."<<endl;
		
		
	}else if(a=="virgem" ){
		
		cout <<"VIRGEM: As principais características de Virgem são a incrível eficiência desse signo, além da praticidade, dedicação, organização e o fato de serem super observadores. Já as vibrações mais baixas consistem no fato de os virginianos muitas vezes serem críticos demais, não só com os outros como consigo mesmos também. Planetas em Virgem tendem a se manifestar de forma analítica, prática e organizada."<<endl;	
	
		
	}else if(a=="libra" ){
		
		cout <<"LIBRA: Quanto às suas vibrações mais altas, Libra é o signo mais diplomático do zodíaco, tendo a busca por equilíbrio como característica evidente, além da sociabilidade e apreciação por arte e romance. Em suas vibrações mais baixas, evidencia-se a indecisão, por querer tanto considerar os dois lados que acaba não se decidindo. Planetas que um indivíduo tenha em Libra tendem a se manifestar de forma harmônica, e buscam parcerias e diplomacia."<<endl;
		
		
	}else if(a=="escorpião" ){
		
		cout <<"ESCORPIÃO: Sendo um signo bastante intenso e passional, Escorpião, em suas vibrações mais altas, tem tudo para ser incrivelmente transformador, profundo, intuitivo, enigmático e curador. Quanto às vibrações mais baixas, quem tem o sol, ascendente ou muitos planetas neste signo pode acabar sendo muito possessivo, vingativo ou auto-destrutivo às vezes. Planetas em Escorpião se manifestam possivelmente de forma intensa, poderosa, transformadora ou misteriosa."<<endl;
		
	}else if(a=="sagitário" ){
		
			cout <<"SAGITÁRIO: As vibrações mais altas de Sagitário são a expansão, sorte, otimismo, aventura e uma visão mais abrangente e filosófica dos fatos. Já em suas vibrações mais baixas, sagitarianos podem acabar sendo excessivos, grosseiros (na maneira de falar a “verdade”) e irresponsáveis, além de às vezes acabarem sendo fanáticos no que acreditam e seguem. Planetas em Sagitário se manifestam de forma expansiva, otimista e sincera."<<endl;			
		
	}


}	

void name(char sentece[],char nome[]){
	
	
	char *b;
	
	int cont=0,cont2=0,j=0;
	
	
	for(int i =0;sentece[i]!='\0';i++){
		
		b = strstr(sentece," ");
		
		if(b!= NULL){
			
			cont++;
			
		}
		
	}
	
	for(int i =0;sentece[i]!='\0';i++){
		
		b = strstr(sentece," ");
		
		if(b!= NULL){
			
			cont2++;
			
		}
		
		if(cont2==cont){
			a[j]=sentece[i];
			j++;
		}
		
	}
	
	strcpy(nome,a);
	
}

bool end(char a[]){
	
	for(int i =0;a[i]='\0';i++){
		
	    if(a[i]=='t' && a[i+1]=='c' && a[i+2]=='h' && a[i+3]=='a' && a[i+4]=='u'  ){
	    	
			return 1;
			
		}else{
			
			return 0;
			
		}
	}
	
	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	
		
	char saudacao [3][100] = {
		"Olá, eu sou o XR8. Meu hobby é falar sobre signos do zodíaco. Qual é o seu nome?",
		
		"Bom dia, me chamo XR8. Eu sei falar sobre signos do zodíaco. Qual é o seu nome?",
		
		"Olá, meu nome é XR8. Eu sei falar sobre signos do zodíaco.Qual é o seu nome?"
	
	};
	
		
	char sentece[100];
	char sig[31];
	int dia=0;
	char mes[21];
	bool a= true;
	char nome[30];
	
	srand (time(NULL));
		
    cout << saudacao[rand()%3]<< endl;
        
	cin.getline(sentece,100);
	minuscula(sentece);
	name(sentece,nome);
		
		
	while(a)
	{
			
		cout  << "Olá "<<nome<<".Me fale um signo ou um mês do ano." <<endl;
		
		cin.getline(sentece,100);
		minuscula(sentece);
		findmes(sentece,mes);
		signo(sentece,sig);
		
		char despedida[3][20]= {
		"Até logo!",
		"Tchau!",
		"Até mais!"
		};
		
		if(end(sentece)){
			
			srand (time(NULL));
			
    		cout << despedida[rand()%3]<< endl;
    		
    		a= false;
    		
				
		}else{
			
		
			if(mes != NULL){
			
						
				cout<<"Me fale um dia " << endl;
			
				cin>>dia;

				finddia(mes,dia);

				findsigno(mes ,dia);
			
			
			}else if (sig != NULL){
			
				escreversigno(sig);
		
			
			}



		}
		
		
		
	}
	
	
	return 0;
}
