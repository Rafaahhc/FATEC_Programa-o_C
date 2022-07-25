//Certa pessoa (A) possui R$ 10.000,00 e tem sua fortuna crescendo em R$ 100,00 por mês. Outra pessoa (B) tem sua fortuna crescendo em R$ 300,00 ao mês e possui R$ 5.000,00. Faça um programa que exibe, mês a mês, a diferença das duas fortunas até que a pessoa (B) tenha mais dinheiro do que a pessoa (A).
#include <stdio.h>
int main(void){
	float dinheiroA, dinheiroB, diferenca;
	dinheiroA=10000;
	dinheiroB=5000;
	diferenca=1;
	while(diferenca>0){
	diferenca=dinheiroA-dinheiroB;
	dinheiroA=dinheiroA+100;
	dinheiroB=dinheiroB+300;
	printf("%.2f\n",diferenca);
	}
}
	