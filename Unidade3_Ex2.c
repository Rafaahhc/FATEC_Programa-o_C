//[for] Desenvolva um programa que exibe a tabuada de um número natural escolhido pelo usuário. Os múltiplos apresentados devem ser de 1 a 10.
#include <stdio.h>
int main(void){
	int num, i, resultado;
	i = 1;
	scanf("%d", &num);
	while(i <= 10){
		resultado = num * i;
		printf("%d x %d = %d\n", num, i, resultado);
		i++;
	}
	return 0;
}