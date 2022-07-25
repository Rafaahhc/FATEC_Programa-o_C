/*
Faça um programa que ajude em nossas eleições. 
O programa deve permitir o cadastro de cinco candidatos (número, nome e sigla do partido) inseridos pelo 
usuário e, depois do cadastro, que os usuários possam votar em um dos candidatos por meio do respectivo 
número. Ao final, quando o número zero for digitado, apresentar os dados de todos os candidatos,
conforme a sequência de cadastro, e suas respectivas quantidades de votos.
*/
#include <stdio.h>
int main(void){
    int i=0, j=0, comp=0, contador[5];
    typedef struct{
        int numero;
        char nome[20], partido[4];
    }candidatos;
    candidatos primeiro, segundo, terceiro, quarto, quinto;
    while(i<5){
        if(i==0){
            scanf("%d", &primeiro.numero);
            scanf("%s", &primeiro.nome);
            scanf("%s", &primeiro.partido);
        }
        if(i==1){
            scanf("%d", &segundo.numero);
            scanf("%s", &segundo.nome);
            scanf("%s", &segundo.partido);
        }
        if(i==2){
            scanf("%d", &terceiro.numero);
            scanf("%s", &terceiro.nome);
            scanf("%s", &terceiro.partido);
        }
        if(i==3){
            scanf("%d", &quarto.numero);
            scanf("%s", &quarto.nome);
            scanf("%s", &quarto.partido);
        }
        if(i==4){
            scanf("%d", &quinto.numero);
            scanf("%s", &quinto.nome);
            scanf("%s", &quinto.partido);
        }
        i++;
    }
    i=0;
    while(i<5){
        contador[i]=0;
        i++;
    }
    i=0;
    do{
        scanf("%d", &comp);
            if(comp == primeiro.numero) contador[0]++;
            else if(comp == segundo.numero) contador[1]++;
            else if(comp == terceiro.numero) contador[2]++;
            else if(comp == quarto.numero) contador[3]++;
            else if(comp == quinto.numero) contador[4]++;
            else comp=comp;
    } while(comp!=0);
    
    printf("%s %d %s: %d\n", primeiro.partido, primeiro.numero, primeiro.nome, contador[0]);
    printf("%s %d %s: %d\n", segundo.partido, segundo.numero, segundo.nome, contador[1]);
    printf("%s %d %s: %d\n", terceiro.partido, terceiro.numero, terceiro.nome, contador[2]);
    printf("%s %d %s: %d\n", quarto.partido, quarto.numero, quarto.nome, contador[3]);
    printf("%s %d %s: %d\n", quinto.partido, quinto.numero, quinto.nome, contador[4]);
}