//Faça um programa que solicite ao usuário os valores de duas matrizes 6 × 6 e que exibe a matriz resultante da soma dessas matrizes
#include <stdio.h>
int main(void){
	int m1[6][6], m2[6][6], i=0, j=0, soma[6][6];
	//i � linha
	//j � coluna
	while(i<=5){
		while(j<=5){
			scanf("%d", &m1[i][j]);
			j++;
		}
		j=0;
		i++;
	}
	i=0; j=0;
	while(i<=5){
		while(j<=5){
			scanf("%d", &m2[i][j]);
			j++;
		}
		j=0;
		i++;
	}
	i=0; j=0;
	while(i<=5){
		while(j<=5){
			soma[i][j]=(m1[i][j])+(m2[i][j]);
			j++;
		}
		j=0;
		i++;
	}
	i=0; j=0;
	while(i<=5){
		while(j<=5){ 
			if(j==5) printf("%d", soma[i][j]);
			else printf("%d ", soma[i][j]);
			j++;
		}
		j=0;
		printf("\n");
		i++;
	}
}