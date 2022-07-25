//Construa um programa que use uma função, criada por você, que recebe como parâmetros um vetor v de n inteiros e um inteiro x e retorne quantas vezes x ocorre em v. O programa deverá exibir o valor devolvido pela função.
#include <stdio.h>
void valida(int x, int n ){
	int v[n], i=0, c=0;
	while(i<n){
		scanf("%d", &v[i]);
			if(v[i]== x) c++;
		i++;
	}
	printf("%d", c);
}

int main(void){
	int qnts, num;
	scanf("%d", &num);
	scanf("%d", &qnts);
	valida(num,qnts);
	
}