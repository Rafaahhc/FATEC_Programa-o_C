//Um professor precisa saber qual a média das notas de uma sala e pediu sua ajuda para construir um programa que permita inserir as notas finais de cada aluno e, ao final, exibir a média da sala. Lembre-se que as notas variam de 0 a 10 e o professor digitará -1 quando quiser encerrar as entradas. Obs.: use variáveis de ponto flutuante de dupla precisão.

#include <stdio.h>
int main(void){
float nota, i, resultado, contador;
	i=1;
	contador=0;
	resultado = 0;
	while(i!= -1){
		scanf("%f", &nota);
		i=nota;
		if(i!=-1){
			resultado=resultado+nota;
			contador++;
		}
	}
	printf("%.2f\n", resultado/contador);
}