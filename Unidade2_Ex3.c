//Faça um programa que mostre um menu com as opções "adição", "subtração", "multiplicação" e "divisão", recebe dois valores reais, a operação escolhida pelo usuário e exibe o resultado da operação sobre os valores.
#include <stdio.h>
int main(void){
	float num1, num2;
	int op;
	printf("1: adicao / 2: subtracao / 3: multiplicacao / 4: divisao\n");
	scanf("%d", &op);
	scanf("%f", &num1);
	scanf("%f", &num2);
	if(op==1){
		printf("A adicao eh: %.2f\n", num1+num2);
	}
	else if(op==2){
		printf("A subtracao eh: %.2f\n", num1-num2);
	}
	else if(op==3){
		printf("A multiplicacao eh: %.2f\n", num1*num2);
	}
	else if(op==4){
		printf("A divisao eh: %.2f\n", num1/num2);
	}
	return 0;
}
