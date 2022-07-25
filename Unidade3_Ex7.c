//Faça um programa que recebe valores inteiros positivos até que seja digitado o valor zero, que não deverá ser contabilizado. O programa deverá exibir o maior valor lido.
#include <stdio.h>
int main(void){
	int valor, comp, i;
	i=1;
	scanf("%d", &comp);
	valor=comp;
	while(i==1){
	scanf("%d", &comp);
		if(comp==0){
			i=0;
		}
		else if(comp>valor){
			valor=comp;
		}
	}
	printf("%d\n", valor);
	return 0;
}