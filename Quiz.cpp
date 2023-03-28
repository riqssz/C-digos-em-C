#include <stdio.h>
#include <windows.h>

void limpa(){
	scanf("%*[^\n]");
	scanf("%*c");
};

main(){
	
	char res;
	int pontos;
	
	printf("JOGO DE PERGUNTAS E RESPOSTAS!\n");
	Sleep(2000);
	printf("VALENDO 10 PONTOS!\n");
	Sleep(1500);
	printf("COMECE!\n\n");
	Sleep(1000);
	printf("1- Qual destes passwords foi o mais usado na internet?\nA- a1b2c3 \nB- abcdef\nC- 123456 \nResposta: ");
	scanf("%c", &res);
	if (res=='C' || res=='c'){
		pontos+=1;
	}
	else{
		pontos+=0;
	}
	limpa();
	
	printf("\n\n2- O que significa a sigla www na internet?\nA- World Wide Web \nB- Web World Wide\nC- Web Wide World\nResposta: ");
	scanf("%c", &res);
	if (res=='A' || res=='a'){
		pontos+=1;
	}
	else{
		pontos+=0;
	}
	limpa();
	
	printf("\n\n3- O que e HTML?\nA- Hyper Texto\nB- Linguagem de Programacao\nC- Rede Social\nResposta: ");
	scanf("%c", &res);
	if (res=='A' || res=='a'){
		pontos+=1;
	}
	else{
		pontos+=0;
	}
	limpa();
	
	printf("\n\n4- O que e BIOS?\nA- Deus da destruicao de Dragon Ball\nB- Sistema Basico de Entrada e Saida\nC- Caixa na qual armazena as pecas do computador\nResposta: ");
	scanf("%c", &res);
	if (res=='B' || res=='b'){
		pontos+=1;
	}
	else{
		pontos+=0;
	}
	limpa();
	
	printf("\n\n5- Qual tecla usamos para identar codigos de qualquer linguagem?\nA- Cntrl\nB- Shift\nC- Tab\nResposta: ");
	scanf("%c", &res);
	if (res=='C' || res=='c'){
		pontos+=1;
	}
	else{
		pontos+=0;
	}
	limpa();
	
	printf("\n\n6- Onde se usa o escreval para escrever algo?\nA- VisualG\nB- HTML\nC- Phyton\nResposta: ");
	scanf("%c", &res);
	if (res=='A' || res=='a'){
		pontos+=1;
	}
	else{
		pontos+=0;
	}
	limpa();
	
	printf("\n\n7- Quando foi criado o primeiro smartphone da historia?\nA- 2000\nB- 1994\nC- 1998\nResposta: ");
	scanf("%c", &res);
	if (res=='B' || res=='b'){
		pontos+=1;
	}
	else{
		pontos+=0;
	}
	limpa();
	
	printf("\n\n8- Qual o nome do ataque cibernetico que atingiu computadores no mundo todo este ano?\nA- WannaSpy\nB- WannaCry\nC- WannaFly\nResposta: ");
	scanf("%c", &res);
	if (res=='B' || res=='b'){
		pontos+=1;
	}
	else{
		pontos+=0;
	}
	limpa();
	
	printf("\n\n9- Qual a resoluçao de uma imagem Full HD?\nA- 1920x1080\nB- 1280x720\nC- 2560x1440\nResposta: ");
	scanf("%c", &res);
	if (res=='A' || res=='a'){
		pontos+=1;
	}
	else{
		pontos+=0;
	}
	limpa();
	
	printf("\n\n10- Quantos bits cabem em um byte?\nA- 1 Bit\nB- 12 Bits\nC- 8 Bits\nResposta: ");
	scanf("%c", &res);
	if (res=='C' || res=='c'){
		pontos+=1;
	}
	else{
		pontos+=0;
	}
	limpa();
	
	Sleep(3000);
	
	if (pontos==5 || pontos>5){
		printf("\n\nVc acertou %d perguntas.\nPASSOU!", pontos);
	}
	else{
		printf("\n\nVc acertou %d perguntas.\nREPROVADO!", pontos);
	}
}
