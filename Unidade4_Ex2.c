//Faça um programa que preenche um vetor com cinquenta elementos inteiros e altera todo valor negativo para seu oposto positivo, ao final o programa deve exibir o vetor já modificado.
#include <stdio.h>
int main(void){
	int A[50],i,num;
	i=0;
	while(i<=49){
		scanf("%d", &num);
			if(num<0) num = -(num);
		A[i]=num;
		printf("%d\n", A[i]);
		i++;
	}
}