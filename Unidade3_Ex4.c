//Faça um programa que exibe n^m (n elevado a m), considerando n (real) e m (natural) dados pelo usuário. Não usar funções prontas da linguagem para o cálculo de potência.
#include <stdio.h>
int main(void){
	float num, resultado;
	int i;
		scanf("%f", &num);
		scanf("%d", &i);
	resultado = 1;
		while(i>0){
			resultado = resultado * num;
			i--;
		}
	if(i==0){
	printf("%.2f\n", resultado);
	}
	
}