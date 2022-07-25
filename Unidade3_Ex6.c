//Sendo H = 1 + (1/2) + (1/3) + (1/4) + (1/5) + ... + (1/n), faça um programa que exibe o valor de H após ler n (n > 0). Observação: use uma variável de ponto flutuante de precisão dupla (double).
#include <stdio.h>
int main(void){
	float num, resultado;
	float n, cont;
	scanf("%f", &n);
	resultado=1;
	for(cont=n; cont>=2; cont--){
		num=(1/cont);
		resultado=resultado+num;
	}
	printf("%.2f\n", resultado);
	return 0;
}