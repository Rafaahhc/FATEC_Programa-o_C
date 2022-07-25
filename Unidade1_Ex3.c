//Faça um programa que exibe a área de um triângulo retângulo a partir da base e da altura fornecidas pelo usuário
#include <stdio.h>
int main(void){
	int base, altura, area;
	scanf("%d", &base);
	scanf("%d", &altura);
	area = (base*altura)/2;
	printf("%d\n", area);
	return 0;
}