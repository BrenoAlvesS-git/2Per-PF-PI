#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct aluno{
    char nome[50];
    int matricula;
    float media;
};
typedef struct aluno aluno;

int ordemalfabetica(const void* a, const void* b);

int main(){ 
    int quant, escolha;
    float sort;

    printf("Quantos alunos deseja registrar: ");
    scanf("%d",&quant);
    while(getchar() != '\n');
    aluno *alunos = malloc(sizeof(aluno)*quant);

    for(int x = 0; x < quant; x++){
        printf("\nDigite o nome do aluno %d: ", x+1);
        scanf(" %[^\n]", alunos[x].nome);
        while(getchar() != '\n');
        printf("Digite a matricula do aluno %d: ", x+1);
        scanf("%d", &alunos[x].matricula);
        while(getchar() != '\n');
        printf("Digite a media do aluno %d: ", x+1);
        scanf("%f", &alunos[x].media);
        while(getchar() != '\n');
    }

    do{
        printf("\nO que deseja fazer?\n");
        printf("1-Ver listagem por ordem alfabetica\n");
        printf("2-Ver listagem por classificacao\n");
        printf("1234-SAIR\n");
        printf("Escolha: ");
        scanf("%d", &escolha);
        while(getchar() != '\n');

    
        switch (escolha){
        case 1:
                qsort(alunos,quant,sizeof(aluno),ordemalfabetica); 
                printf("\n----LISTA EM ORDEM ALFABETICA----\n");
                for (int x=0;x<quant;x++) {
                    printf("%s - Matricula: %d - Media: %f\n",alunos[x].nome, alunos[x].matricula, alunos[x].media);
                }
            break;
        case 2:
            for(int x = 0; x < quant-1; x++){
                for(int y = 0; y < quant-1-x; y++){  
                    if(alunos[y].media < alunos[y+1].media){ 
                        aluno aux = alunos[y];
                        alunos[y] = alunos[y+1];
                        alunos[y+1] = aux;
                    }
                }
            } 

            printf("\nALUNOS POR ORDEM DE CLASSIFICACAO: \n");
            for(int x = 0; x < quant; x++){
                printf("\nNome: %s", alunos[x].nome);
                printf("\nMatricula: %d", alunos[x].matricula);
                printf("\nMedia: %.2f\n", alunos[x].media);
            }
            break;
        case 1234:
            printf("\nSaindo do programa...\n");
            break;
        default:
            printf("\nESCOLHA INVALIDA\n");
            break;
        }
        
    } while (escolha != 1234);
    
    free(alunos); 
    return 0;   
}

int ordemalfabetica(const void* a, const void* b) {
    aluno* alunoa = (aluno*)a; 
    aluno* alunob = (aluno*)b;
    return strcmp(alunoa->nome,alunob->nome);
}
