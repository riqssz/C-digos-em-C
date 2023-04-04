#include <stdio.h>

int main(){
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, resto, resto2, dig1, dig2;
	
	printf("------------------");
	printf("\nVALIDACAO DE CPF  \n");
	printf("------------------\n");
	printf("\nDigite seu CPF (a cada numero clique enter):\n");
	scanf("%d %d %d", &n1, &n2, &n3);
	printf(".\n");
	scanf("%d %d %d", &n4, &n5, &n6);
	printf(".\n");
	scanf("%d %d %d", &n7, &n8, &n9);
	printf("-\n");
	scanf("%d %d", &n10, &n11);
	
	resto = (((n1*10)+(n2*9)+(n3*8)+(n4*7)+(n5*6)+(n6*5)+(n7*4)+(n8*3)+(n9*2)) %11);
	if (resto < 2){
		dig1=0;
	} else{
		dig1 = 11 - resto;
	}
	
	resto2 = (((n1*11)+(n2*10)+(n3*9)+(n4*8)+(n5*7)+(n6*6)+(n7*5)+(n8*4)+(n9*3)+(dig1*2)) %11);
	if (resto2 < 2){
		dig2=0;
	} else{
		dig2 = 11 - resto2;
	}
	
	if (dig1 == n10 && dig2 == n11){
		printf("CPF Valido!");
	} else {
		printf("CPF Invalido!");
	}
	
	return 0;
}
