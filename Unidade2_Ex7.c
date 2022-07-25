//Uma empresa decide presentear seus funcionários com um bônus de Natal. O valor é definido como segue: 

//(a) 20% do salário para os funcionários homens com mais de quinze anos de casa;

//(b) 25% do salário para as funcionárias mulheres com mais de dez anos de casa;

//(c) R$ 200,00 para os demais que não se encaixaram nas categorias anteriores. 

Elabore um programa que recebe o sexo, o tempo de casa e o salário de um funcionário e exibe o valor total que o funcionário receberá no Natal (salário + bônus).

#include <stdio.h>
int main(void){
	char sexo; 
	int tempo;
	float bonus, sal;

	scanf("%c", &sexo);
	scanf("%d", &tempo);
	scanf("%f", &sal);

	if(sexo=='h' && tempo>15){
			bonus=sal*0.20+sal;
			printf("%.2f\n", bonus);
	}
	else if(sexo=='m' && tempo>10){
			bonus=sal*0.25+sal;
			printf("%.2f\n", bonus);
	}
	else{
	bonus=sal+200; 
	printf("%.2f\n", bonus);
	}
}