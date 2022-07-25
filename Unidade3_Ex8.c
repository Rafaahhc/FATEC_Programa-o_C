//Uma empresa está fazendo uma pesquisa, ligando para telespectadores e perguntando qual canal de televisão (4, 5 ou 9) eles estão assistindo. A cada ligação a resposta é registrada em um software. No final do dia, alguém digita zero e os canais com seus respectivos votos são exibidos em ordem decrescente. Construa esse software. Obs.: Considere que não haverá empate.
#include <stdio.h>
int main(void){
int ped,n1=0,n2=0,n3=0, i=1;

	while(i!=0){
		scanf("%d",&ped);
		i=ped;
		if(ped==4) n1++;
		else if(ped==5) n2++;
		else if(ped==9) n3++;
	}
		if(n1>n2 && n2>n3)  printf("canal 4: %d\ncanal 5: %d\ncanal 9: %d\n", n1,n2,n3);
		else if(n2>n1 && n1>n3) printf("canal 5: %d\ncanal 4: %d\ncanal 9: %d\n", n2,n1,n3);
		else if(n3>n2 && n1>n2) printf("canal 9: %d\ncanal 4: %d\ncanal 5: %d\n", n3,n1,n2);
		else if(n3>n2 && n2>n1)printf("canal 9: %d\ncanal 5: %d\ncanal 4: %d\n", n3,n2,n1);
		else if(n1>n3 && n3>n2) printf("canal 4: %d\ncanal 9: %d\ncanal 5: %d\n", n1,n3,n2);
		else if(n2>n3 && n3>n1) printf("canal 5: %d\ncanal 9: %d\ncanal 4: %d\n", n2,n3,n1);

	 return 0;
}
	