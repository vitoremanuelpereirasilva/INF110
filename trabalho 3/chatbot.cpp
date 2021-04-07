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
		
		if( dia <1 || dia >32){
			cout<< mes <<" não tem "<< dia << " dias. Me fale um dia válido" <<  endl;
			cin>>dia;
			return finddia(mes,dia);
		}
		
	}else if(mes=="abril"||mes=="setembro"||mes=="novembro"||mes=="junho"){
		
		if( dia <1 || dia >31){
			cout<< mes <<" não tem "<< dia << " dias. Me fale um dia válido" <<  endl;
			cin>>dia;
			return finddia(mes,dia);
		}
	}else if(mes=="fevereiro"){
		
		if( dia <1 || dia >29){
			cout<< mes <<" não tem "<< dia << " dias. Me fale um dia válido" <<  endl;
			cin>>dia;
			return finddia(mes,dia);
		}
		
	}
		
	
		
		
}

void signo(char sentece[], char b[]){
	
	char *signo;
	
	char signos[12][20] = {
	    "�ries",
	    "touro",
	    "g�meos",
		"c�ncer",
		"le�o",
		"virgem",
		"libra",
		"escorpi�o",
		"sagit�rio",
		"capric�rnio",
		"aqu�rio",
		"peixes"
		
	};
	
	for(int i =0;i<12;i++){
		
		signo = strstr(sentece,signos[i]);
		
		if(signo!= NULL){
			
			strcpy(b,signos[i]);
		}
		
	}
	
}

void escreversigno(char a[]){

	if(a=="capricórnio" ){
		
		
		cout <<"CAPRIC�RNIO: As vibra��es mais altas de Capric�rnio est�o ligadas � responsabilidade, ao foco, � organiza��o, � ambi��o e o fato de serem muito trabalhadores. J� as vibra��es mais baixas podem acabar sendo a rigidez excessiva, pessimismo e uma poss�vel avareza. Planetas que um indiv�duo tenha em Capric�rnio tendem a se manifestar de forma prudente, s�ria e disciplinada."<<endl;
		
		
	}else if(a=="aquário" ){
		
		cout <<"AQU�RIO: Aqu�rio � o signo cujas vibra��es mais altas s�o a criatividade, humanitarismo e o fato de serem verdadeiramente revolucion�rios e originais. J� as vibra��es mais baixas podem ser o excentrismo, rebeldia e racionalidade em excesso. Planetas que um indiv�duo tenha em Aqu�rio tendem a se manifestar de forma original, livre, imprevis�vel e revolucion�ria"<<endl;
		
		
	}else if(a=="peixes" ){
		
		
		cout <<"PEIXES: Em suas vibra��es mais altas, Peixes tem tudo a ver com sonhos, arte, sensibilidade e espiritualidade. J� em suas vibra��es mais baixas, especialmente para aqueles que t�m o Sol em Peixes ou que t�m este signo forte no mapa, � poss�vel que haja uma dificuldade em manter os p�s no ch�o, uma instabilidade emocional e a busca por recursos de fuga da realidade. Planetas em Peixes tendem a se manifestar de forma m�stica, intuitiva, emp�tica ou fantasiosa. "<<endl;
				
	}else if(a=="áries" ){
		
		
		cout <<"�RIES: Sendo o primeiro do zod�aco, o signo de �ries representa fortemente novos in�cios, pioneirismo, coragem, empreendedorismo, energia, dinamismo e competitividade. Em suas vibra��es mais baixas, temos a impulsividade, ego�smo e a pressa. Planetas que um indiv�duo tenha nesse signo podem se manifestar de forma pioneira, corajosa ou imprudente."<< endl;
	
		
	}else if(a=="touro" ){
		
		
		cout <<"TOURO: As principais qualidades de Touro s�o a determina��o, estabilidade, perseveran�a, sensualidade e praticidade. � interessante ter um cuidado com a teimosia, pregui�a, possessividade ou materialismo. Planetas que um indiv�duo tenha em Touro se manifestam de forma est�vel ou at� mesmo um pouco mais lenta."<<endl;
		
		
	}else if(a=="gêmeos" ){
		
		
		cout <<"G�MEOS: As vibra��es mais altas de G�meos s�o a intelig�ncia, sociabilidade, comunicatividade, a curiosidade para aprender coisas novas e a flexibilidade para compreender outros pontos de vista. J� nas vibra��es mais baixas, h� a dispers�o, a fala em excesso e uma poss�vel superficialidade. Planetas que um indiv�duo tenha em G�meos tendem a se manifestar de forma vers�til, plural ou inconstante. "<<endl;
		
		
	}else if(a=="câncer" ){
		
		
		cout <<"C�NCER: As principais caracter�sticas de C�ncer s�o o fato de se tratar de um signo muito amoroso, protetor, simp�tico e receptivo. J� em suas vibra��es mais baixas, com as quais � interessante quem tem o sol nesse signo ter cuidado, s�o a instabilidade emocional, o apego ao passado e a depend�ncia em outras pessoas. Planetas em C�ncer tendem a se manifestar de forma afetiva, sens�vel e protetora."<<endl;
	
	}else if(a=="leão" ){
		
		cout <<"LE�O: As vibra��es mais altas de Le�o s�o a confian�a, entusiasmo, generosidade e a criatividade. As mais baixas, com as quais quem � de le�o tem que ter cuidado, s�o a arrog�ncia, o egocentrismo e a pregui�a. Planetas em Le�o tendem a se manifestar de forma criativa, ousada e dominadora."<<endl;
		
		
	}else if(a=="virgem" ){
		
		
		cout <<"VIRGEM: As principais caracter�sticas de Virgem s�o a incr�vel efici�ncia desse signo, al�m da praticidade, dedica��o, organiza��o e o fato de serem super observadores. J� as vibra��es mais baixas consistem no fato de os virginianos muitas vezes serem cr�ticos demais, n�o s� com os outros como consigo mesmos tamb�m. Planetas em Virgem tendem a se manifestar de forma anal�tica, pr�tica e organizada."<<endl;
	
		
	}else if(a=="libra" ){
		
		cout <<"LIBRA: Quanto �s suas vibra��es mais altas, Libra � o signo mais diplom�tico do zod�aco, tendo a busca por equil�brio como caracter�stica evidente, al�m da sociabilidade e aprecia��o por arte e romance. Em suas vibra��es mais baixas, evidencia-se a indecis�o, por querer tanto considerar os dois lados que acaba n�o se decidindo. Planetas que um indiv�duo tenha em Libra tendem a se manifestar de forma harm�nica, e buscam parcerias e diplomacia."<<endl;
		
		
	}else if(a=="escorpião" ){
		
		
		cout <<"ESCORPI�O: Sendo um signo bastante intenso e passional, Escorpi�o, em suas vibra��es mais altas, tem tudo para ser incrivelmente transformador, profundo, intuitivo, enigm�tico e curador. Quanto �s vibra��es mais baixas, quem tem o sol, ascendente ou muitos planetas neste signo pode acabar sendo muito possessivo, vingativo ou auto-destrutivo �s vezes. Planetas em Escorpi�o se manifestam possivelmente de forma intensa, poderosa, transformadora ou misteriosa."<<endl;
	
		
	}else if(a=="sagitário" ){
		
		
		cout <<"SAGIT�RIO: As vibra��es mais altas de Sagit�rio s�o a expans�o, sorte, otimismo, aventura e uma vis�o mais abrangente e filos�fica dos fatos. J� em suas vibra��es mais baixas, sagitarianos podem acabar sendo excessivos, grosseiros (na maneira de falar a �verdade�) e irrespons�veis, al�m de �s vezes acabarem sendo fan�ticos no que acreditam e seguem. Planetas em Sagit�rio se manifestam de forma expansiva, otimista e sincera."<<endl;
			
		
	}


}

bool temsigno(char sentece[]){
	
	char *signo;
	
	char signos[12][20] = {
	    "�ries",
	    "touro",
	    "g�meos",
		"c�ncer",
		"le�o",
		"virgem",
		"libra",
		"escorpi�o",
		"sagit�rio",
		"capric�rnio",
		"aqu�rio",
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
	
	if(mes=="janeiro" ){
		
		if(dia<=20 ){
			//capricornio
			cout <<"CAPRIC�RNIO: As vibra��es mais altas de Capric�rnio est�o ligadas � responsabilidade, ao foco, � organiza��o, � ambi��o e o fato de serem muito trabalhadores. J� as vibra��es mais baixas podem acabar sendo a rigidez excessiva, pessimismo e uma poss�vel avareza. Planetas que um indiv�duo tenha em Capric�rnio tendem a se manifestar de forma prudente, s�ria e disciplinada."<<endl;
		}else if(dia>=21 ){
			//aquario
			cout <<"AQU�RIO: Aqu�rio � o signo cujas vibra��es mais altas s�o a criatividade, humanitarismo e o fato de serem verdadeiramente revolucion�rios e originais. J� as vibra��es mais baixas podem ser o excentrismo, rebeldia e racionalidade em excesso. Planetas que um indiv�duo tenha em Aqu�rio tendem a se manifestar de forma original, livre, imprevis�vel e revolucion�ria"<<endl;
		}
		
	}else if(mes=="fevereiro" ){
		
		if(dia<=18){
			//aquario
			cout <<"AQU�RIO: Aqu�rio � o signo cujas vibra��es mais altas s�o a criatividade, humanitarismo e o fato de serem verdadeiramente revolucion�rios e originais. J� as vibra��es mais baixas podem ser o excentrismo, rebeldia e racionalidade em excesso. Planetas que um indiv�duo tenha em Aqu�rio tendem a se manifestar de forma original, livre, imprevis�vel e revolucion�ria"<<endl;
		}else if(dia >= 19){
			//peixes
			cout <<"PEIXES: Em suas vibra��es mais altas, Peixes tem tudo a ver com sonhos, arte, sensibilidade e espiritualidade. J� em suas vibra��es mais baixas, especialmente para aqueles que t�m o Sol em Peixes ou que t�m este signo forte no mapa, � poss�vel que haja uma dificuldade em manter os p�s no ch�o, uma instabilidade emocional e a busca por recursos de fuga da realidade. Planetas em Peixes tendem a se manifestar de forma m�stica, intuitiva, emp�tica ou fantasiosa. "<<endl;
		}
		
	}else if(mes=="marco" ){
		
		if(dia<=20 ){
			//peixes
			cout <<"PEIXES: Em suas vibra��es mais altas, Peixes tem tudo a ver com sonhos, arte, sensibilidade e espiritualidade. J� em suas vibra��es mais baixas, especialmente para aqueles que t�m o Sol em Peixes ou que t�m este signo forte no mapa, � poss�vel que haja uma dificuldade em manter os p�s no ch�o, uma instabilidade emocional e a busca por recursos de fuga da realidade. Planetas em Peixes tendem a se manifestar de forma m�stica, intuitiva, emp�tica ou fantasiosa. "<<endl;
		}else if( dia >=21 ){
			//aries
			cout <<"�RIES: Sendo o primeiro do zod�aco, o signo de �ries representa fortemente novos in�cios, pioneirismo, coragem, empreendedorismo, energia, dinamismo e competitividade. Em suas vibra��es mais baixas, temos a impulsividade, ego�smo e a pressa. Planetas que um indiv�duo tenha nesse signo podem se manifestar de forma pioneira, corajosa ou imprudente."<< endl;
		}		
	}else if(mes=="abril" ){
		
		if(dia<=20 ){
			//aries
			cout <<"�RIES: Sendo o primeiro do zod�aco, o signo de �ries representa fortemente novos in�cios, pioneirismo, coragem, empreendedorismo, energia, dinamismo e competitividade. Em suas vibra��es mais baixas, temos a impulsividade, ego�smo e a pressa. Planetas que um indiv�duo tenha nesse signo podem se manifestar de forma pioneira, corajosa ou imprudente."<< endl;
		}else if(dia >=21 ){
			//touro
			cout <<"TOURO: As principais qualidades de Touro s�o a determina��o, estabilidade, perseveran�a, sensualidade e praticidade. � interessante ter um cuidado com a teimosia, pregui�a, possessividade ou materialismo. Planetas que um indiv�duo tenha em Touro se manifestam de forma est�vel ou at� mesmo um pouco mais lenta."<<endl;
		}
		
	}else if(mes=="maio" ){
		
		if(dia<=21 ){
			//touro
			cout <<"TOURO: As principais qualidades de Touro s�o a determina��o, estabilidade, perseveran�a, sensualidade e praticidade. � interessante ter um cuidado com a teimosia, pregui�a, possessividade ou materialismo. Planetas que um indiv�duo tenha em Touro se manifestam de forma est�vel ou at� mesmo um pouco mais lenta."<<endl;
		}else if(dia >=22 ){
			//gemeos
			cout <<"G�MEOS: As vibra��es mais altas de G�meos s�o a intelig�ncia, sociabilidade, comunicatividade, a curiosidade para aprender coisas novas e a flexibilidade para compreender outros pontos de vista. J� nas vibra��es mais baixas, h� a dispers�o, a fala em excesso e uma poss�vel superficialidade. Planetas que um indiv�duo tenha em G�meos tendem a se manifestar de forma vers�til, plural ou inconstante. "<<endl;
		}
		
	}else if(mes=="junho" ){
		
		if(dia<=20 ){
			//gemeos
			cout <<"G�MEOS: As vibra��es mais altas de G�meos s�o a intelig�ncia, sociabilidade, comunicatividade, a curiosidade para aprender coisas novas e a flexibilidade para compreender outros pontos de vista. J� nas vibra��es mais baixas, h� a dispers�o, a fala em excesso e uma poss�vel superficialidade. Planetas que um indiv�duo tenha em G�meos tendem a se manifestar de forma vers�til, plural ou inconstante. "<<endl;
		}else if(dia >= 21){
			//cancer
			cout <<"C�NCER: As principais caracter�sticas de C�ncer s�o o fato de se tratar de um signo muito amoroso, protetor, simp�tico e receptivo. J� em suas vibra��es mais baixas, com as quais � interessante quem tem o sol nesse signo ter cuidado, s�o a instabilidade emocional, o apego ao passado e a depend�ncia em outras pessoas. Planetas em C�ncer tendem a se manifestar de forma afetiva, sens�vel e protetora."<<endl;
		}
		
	}else if(mes=="julho" ){
		if(dia<=22){
			//cancer
			cout <<"C�NCER: As principais caracter�sticas de C�ncer s�o o fato de se tratar de um signo muito amoroso, protetor, simp�tico e receptivo. J� em suas vibra��es mais baixas, com as quais � interessante quem tem o sol nesse signo ter cuidado, s�o a instabilidade emocional, o apego ao passado e a depend�ncia em outras pessoas. Planetas em C�ncer tendem a se manifestar de forma afetiva, sens�vel e protetora."<<endl;
		}else if(dia>=23 ){
			//leao
			cout <<"LE�O: As vibra��es mais altas de Le�o s�o a confian�a, entusiasmo, generosidade e a criatividade. As mais baixas, com as quais quem � de le�o tem que ter cuidado, s�o a arrog�ncia, o egocentrismo e a pregui�a. Planetas em Le�o tendem a se manifestar de forma criativa, ousada e dominadora."<<endl;
		}
		
	}else if(mes=="agosto" ){
		if(dia<=22 ){
			//leao
			cout <<"LE�O: As vibra��es mais altas de Le�o s�o a confian�a, entusiasmo, generosidade e a criatividade. As mais baixas, com as quais quem � de le�o tem que ter cuidado, s�o a arrog�ncia, o egocentrismo e a pregui�a. Planetas em Le�o tendem a se manifestar de forma criativa, ousada e dominadora."<<endl;
		}else if(dia>=23 ){
			//virgem
			cout <<"VIRGEM: As principais caracter�sticas de Virgem s�o a incr�vel efici�ncia desse signo, al�m da praticidade, dedica��o, organiza��o e o fato de serem super observadores. J� as vibra��es mais baixas consistem no fato de os virginianos muitas vezes serem cr�ticos demais, n�o s� com os outros como consigo mesmos tamb�m. Planetas em Virgem tendem a se manifestar de forma anal�tica, pr�tica e organizada."<<endl;
		}
		
	}else if(mes=="setembro" ){
		
		if(dia<=22 ){
			//virgem
			cout <<"VIRGEM: As principais caracter�sticas de Virgem s�o a incr�vel efici�ncia desse signo, al�m da praticidade, dedica��o, organiza��o e o fato de serem super observadores. J� as vibra��es mais baixas consistem no fato de os virginianos muitas vezes serem cr�ticos demais, n�o s� com os outros como consigo mesmos tamb�m. Planetas em Virgem tendem a se manifestar de forma anal�tica, pr�tica e organizada."<<endl;
		}else if(dia>=23 ){
			//libra
			cout <<"LIBRA: Quanto �s suas vibra��es mais altas, Libra � o signo mais diplom�tico do zod�aco, tendo a busca por equil�brio como caracter�stica evidente, al�m da sociabilidade e aprecia��o por arte e romance. Em suas vibra��es mais baixas, evidencia-se a indecis�o, por querer tanto considerar os dois lados que acaba n�o se decidindo. Planetas que um indiv�duo tenha em Libra tendem a se manifestar de forma harm�nica, e buscam parcerias e diplomacia."<<endl;
		}
		
	}else if(mes=="outubro" ){
		
		if(dia<=22  ){
			//libra
			cout <<"LIBRA: Quanto �s suas vibra��es mais altas, Libra � o signo mais diplom�tico do zod�aco, tendo a busca por equil�brio como caracter�stica evidente, al�m da sociabilidade e aprecia��o por arte e romance. Em suas vibra��es mais baixas, evidencia-se a indecis�o, por querer tanto considerar os dois lados que acaba n�o se decidindo. Planetas que um indiv�duo tenha em Libra tendem a se manifestar de forma harm�nica, e buscam parcerias e diplomacia."<<endl;
		}else if(dia>=23 ){
			//escorpiao
			cout <<"ESCORPI�O: Sendo um signo bastante intenso e passional, Escorpi�o, em suas vibra��es mais altas, tem tudo para ser incrivelmente transformador, profundo, intuitivo, enigm�tico e curador. Quanto �s vibra��es mais baixas, quem tem o sol, ascendente ou muitos planetas neste signo pode acabar sendo muito possessivo, vingativo ou auto-destrutivo �s vezes. Planetas em Escorpi�o se manifestam possivelmente de forma intensa, poderosa, transformadora ou misteriosa."<<endl;
		}
		
	}else if(mes=="novembro" ){
		
		if(dia<=21 ){
			//escorpiao
			cout <<"ESCORPI�O: Sendo um signo bastante intenso e passional, Escorpi�o, em suas vibra��es mais altas, tem tudo para ser incrivelmente transformador, profundo, intuitivo, enigm�tico e curador. Quanto �s vibra��es mais baixas, quem tem o sol, ascendente ou muitos planetas neste signo pode acabar sendo muito possessivo, vingativo ou auto-destrutivo �s vezes. Planetas em Escorpi�o se manifestam possivelmente de forma intensa, poderosa, transformadora ou misteriosa."<<endl;
		}else if(dia>=22 ){
			//sagitario
			cout <<"SAGIT�RIO: As vibra��es mais altas de Sagit�rio s�o a expans�o, sorte, otimismo, aventura e uma vis�o mais abrangente e filos�fica dos fatos. J� em suas vibra��es mais baixas, sagitarianos podem acabar sendo excessivos, grosseiros (na maneira de falar a �verdade�) e irrespons�veis, al�m de �s vezes acabarem sendo fan�ticos no que acreditam e seguem. Planetas em Sagit�rio se manifestam de forma expansiva, otimista e sincera."<<endl;
		}
		
	}else if(mes=="dezembro" ){
		
		if(dia<=21 ){
			//sagiario
			cout <<"SAGIT�RIO: As vibra��es mais altas de Sagit�rio s�o a expans�o, sorte, otimismo, aventura e uma vis�o mais abrangente e filos�fica dos fatos. J� em suas vibra��es mais baixas, sagitarianos podem acabar sendo excessivos, grosseiros (na maneira de falar a �verdade�) e irrespons�veis, al�m de �s vezes acabarem sendo fan�ticos no que acreditam e seguem. Planetas em Sagit�rio se manifestam de forma expansiva, otimista e sincera."<<endl;
		}else if(dia>=22 ){
			//capricornio
			cout <<"CAPRIC�RNIO: As vibra��es mais altas de Capric�rnio est�o ligadas � responsabilidade, ao foco, � organiza��o, � ambi��o e o fato de serem muito trabalhadores. J� as vibra��es mais baixas podem acabar sendo a rigidez excessiva, pessimismo e uma poss�vel avareza. Planetas que um indiv�duo tenha em Capric�rnio tendem a se manifestar de forma prudente, s�ria e disciplinada."<<endl;
		}
		
	}
	
}	

void name(char sentece[],char nome[]){
	
	char a[30];
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
	
	char *final[10];
	
	*final = strstr(a,"tchau");
	
	if(final!=NULL){
			
			return 0;	
	}else {
		return 1;
	}
	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	
	char despedida[3][20]= {
		"At� logo!",
		"Tchau!",
		"At� mais!"
	};
		
	char saudacao [3][100] = {
		"Ol�, eu sou o XR8. Meu hobby � falar sobre signos do zod�aco. Qual � o seu nome?",
		
		"Bom dia, me chamo XR8. Eu sei falar sobre signos do zod�aco. Qual � o seu nome?",
		
		"Ol�, meu nome � XR8. Eu sei falar sobre signos do zod�aco.Qual � o seu nome?"
	
	};
	
		
	char sentece[100];
	char sig[20];
	int dia=0;
	char mes[12];
	bool a= true;
	char nome[30];
	
	srand (time(NULL));
		
    cout << saudacao[rand()%3]<< endl;
        
	cin.getline(sentece,100);
	
	name(sentece,nome);
		
		
	while(a)
	{
			
		cout  << "Ol� "<<nome<<".Me fale um signo ou um m�s do ano." << endl;
		
		cin.getline(sentece,100);
		minuscula(sentece);
	
		
		if(end(sentece)){
			
			srand (time(NULL));
			
    		cout << despedida[rand()%3]<< endl;
    		
			break;
		
		}else{
			signo(sentece,sig);
		
			if(temmes(sentece)){
			
				findmes(sentece,mes);
			
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
