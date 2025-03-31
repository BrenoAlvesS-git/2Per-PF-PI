//QUESTÃO 1
/*
#define v 4
int matriz(int matriz[v][v]){

}
#include<stdio.h>
void main(){
    int mat1[v][v], mat2[v][v];
    for(int x = 0; x<v;x++){
        for(int y = 0; y<v;y++){
            printf("Digite o valor [%d] [%d] da matriz 1: ",x, y);
            scanf("%d",&mat1[x][y]);
        }
    }
    for(int x = 0; x<v;x++){
        for(int y = 0; y<v;y++){
            printf("Digite o valor [%d] [%d] da matriz 2: ",x, y);
            scanf("%d",&mat2[x][y]);
        }
    }
    printf("Valor da soma das matrizes:");
    for(int x = 0; x<v;x++){
        for(int y = 0; y<v;y++){
            printf("|");
            printf("\n%d",mat1[x][y] + mat2[x][y]);
        }
        printf("|");
    }
}
*/

//QUESTÃO 4

struct aluno{
    int notas[4];
    char nome[50];
    float media;
};
typedef struct aluno aluno;

#include<stdio.h>

void main(){
int quant;

printf("\nQuantos alunos deseja adicionar (MAX 50): ");
scanf("%d",&quant);
fflush(stdin);
if(quant > 50){
    printf("Valor maior que 50");
    exit(1);
}

aluno sala[quant];

for(int x = 0; x<quant ;x++){
    printf("\nDigite o nome do %d aluno: ",x+1);
    scanf("%49[^\n]s",&sala[x].nome);
    fflush(stdin);
    sala[x].media = 0;

    for(int i = 0; i<4;i++){
    printf("\nQual a %d nota desse aluno: ",i+1);
    scanf("%d",&sala[x].notas[i]);
    fflush(stdin);
    sala[x].media += sala[x].notas[i];
    }
    sala[x].media /= 4;
}

printf("---------Dados e Media---------");
for(int y = 0; y < quant; y++){
    printf("\nNome:%s ---- Media: %.2f",sala[y].nome,sala[y].media );
}

printf("\n---------Fim do algoritmo---------");


}