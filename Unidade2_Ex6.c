//Faça um programa que recebe a idade de um nadador e exibe a categoria que ele pertence. Sendo o critério: "infantil" (0 a 10 anos); "junior" (11 a 14 anos); "adolescente" (15 a 20 anos); "jovem" (21 a 35 anos) e; "master" (> 35 anos). 
#include <stdio.h>
int main(void){
	int idade;
	scanf("%d", &idade);
	if(0<=idade && idade<=10){
		printf("infantil\n");
	}
	else if(11<=idade&& idade<=14){
		printf("junior\n");
	}
	else if(15<=idade && idade<=20){
		printf("adolescente\n");
	}
	else if(21<=idade && idade<=35){
		printf("jovem\n");
	}
	else if(idade>35){
		printf("master\n");
	}

}