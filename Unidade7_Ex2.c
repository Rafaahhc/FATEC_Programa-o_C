//Construa um programa que use uma função, criada por você, que verifique se um número inteiro passado como parâmetro é menor do que zero. A função deverá retornar o valor inteiro 1 indicando verdadeiro ou 0 indicando falso. O programa deverá usar o valor de retorno da função para exibir 'menor' ou 'nao menor', de acordo com o caso
#include <stdio.h>
void valida(int a){
	if(a<0){
	    printf("menor");
	    return 1;
	}
	else {
	    printf("nao menor"); 
	    return 0;
	}
}

int main(void){
	int c;
	scanf("%d", &c);
	valida(c);
}