#include<stdio.h>
#include<string.h>

#define TAM 50

struct pessoa{
    int idade;
    float peso;
    char nome[TAM];
};
typedef struct pessoa pessoa;

void main(){
    pessoa sala[3];

    for(int x=0; x<3;x++){
        printf("Digite o nome da %d pessoa: ",x+1);
        scanf("%49[^\n]s",&sala[x].nome);
        
        printf("\nDigite a idade: ");
        scanf("%d",&sala[x].idade);

        printf("\nDigite o peso: ");
        scanf("%.2f",&sala[x].peso);
        fflush(stdin);
    }
    printf("\nFORAM DIGITADAS AS SEGUINTES PESSOAS DA SALA\n");
    for(int y= 0; y<3; y++){
        printf("%s\n",sala[y].nome);
        printf("%d\n",sala[y].idade);
        printf("%.2f\n",sala[y].peso);
        printf("\n");
    }
}