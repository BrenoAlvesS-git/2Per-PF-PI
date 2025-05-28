#include <stdio.h>
#include <stdlib.h>

int quantElem = 0;
int maximo = 0;

/* Função que cria uma lista vazia com N elementos e retorna um ponteiro para a lista criada*/
int* criaLista(){
int *vetor;
vetor = malloc(maximo*sizeof(int));
if(!vetor){
    printf("\nOcorreu um erro! A memoria não foi alocada.");
    exit(1);
}
return vetor;
}

/* Função que faz inserção não ordenada no vetor*/
int insereNaoOrd(int *vetor){
if(quantElem < maximo){
   printf("\nDigite um numero inteiro:");
   scanf("%d",&vetor[quantElem++]);
   return 1;
}
else
   return 0;
}

/*Função que faz inserção ordenada no vetor*/
int insereOrd(int *vetor){
    if (quantElem >= maximo){
        printf("Vetor cheio, não é possivel adicionar nenhum valor");
        return -1;
    }
    int x = *vetor - 1;
    while (x >= 0 && vetor[x] > quantElem){
        vetor[x+1] = vetor[x];
        x--;
    }
    vetor[x+1]= quantElem;
    
}

/*Função que faz pesquisa sequencial*/
int pesqSeq(int *vetor, int elemento){
for(int x = 0; x < quantElem; x++)
    if(elemento == vetor[x])
       return x;
return -1;
}

/*Pesquisa binaria*/
int pesqBin(int *vetor, int elemento,int valor){
    int inicio = 0;
    int fim = elemento - 1;
    while(inicio <= fim){
        int meio = (inicio + fim)/2;
    
    if (vetor[meio] == valor){
        return meio;
    }else if(vetor[meio]< valor){
        inicio = meio+1;
    }else{
        fim = meio - 1;
    }
}
    return -1;
}

/*Função que exibe os elementos do vetor*/
void mostraVetor(int *vetor){
printf("\nConteudo do vetor:");
for(int x = 0; x<quantElem; x++)
    printf("%5d",vetor[x]);
}


/*Função que faz a remoção de vetor não ordenado*/
int remocaoNaoOrd(int *vetor,int elemento){
int resp = pesqSeq(vetor, elemento);
if(resp != -1){
    vetor[resp] = vetor[quantElem - 1];
    quantElem--;
    return 1;
    }
return 0;
}


void main(){

int *lista, aux, resp, op;
printf("\nDigite quantos elementos deseja ter na lista:");
scanf("%d",&maximo);
lista = criaLista();

do{
        printf("\n\n\nEscolha uma opcao\n1 - Inserção nao ordenada\n2 - Pesquisa sequencial");
        printf("\n3 - Remocao nao ordenada\n4-inserçao ordenada\n5-Pesquisa binaria\n");
        printf("9 - Exibir lista \n0 - Sair do programa");
        printf("\nDigite sua opcao: ");
        scanf("%d",&op);
        switch(op){
        case 1: if(!insereNaoOrd(lista))
                    printf("\nLista cheia. Insercao nao realizada.");
                else
                    printf("\nElemento inserido com sucesso");
                break;
        case 2: printf("\nDigite o elemento que deseja procurar:");
                scanf("%d",&aux);
                resp = pesqSeq(lista, aux);
                if(resp == -1)
                    printf("\nElemento nao encontrado");
                else
                    printf("\nElemento encontrado na posicao %d do vetor.",resp);
                break;
        case 3: printf("\nDigite o elemento que deseja remover:");
                scanf("%d",&aux);
                if(remocaoNaoOrd(lista,aux))
                    printf("\nElemento removido com sucesso.");
                else
                    printf("\nFalha na remoção do elemento.");
                break;
        case 4:
            printf("Digite o numeor que deseja adicionar: ");
            scanf("%d",*lista);
            resp = insereOrd(*lista);
            break;
        case 5:
            printf("Que numero deseja pesquisar: ");
            scanf("%d", &aux);
            resp = pesqBin(*lista, quantElem, aux);
            break;
        case 9: mostraVetor(lista);
                break;
        case 0: printf("\nEncerrando programa.");
        default: printf("\n\nOpcao indisponivel. Selecione uma nova opcao.");
        }
}while(op !=0);


free(lista); /*Libera memória alocada para a lista*/
}