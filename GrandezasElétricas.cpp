#include <stdio.h>

int main(){
	int opcao, qual;
	float valor1, valor2, result;
	
	printf("1 - Tensao\n");
	printf("2 - Corrente\n");
	printf("3 - Potencia\n");
	printf("4 - Resistencia\n");
	printf("Resposta: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			printf("\nQual desses valores possui?\n");
			printf("1 - Resistencia e Corrente\n");
			printf("2 - Potencia e Corrente\n");
			printf("Reposta: ");
			scanf("%d", &qual);
			
			if (qual == 1){
				printf("\nMe diga o valor da resistencia: ");
				scanf("%f", &valor1);
				printf("Agora o valor da corrente: ");
				scanf("%f", &valor2);
				result = valor1 * valor2;
			} else if (qual == 2){
				printf("\nMe diga o valor da potencia: ");
				scanf("%f", &valor1);
				printf("Agora o valor da corrente: ");
				scanf("%f", &valor2);
				result = valor1 / valor2;
			} else {
				printf("Não foi isso que pedi!");
			}
			
			printf("\nResultado: %.2f (V)", result);
			
			break;
			
		case 2:
			printf("\nQual desses valores possui?\n");
			printf("1 - Tensao e Resistencia\n");
			printf("2 - Potencia e Tensao\n");
			printf("Reposta: ");
			scanf("%d", &qual);
			
			if (qual == 1){
				printf("\nMe diga o valor da tensao: ");
				scanf("%f", &valor1);
				printf("Agora o valor da resistencia: ");
				scanf("%f", &valor2);
				result = valor1 / valor2;
			} else if (qual == 2){
				printf("\nMe diga o valor da potencia: ");
				scanf("%f", &valor1);
				printf("Agora o valor da tensao: ");
				scanf("%f", &valor2);
				result = valor1 / valor2;
			} else {
				printf("Não foi isso que pedi!");
			}
			
			printf("\nResultado: %.2f (A)", result);
			
			break;
			
		case 3:
			printf("\nQual desses valores possui?\n");
			printf("1 - Tensao e Corrente\n");
			printf("2 - Corrente e Resistencia\n");
			printf("Reposta: ");
			scanf("%d", &qual);
			
			if (qual == 1){
				printf("\nMe diga o valor da tensao: ");
				scanf("%f", &valor1);
				printf("Agora o valor da corrente: ");
				scanf("%f", &valor2);
				result = valor1 * valor2;
			} else if (qual == 2){
				printf("\nMe diga o valor da corrente: ");
				scanf("%f", &valor1);
				printf("Agora o valor da resistencia: ");
				scanf("%f", &valor2);
				result = (valor1*valor2) * valor1;
			} else {
				printf("Não foi isso que pedi!");
			}
			
			printf("\nResultado: %.2f (W)", result);
			
			break;
			
		case 4:
			printf("\nQual desses valores possui?\n");
			printf("1 - Tensao e Corrente\n");
			printf("2 - Potencia e Corrente\n");
			printf("3 - Potencia e tensao\n");
			printf("Reposta: ");
			scanf("%d", &qual);
			
			if (qual == 1){
				printf("\nMe diga o valor da tensao: ");
				scanf("%f", &valor1);
				printf("Agora o valor da corrente: ");
				scanf("%f", &valor2);
				result = valor1 / valor2;
			} else if (qual == 2){
				printf("\nMe diga o valor da potencia: ");
				scanf("%f", &valor1);
				printf("Agora o valor da corrente: ");
				scanf("%f", &valor2);
				result = (valor1/valor2) * valor2;
			} else if (qual == 3){
				printf("\nMe diga o valor da potencia: ");
				scanf("%f", &valor1);
				printf("Agora o valor da tensao: ");
				scanf("%f", &valor2);
				result = (valor1/valor2) * valor2;
			} else {
				printf("Não foi isso que pedi!");
			}
			
			printf("\nResultado: %.2f (Ohms)", result);
			
			break;
	}
		
	return 0;
}
