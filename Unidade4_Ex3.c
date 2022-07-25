//Faça um programa que lê um vetor de cinquenta números inteiros e exibe, ao final, o menor valor lido
#include <stdio.h>
int main(void){
	int A[50],i,num;
	i=0;
	while(i<=49){
		scanf("%d", &A[i]);
		if(i==0) num=A[i];
		if(A[i]<=num) num = A[i];
		i++;
	}
	printf("%d\n", num);
}