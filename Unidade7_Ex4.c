//Construa um programa que use uma função, criada por você, que recebe como parâmetros quatro números reais distintos e retorne o maior. O programa deverá exibir o valor devolvido pela função.
#include <stdio.h>
void valida(float a, float b, float c, float d){
	if(a>=b && a>=c && a>=d) printf("%.2f", a);
	else if(b>=a && b>=c && b>=d) printf("%.2f", b);
	else if(c>=a && c>=b && c>=d) printf("%.2f", c);
	else printf("%.2f", d);
}

int main(void){
	float g, h, i, j;
	scanf("%f", &g);
	scanf("%f", &h);
	scanf("%f", &i);
	scanf("%f", &j);
	
	valida(g,h,i,j);
}