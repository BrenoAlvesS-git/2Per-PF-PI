#include<stdio.h>
void main(){
    int quant, menores =0;
    float media = 0;

    struct atleta{
        char nome[50];
        int idade;
        float peso;
    };
    typedef struct atleta atleta;
    printf("Quantos atletas deseja registrar: ");
    scanf("%d",&quant);
    while (getchar() != '\n');
    atleta *vetor = malloc(sizeof(atleta)*quant);

    for(int x = 0; x<quant;x++){
        printf("\nDigite o nome do atleta %d:",x+1);
        scanf(" %49[^\n]",vetor[x].nome);
        while (getchar() != '\n');
        printf("\nDigite a idade do atleta %d: ",x+1);
        scanf("%d",&vetor[x].idade);
        printf("\nDigite o peso do atleta %d: ",x+1);
        scanf("%f",&vetor[x].peso);
        while (getchar() != '\n');
    }
    printf("Listagem dos atletas...\n");
    for(int x= 0; x<quant;x++){
        printf("Atleta %d: \n",x+1);
        printf("Nome: %s",vetor[x].nome);
        printf("\nIdade: %d",vetor[x].idade);
        printf("\nPeso: %.2f\n",vetor[x].peso);
        if(vetor[x].idade < 18){
            menores++;
        }
        media += vetor[x].peso;
    }
    printf("\nQuantidade de menores de idade: %d",menores);
    media = media/quant;
    printf("\nA media dos pesos foi: %.2f",media);
    free(vetor);
}