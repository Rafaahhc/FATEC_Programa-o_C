//Faça um programa que recebe duas datas distintas e exibe a mais recente. Cada data deve ser fornecida como três valores inteiros, onde o primeiro representa o dia, o segundo o mês e o terceiro o ano. Dica: comece verificando pelo ano.
#include <stdio.h>
int main(void){
	int dia1, mes1, ano1;
	int dia2, mes2, ano2;

	scanf("%d", &dia1);
	scanf("%d", &mes1);
	scanf("%d", &ano1);
	scanf("%d", &dia2);
	scanf("%d", &mes2);
	scanf("%d", &ano2);

	if(ano1>ano2){
		printf("%d %d %d\n", dia1, mes1, ano1);
	}
	else if(ano2>ano1){
		printf("%d %d %d\n", dia2, mes2, ano2);
	}
	else{
		if(mes1>mes2){
			printf("%d %d %d\n", dia1, mes1, ano1);
		}
		else if(mes2>mes1){
			printf("%d %d %d\n", dia2, mes2, ano2);
		}
		else{
			if(dia1>dia2){
				printf("%d %d %d\n", dia1, mes1, ano1);
			}
			else if(dia2>dia1){
				printf("%d %d %d\n", dia2, mes2, ano2);
			}
		}
	}
}