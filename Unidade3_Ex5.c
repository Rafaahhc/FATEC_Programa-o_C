//Faça um programa que lê cem idades de pacientes e exibe as idades do mais novo e do mais velho.
#include <stdio.h>
int main(void){
	int num1, num2, compara, i;
		num1=0;
		num2=0;
	for(i=0; i<=99; i++){
		scanf("%d", &compara);
			if(i==1){
				num1=compara;
			}
			else{
 				if(compara<num1){
					num1=compara;
				}
				else if(compara>num2 && compara>num1){
					num2=compara;
				}
				else compara=0;
			}
	}
	if(i==100){
		printf("mais novo: %d\n", num1);
		printf("mais velho: %d\n", num2);
	}
}