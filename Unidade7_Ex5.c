//Construa um programa que use uma função, criada por você, que recebe como parâmetro um número natural e retorne o valor inteiro 1 se o parâmetro for par, ou 0 caso contrário. O programa deverá exibir 'par' ou 'nao par', conforme o caso.
#include <stdio.h>
void valida(int a){
    int div;
    div = a%2;
	if(div==0){
	    printf("par");
	    return 1;
	}
	else {
	    printf("nao par"); 
	    return 0;
	}
}

int main(void){
	int c;
	scanf("%d", &c);
	valida(c);
}