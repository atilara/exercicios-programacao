#include <stdio.h>

/* 
Faça um programa que receba um inteiro de 1-12 e imprima o mês correspondente a esse número ou imprima “Valor inválido!” caso o número não esteja no intervalo. 
Use switch-case;
*/

int main(void) {
	int numeroMes;
  	printf("Informe o mês: ");
	scanf("%i", &numeroMes);
	switch (numeroMes) {
		case 1:
			printf("Janeiro");
		break;
		case 2:
			printf("Fevereiro");
		break;
		case 3:
			printf("Março");
		break;
		case 4:
			printf("Abril");
		break;
		case 5:
			printf("Maio");
		break;
		case 6:
			printf("Junho");
		break;
		case 7:
			printf("Julho");
		break;
		case 8:
			printf("Agosto");
		break;
		case 9:
			printf("Setembro");
		break;
		case 10:
			printf("Outubro");
		break;
		case 11:
			printf("Novembro");
		break;
		case 12:
			printf("Dezembro");
		break;
		default:
			printf("Inválido!");
		break;
	}
	return 0;
}