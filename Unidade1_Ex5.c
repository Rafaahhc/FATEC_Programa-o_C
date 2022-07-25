//Faça um programa que recebe duas notas e exibe a média ponderada dessas notas, considerando peso dois para a primeira e peso três para a segunda
#include <stdio.h>
int main(void){
	float nota1, nota2, media;
	scanf("%f", &nota1);
	scanf("%f", &nota2);
	media =(nota1*2+nota2*3)/5;
	printf("%.2f\n", media);
	return 0;
}