#include<stdio.h>
#include<stdlib.h>

typedef struct no{
    int valor;
    struct no *prox;
}No;

typedef struct{
    No *cabeça;
    int tamanho;
}Lista;

void iniciarListaC(Lista *lista){
    lista->cabeça = malloc(sizeof(No));
    if(lista->cabeça){
        lista->cabeça->prox = lista->cabeça; //Aponta pra si mesmo caso lista esteja vazia
        lista->tamanho = 0;
    }else{
        printf("Erro ao alocar memoria");
    }
}

void insereFim(Lista *lista, int valor){
    No *novo = malloc(sizeof(No));
    if(novo){
        novo->valor = valor;
        No *aux =lista->cabeça; //define um aux pra percorrer a lista

        while(aux->prox != lista->cabeça){ // Percorre a lista
            aux=aux->prox; 
        }
        novo->prox = lista->cabeça; //novo nó aponta pra cabeça
        aux->prox = novo;           //ultimo nó aponta para o novo nó
        lista->tamanho++;
    }else{
        printf("Erro ao alocar memoria");
    }
}

void exibirElem(Lista *lista){
    if(lista->tamanho == 0){
        printf("Lista vazia\n");
        return;
    }
    No *aux = lista->cabeça->prox;
    printf("Lista: ");

    while(aux != lista->cabeça){
        printf("%d \n",aux->valor);
        aux = aux->prox;
    }
}

void insercaoInicio(Lista *lista, int valor){
    No *novoNo = malloc(sizeof(No));
    if(novoNo){
        novoNo->valor = valor;
        novoNo->prox = lista->cabeça->prox; //aponta para o antigo primeiro nó
        lista->cabeça->prox = novoNo;       //cabeça agora aponta pro novo nó
        lista->tamanho++;
    }else{
        printf("Erro ao alocar memoria");

    }
}