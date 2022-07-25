//Faça um programa que recebe dois números inteiros distintos e exibe o maior.
#include <stdio.h>
int main(void){
	int num1, num2;
	scanf("%d", &num1);
	scanf("%d", &num2);
	if(num1>num2){
	printf("%d", num1);
	}
	else{
	printf("%d\n", num2);
	}
}