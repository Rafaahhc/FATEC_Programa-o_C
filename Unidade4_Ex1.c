//Faça um programa que preenche um vetor com 10 números inteiros dados pelo usuário e, ao final, exibe os itens do vetor em ordem contrária à da entrada.
#include <stdio.h>
int main(void){
	int A[10],i;
	i=0;
	while(i<=9){
		scanf("%d", &A[i]);
		i++;
	}
	i--;
	while(i>=0 && i<=9){
		printf("%d\n", A[i]);
		i--;
	}
	return 0;
	
}