//Faça um programa que lê o salário base de alguém e exibe o novo salário, considerando 5% de gratificação (mais dinheiro) e 7% de impostos (menos dinheiro) sobre o salário base. Também exiba a gratificação e o imposto.
#include <stdio.h>
int main(void){
	float sal, nsal, grat, imp;
	scanf("%f", &sal);
	grat = sal*0.05;
	imp = sal*0.07;
	nsal = sal + grat - imp;
	printf("novo: %.2f\ngratificacao: %.2f\nimposto: %.2f\n", nsal, grat, imp);
	return 0;
}