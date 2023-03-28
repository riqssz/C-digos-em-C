#include <stdio.h>

int main()
{
	float n1,n2,res;
	int oper;
	
	printf("CALCULADORA!!\n");
	printf("Digite o primeiro numero:");
	scanf("%f",&n1); 
	
	printf("Digite o segundo numero:");
	scanf("%f",&n2);
	
	printf("Qual operacao deseja fazer?\n");
	printf("1-Soma\n");
	printf("2-Multiplicacao\n");
	printf("3-Subtracao\n");
	printf("4-Divisao\n");
	scanf("%d",&oper); 
	
	switch ("%d",oper)
	{
		case 1 :
			res = n1 + n2;
			break;
			
		case 2 :
			res = n1 * n2; 
			break;
			
		case 3 :
			res= n1 - n2;
			break;
			
		case 4 :
			res = n1 / n2;
			break;
	}
	printf("Resultado: %f\n", res);
	return 0;
}
