//Faça um programa que lê o salário atual de alguém e exibe o novo salário, que é o atual com 25% de aumento.
#include <stdio.h>
int main(void){
	float sal, nsal;
	scanf("%f", &sal);
	nsal = sal+(0.25*sal);
	printf("%.2f \n", nsal);
}