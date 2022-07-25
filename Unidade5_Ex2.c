//Faça um programa que recebe duas matrizes de inteiros (com dimensões escolhidas pelo usuário, porém no máximo 25 × 25) e multiplique-as em uma terceira matriz que será exibida ao final. O programa deve verificar se é possível realizar a multiplicação das matrizes e, caso não seja, exibe a mensagem "impossivel multiplicar".
#include <stdio.h>
int L1=2,C1=2,L2=0,C2=0,linha=0,coluna=0,multiplicacao=0;
int main() {
    scanf("%d %d",&L1, &C1);
    scanf("%d %d",&L2, &C2);
    if(C1==L2 && C1<26 && L1<26 && C2<26 && L2<26){

    int A[L1][C1];
    int B[L2][C2];
    int mat3[L1][C2];
    
    for(int i=0;i<L1; i++){
        for(int j=0; j<C1; j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int k=0;k<L2; k++){
        for(int l=0; l<C2; l++){
            scanf("%d",&B[k][l]);
        }
    }
   
    for(linha=0; linha<L1; linha++) 
        for(coluna=0; coluna<C2; coluna++){ 
          multiplicacao=0;
            for(int i=0; i<L2; i++) multiplicacao+=A[linha][i]*B[i][coluna]; 
                mat3[linha][coluna]=multiplicacao;
        }

    for(linha=0; linha<L1; linha++){
        for(coluna=0; coluna<C2; coluna++){
          if(coluna==C2-1) printf("%d", mat3[linha][coluna]);
          else printf("%d ", mat3[linha][coluna]);
        }
        printf("\n");
      }
        
    }else if(C1!=L2){
        printf("impossivel multiplicar");
    }   
	return 0;
}