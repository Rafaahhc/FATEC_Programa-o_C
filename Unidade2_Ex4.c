//Faça um programa que recebe o valor de três arestas (número inteiro) e exibe uma mensagem indicando se podem formar um triângulo. Em caso afirmativo, indique se ele é equilátero, isósceles ou escaleno. Lembre-se: Para que um triângulo exista, a medida de qualquer um dos lados deve ser menor que a soma das medidas dos outros dois.
#include <stdio.h>
int main(void){
int lado1, lado2, lado3;
	scanf("%d", &lado1);
	scanf("%d", &lado2);
	scanf("%d", &lado3);

	if(lado1>=lado2+lado3 || lado2>=lado1+lado3 || lado3>=lado1+lado2){
		printf("nao podem formar um triangulo\n");
	}
	else{
		printf("podem formar um triangulo\n");
		if(lado1==lado2 && lado2==lado3){
		printf("equilatero\n");
		}
		else if(lado1!=lado2 && lado2!=lado3){
		printf("escaleno\n");
		}
		else printf("isosceles\n");
	}
}