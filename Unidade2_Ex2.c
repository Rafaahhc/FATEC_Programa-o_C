//Faça um programa que recebe um número inteiro e exibe uma mensagem indicando se ele é par ou ímpar (use o operador % para obter o resto de uma divisão inteira).
#include <stdio.h>
int main(void){
	int num;
	scanf("%d", &num);
	if(num%2==0){
		printf("par\n");
	}
	else{
		printf("impar\n");
	}
	return 0;
}