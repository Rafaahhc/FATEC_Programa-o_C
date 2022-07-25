/*[while] Elabore um programa que recebe valores inteiros até que seja digitado o valor zero. O programa deverá exibir a média aritmética dos valores recebidos. Lembre-se: o valor zero apenas sinaliza o fim da entrada, não deve ser contabilizado.

Obs.: Não existe média sem que pelo menos um valor seja dado antes do zero, portanto neste problema ESTÁ GARANTIDO QUE HÁ MÉDIA.*/

#include <stdio.h>
int i, valor[10], cont, resp, a;
int main(void){
	a=1;
	cont=0;
	resp=0;
	while(a==1){
		scanf("%d", &i);
		if(i!=0){
				valor[cont] = i;
				resp = resp+valor[cont];
				cont++;
		}
		else{
			a = 0;
		}
	}
	if(cont>0){
		resp = resp/cont;
		printf("%d\n", resp);
	}
}