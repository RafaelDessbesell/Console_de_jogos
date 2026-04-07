#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	char respostadejogo;
	
	do{
	
	
	
	
	printf("Titulo do jogo\n\n");
	
	printf("1-Jogo das perguntas\n");
	printf("2-Cobra na caixa\n");
	printf("3-Gousmas war\n");
	printf("4-Sair");
	
	
	
	do{
		
		printf("\nQual a sua escolha?:");
		scanf(" %c",&respostadejogo);
		
	}while(respostadejogo!='1'&&respostadejogo!='2'&&respostadejogo!='3'&&respostadejogo!='4');
	
	
	
	
	
	system("cls");
	
	

	
	if(respostadejogo == '1'){
		
		
	int acertos;
	char jogardnv;
	
	
	
	do{
		
	
	
	
	
		printf("\n\nJogo das perguntas :)\n\n");
	system("pause");
	
	
	system("cls");
	
	
	
	
	printf("\n(Pergunta 1)Qual o minerio mais forte do minecraft?(sem mods)\n\n");
	
	printf("a) netherite\n");
	printf("b) diamante\n");
	printf("c) ferro\n");
	printf("d) Avaritia\n ");
	
	
	
	
	
	char resposta1;
	
	
	do{
	printf("\nResposta:");
	scanf(" %c",&resposta1);
	}while(resposta1!='a'&&resposta1!='b'&&resposta1!='c'&&resposta1!='d');

	
	
	if(resposta1 == 'a'){
		printf("\n\nAcertouuuuuu, parabens :)\n\n");
		acertos+=1;
	}else{
		printf("\n\nerrou :(\n\n");
		printf("Resposta certa: a\n\n");
	}
		
		
		system("pause");
		
		system("cls");
		
		printf("\n(Pergunta 2)Qual a capital da china?\n\n");
	
	printf("a) Taiwan\n");
	printf("b) Xangai\n");
	printf("c) Hong kong\n");
	printf("d) Pequim\n");

		
		
		
			char resposta2;
	
	do{
	printf("\nResposta:");
	scanf(" %c",&resposta2);
	}while(resposta2!='a'&&resposta2!='b'&&resposta2!='c'&&resposta2!='d');
	
	if(resposta2 == 'd'){
		printf("\n\nAcertouuuuuu, parabens :)\n\n");
		acertos+=1;
	}else{
		printf("\n\nerrou :(\n\n");
		printf("Resposta certa: d\n");
	}
		
		
		system("pause");
		
		system("cls");
		
			printf("\n(Pergunta 3)Qual e a forma do arco iris?\n\n");
	
	printf("a) Meio circulo\n");
	printf("b) Elipse\n");
	printf("c) Meio triangulo\n");
	printf("d) Circulo\n ");
		
		
		
			char resposta3;
	
	do{
	printf("\nResposta:");
	scanf(" %c",&resposta3);
	}while(resposta3!='a'&&resposta3!='b'&&resposta3!='c'&&resposta3!='d');
	
	if(resposta3 == 'd'){
		printf("\n\nAcertouuuuuu, parabens :)\n\n");
		acertos+=1;
	}else{
		printf("\n\nerrou :(\n\n");
		printf("Resposta certa: d\n");
	}
		
		
		system("pause");
		
		system("cls");
		
		
		
			printf("\n(Pergunta 4) Na linguagem de c de computador, oq o comando print() faz diretamente?\n\n");
	
	printf("a) Cria uma condicao\n");
	printf("b) Gera um erro\n");
	printf("c) Exibe algo no terminal\n");
	printf("d) Cria uma variavel\n ");
		
		
		
			char resposta4;
	
	do{
	printf("\nResposta:");
	scanf(" %c",&resposta4);
	}while(resposta4!='a'&&resposta4!='b'&&resposta4!='c'&&resposta4!='d');
	
	
	if(resposta4 == 'b'){
		printf("\n\nAcertouuuuuu, parabens :)\n\n");
		acertos+=1;
	}else{
		printf("\n\nerrou :(\n\n");
		printf("Resposta certa: b\n");
	}
		
		
		system("pause");
		system("cls");
		
		printf("\n\nPergunta dificil :0\n\n");
		
			printf("\n(Pergunta 5) Do que e feito a membrana plasmatica das celulas?\n\n");
	
	printf("a) Quitina\n");
	printf("b) Peptidioglicano\n");
	printf("c) Fosfolipidios\n");
	printf("d) Pseudopeptidioglicano\n ");
		
		
		
			char resposta5;
	
	do{
	printf("\nResposta:");
	scanf(" %c",&resposta5);
	}while(resposta5!='a'&&resposta5!='b'&&resposta5!='c'&&resposta5!='d');
	
	if(resposta5 == 'c'){
		printf("\n\nAcertouuuuuu, parabens :)\n\n");
		acertos+=1;
	}else{
		printf("\n\nerrou :(\n\n");
		printf("Resposta certa: c\n");
	}
		
		
		system("pause");
		system("cls");
		
		printf("\n\nNumero de acertos:");
		printf("%i\n\n",acertos);
		
		system("pause");
		system("cls");
		
		printf("Voce quer jogar de novo? Digite sim - s   Nao - n\n");
		printf("Escolha:");
		scanf(" %c",&jogardnv);
		
		system("cls");
		
	
}while(jogardnv== 's');
		
		
		
		
	}


	

	if(respostadejogo == '2'){
		
			
	srand(time(NULL));
	
	char jogardnvcobra;
	
	int ptp1, ptp2;
	
	ptp1=0;
	ptp2=0;
	
	
	

	
	printf("\nCobra na caixa! :)\n\n");
	
	system("pause");
	system("cls");
	
	char tutorial;
	
	printf("Quer ver o tutorial? Digite sim - s ou Nao - n\n");
	
	do{
	printf("Escolha:");
	scanf(" %c",& tutorial);
	}while(tutorial!='s'&&tutorial!='n');
	
	
	
	
	
	if(tutorial == 's'){
		
		system("cls");
		
	
		printf(" Dois Exploradores ficaram presos na tumba de um antigo farao\n");
		system("pause");
		system("cls");
		printf(" So tem uma forma de escapar, achando um botao, escondido em uma de 7 tumbas\n");
		system("pause");
		system("cls");
		printf(" Porem . . .\n");
		system("pause");
		system("cls");
		printf("Tem uma cobra em uma das tumbas\n");
			system("pause");
			system("cls");
		printf("Ache o Botao, ou nao seja pego pela COBRA!!!\n");
			system("pause");
		printf(" BOA SORTE :)\n");	
		
		system("cls");	
	}
	
	
	do{
	
	
	
	int p1, p2;
	
	int c, b;
		int vez;
	//em qual caixa a cobra e o botao vao estar
	do{
		
	c = rand() % 8;
	b = rand() % 8;
		
		
	}while((c == b) ||(c==0)|| (b==0));
	
		vez = rand() % 2;
	
	system("cls");
	//vez
	if( vez == 0){
		
		printf("\nPlayer 1 comeca!\n\n");
		
	}
	
if( vez == 1){
		
		printf("\nPlayer 2 comeca!\n\n");
		
	}
	
system("pause");
system("cls");
	//rodada1
	

	
	do{
	

	
	
	
	
	
	if( vez == 0){
		do{
	printf("\nPlayer 1) Escolha a tumba de 1 - 7:");
			scanf(" %i",&p1);
			
	}while(p1!=1&&p1!=2&&p1!=3&&p1!=4&&p1!=5&&p1!=6&&p1!=7);
			
	}

system("cls");
		
	if( vez == 1){
			do{
		printf("\nPlayer 2) Escolha a tumba 1 - 7:");
			scanf(" %i",&p2);
			
	}while(p2!=1&&p2!=2&&p2!=3&&p2!=4&&p2!=5&&p2!=6&&p2!=7);
		
			
	}
	
	system("cls");
				
	if( vez == 1){
		
			do{
	printf("\nPlayer 1) Escolha a tumba de 1 - 7:");
			scanf(" %i",&p1);
			
	}while(p1!=1&&p1!=2&&p1!=3&&p1!=4&&p1!=5&&p1!=6&&p1!=7);
		
			
	}

system("cls");
		
	if( vez == 0){
		
			do{
		printf("\nPlayer 2) Escolha a tumba 1 - 7:");
			scanf(" %i",&p2);
			
	}while(p2!=1&&p2!=2&&p2!=3&&p2!=4&&p2!=5&&p2!=6&&p2!=7);
			
			
	}
	
	system("cls");
	
	
	
	
}while((p1 != c && p1 != b) && (p2 != c && p2 != b));
	
	
	
	
	//Decisao de vencedor
	if(p1 == c){
		
		printf("Player 1 foi devorado pela cobra :0 \n\n");
		ptp2+=1;
		printf("Player 2 venceu!\n\n");
	}
	
	if(p2 == c){
		
		printf("Player 2 foi devorado pela cobra :0 \n\n");
		ptp1+=1;
		printf("Player 1 venceu!\n\n");
	}
	
	if(p1 == b){
		printf("Player 1 achou o botao :) \n\n");
		ptp1+=1;
		printf("Player 1 venceu!\n\n");
	}
	
	if(p2 == b){
		printf("Player 2 achou o botao :) \n\n");
		ptp2+=1;
		printf("Player 2 venceu!\n\n");
	}
	
	printf("#####Pontuacao#####\n");
	printf("Pontos Player 1: %i\n",ptp1);
	printf("Pontos Player 2: %i\n",ptp2);
	printf("###################\n\n");
	
	
	
		
		do{
		printf("Quer jogar de novo? Digite sim - s ou nao - n\n");
		printf("Escolha:");
		scanf(" %c",&jogardnvcobra);
			
	}while(jogardnvcobra!='s'&&jogardnvcobra!='n');
	
	
	system("cls");
	
}while(jogardnvcobra == 's');

	
	
	}
	
	if(respostadejogo == '3'){
			srand(time(NULL));
	
	
	
	
	int m1,m2,m3,m4,vez,divm1,divm2,divm3,divm4;
	char escolha, escolhalado1,escolhalado2, jogardnv;
	
	
	
	
	
	
	
	printf("\nGousmas war :)\n\n");
	system("pause");
	system("cls");
	
	
	vez= rand() % 2;
	
	
	if(vez == 0){
		printf("player 1 comeca!\n\n");
	}
	
	if(vez == 1){
		printf("player 2 comeca!\n\n");
	}
	
	int pontosp1;
	int pontosp2;
	pontosp1=0;
	pontosp2=0;
	
	
	
	do{// jogar de novo?
	
	
	m1=1;
	m2=1;
	m3=1;
	m4=1;
	
	
	
	
	
	if(vez == 0){
	
	do{
	
		printf("	  e     d	  \n");
	printf("player 1) %i	%i\n",m1,m2);
	printf("player 2) %i	%i\n\n",m3,m4);
	
	do{
		
		printf("\n(Player 1)\n");
	printf("Atacar - a\n");
	printf("Dividir - d\n");
	printf("Escolha:");
	scanf(" %c",&escolha);
		
		
		
	}while(escolha!='a'&&escolha!='d');
	
	
	
	
	
	if(escolha == 'a'){
	printf("\n(Player 1)\n");
	printf("\nCom qual mao vai atacar? direita - d 	esquerda - e\n");
	printf("Escolha:");
	scanf(" %c",&escolhalado1);
	printf("\nEm qual mao vai atacar do seu oponente?\n");
	printf("Escolha:");
	scanf(" %c",&escolhalado2);
	
	if(escolhalado1=='d'&& escolhalado2=='d'){
		m4=m4+m2;
	}
	if(escolhalado1=='d'&& escolhalado2=='e'){
		m3=m3+m2;
	}
	if(escolhalado1=='e'&& escolhalado2=='d'){
		m4=m4+m1;
	}
	if(escolhalado1=='e'&& escolhalado2=='e'){
		m3=m3+m1;
	}
	
	
	}//ifataque
	
	
	//if dividir
	
	if(escolha=='d'){
		printf("\n(Player 1)\n");
		printf("Qual mao vai dividir? Direita - d	 esquerda - e\n");
		scanf(" %c",&escolhalado1);
		
		if(escolhalado1 =='d'){
			divm2=m2/2;
			m1=divm2+m1;
			m2=m2-divm2;
		}
			if(escolhalado1 =='e'){
			divm1=m1/2;
			m2=divm1+m2;
			m1=m1-divm1;
		}
		
	}//if dividir
	
	
	system("cls");
	
	//vez do outro jogador
	
	if(m1>=6){
		m1=0;
	}
	if(m2>=6){
		m2=0;
	}
	if(m3>=6){
		m3=0;
	}
	if(m4>=6){
		m4=0;
	}
	
	
		printf("	  e     d	  \n");
	printf("player 1) %i	%i\n",m1,m2);
	printf("player 2) %i	%i\n\n",m3,m4);
	
	printf("\n(Player 2)\n");
	printf("Atacar - a\n");
	printf("Dividir - d\n");
	printf("Escolha:");
	scanf(" %c",&escolha);
	
	
	
	
	if(escolha == 'a'){
	printf("\n(Player 2)\n");
	printf("\nCom qual mao vai atacar? direita - d 	esquerda - e\n");
	printf("Escolha:");
	scanf(" %c",&escolhalado1);
	printf("\nEm qual mao do oponente vai atacar?\n");
	printf("Escolha:");
	scanf(" %c",&escolhalado2);
	
	if(escolhalado1=='d'&& escolhalado2=='d'){
		m2=m2+m4;
	}
	if(escolhalado1=='d'&& escolhalado2=='e'){
		m1=m1+m4;
	}
	if(escolhalado1=='e'&& escolhalado2=='d'){
		m2=m2+m3;
	}
	if(escolhalado1=='e'&& escolhalado2=='e'){
		m1=m1+m3;
	}
	
	
	}//ifataque
	
	
	//if dividir
	
	if(escolha=='d'){
		printf("\n(Player 1)\n");
		printf("Qual mao vai dividir? Direita - d	 esquerda - e\n");
		scanf(" %c",&escolhalado1);
		
		if(escolhalado1 =='d'){
			divm4=m4/2;
			m3=divm4+m3;
			m4=m4-divm4;
		}
			if(escolhalado1 =='e'){
			divm3=m3/2;
			m4=divm3+m4;
			m3=m3-divm3;
		}
		
	}//if dividir
	
	
	system("cls");
	
	
	
	
	
		
	if(m1>=6){
		m1=0;
	}
	if(m2>=6){
		m2=0;
	}
	if(m3>=6){
		m3=0;
	}
	if(m4>=6){
		m4=0;
	}
	
	
	
	
	
	
	}while(( m1!=0 || m2!=0) && (m3 !=0 || m4!=0 ));//ataque
	
	}//ifvezplayer1
	
	
	
	//vez player 2 primeiro
	
	
	if(vez == 1){
	
	do{
	
	printf("	  e     d	  \n");
	printf("player 1) %i	%i\n",m1,m2);
	printf("player 2) %i	%i\n\n",m3,m4);
	
	printf("\n(Player 2)\n");
	printf("Atacar - a\n");
	printf("Dividir - d\n");
	printf("Escolha:");
	scanf(" %c",&escolha);
	
	
	
	
	if(escolha == 'a'){
	printf("\n(Player 2)\n");
	printf("\nCom qual mao vai atacar? direita - d 	esquerda - e\n");
	printf("Escolha:");
	scanf(" %c",&escolhalado1);
	printf("\nEm qual mao do opnente vai atacar?\n");
	printf("Escolha:");
	scanf(" %c",&escolhalado2);
	
	if(escolhalado1=='d'&& escolhalado2=='d'){ //m1 - esquerda player 1
		m2=m4+m2;								//m2- direita player 1	
	}											//m3 - esquerda player 2
	if(escolhalado1=='d'&& escolhalado2=='e'){	//m4 - direita player 2
		m1=m4+m1;
	}
	if(escolhalado1=='e'&& escolhalado2=='d'){
		m2=m3+m2;
	}
	if(escolhalado1=='e'&& escolhalado2=='e'){
		m1=m3+m1;
	}
	
	
	}//ifataque
	
	
	//if dividir
	
	if(escolha=='d'){
		printf("\n(Player 2)\n");
		printf("Qual mao vai dividir? Direita - d	 esquerda - e\n");
		scanf(" %c",&escolhalado1);
		
		if(escolhalado1 =='d'){
			divm4=m4/2;
			m3=divm4+m3;
			m4=m4-divm4;
		}
			if(escolhalado1 =='e'){
			divm3=m3/2;
			m4=divm3+m4;
			m3=m3-divm3;
		}
		
	}//if dividir
	
	
	system("cls");
	
	//vez do outro jogador
	
	if(m1>=6){
		m1=0;
	}
	if(m2>=6){
		m2=0;
	}
	if(m3>=6){
		m3=0;
	}
	if(m4>=6){
		m4=0;
	}
	
	
	
	
	
	
	
	
	printf("	  e     d	  \n");
	printf("player 1) %i	%i\n",m1,m2);
	printf("player 2) %i	%i\n\n",m3,m4);
	
	printf("\n(Player 1)\n");
	printf("Atacar - a\n");
	printf("Dividir - d\n");
	printf("Escolha:");
	scanf(" %c",&escolha);
	
	
	
	
	if(escolha == 'a'){
	printf("\n(Player 1)\n");
	printf("\nCom qual mao vai atacar? direita - d 	esquerda - e\n");
	printf("Escolha:");
	scanf(" %c",&escolhalado1);
	printf("\nEm qual mao do oponente vai atacar?\n");
	printf("Escolha:");
	scanf(" %c",&escolhalado2);
	
	if(escolhalado1=='d'&& escolhalado2=='d'){
		m4=m2+m4;
	}
	if(escolhalado1=='d'&& escolhalado2=='e'){
		m3=m2+m3;
	}
	if(escolhalado1=='e'&& escolhalado2=='d'){
		m4=m1+m4;
	}
	if(escolhalado1=='e'&& escolhalado2=='e'){
		m3=m1+m3;
	}
	
	
	}//ifataque
	
	
	//if dividir
	
	if(escolha=='d'){
		printf("\n(Player 1)\n");
		printf("Qual mao vai dividir? Direita - d	 esquerda - e\n");
		scanf(" %c",&escolhalado1);
		
		if(escolhalado1 =='d'){
			divm2=m2/2;
			m1=divm2+m1;
			m2=m2-divm2;
		}
			if(escolhalado1 =='e'){
			divm1=m1/2;
			m2=divm1+m2;
			m1=m1-divm1;
			
		}
		
	}//if dividir
	
	//para transformar as maos grandes em 0
	
	if(m1>=6){
		m1=0;
	}
	if(m2>=6){
		m2=0;
	}
	if(m3>=6){
		m3=0;
	}
	if(m4>=6){
		m4=0;
	}
	
	
	
	
	
	
	
	
	
	system("cls");
	
	}while(( m1!=0 || m2!=0) && (m3 !=0 || m4!=0 ));//ataque
	
	
    }//if vez player 2
	
	//Decisao vencedor
	
	
	
	if(m1==0 && m2==0){
		
		printf("\n\nPlayer 2 venceu!!! :)\n\n");
		pontosp1++;
	}
	
	
		if(m3==0 && m4==0){
		
		printf("\n\nPlayer 1 venceu!!! :)\n\n");
		pontosp2++;
	}
	
	
	
	printf("#####Pontuacao#####\n");
	printf("Pontos Player 1: %i\n",pontosp1);
	printf("Pontos Player 2: %i\n",pontosp2);
	printf("###################\n\n");
	
	
	
	
	
	
	
	
	printf("Quer jogar novamente? Sim - s ou Nao - n\n");
	scanf(" %c",&jogardnv);
	
	system("cls");
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	
	
	
	
	
	
}while(jogardnv=='s');
	
	
	
		
	}
	
	
}while(respostadejogo == 1 || respostadejogo == 2 || respostadejogo == 3);
	      
	
	
//para voltar ao menu
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
