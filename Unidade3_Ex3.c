//Faça um programa que lê um número natural e exibe o fatorial desse número. Lembre-se: 5! é 120, porque 5 * 4 * 3 * 2 * 1 = 120. Use um acumulador e um contador dentro de um laço de repetição
#include <stdio.h>
int main(void){
	int num, i, resultado;
	scanf("%d", &num);
	i = num;
	resultado = 1;
	while(i>0){
		resultado = resultado * i;
		i--;
	}
	if(i==0){
	printf("%d\n", resultado);
	}
}