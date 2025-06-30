#include<stdio.h>
#include<stdlib.h>

typedef struct no{
    int dado;
    struct no *proxNo;
    struct no *anteriorNo;
}No;

typedef struct{
    No *incio;
    No *fim;
}Lista;


void inicializar(Lista *lista){
    lista->incio = NULL;
    lista->fim = NULL;
}

void insereInicio(Lista *lista, int valor){
    No *novoNo = malloc(sizeof(No));
    if(novoNo){
        novoNo->dado = valor;
        novoNo->anteriorNo = NULL;
        novoNo->proxNo = lista->incio;
        if(lista->incio == NULL){
            lista->fim = novoNo;
        }else{
            lista->incio->anteriorNo = novoNo;
        }
    }else{
        printf("Erro ao alocar memoria\n");
    }

}

void insereFim(Lista *lista, int valor){
    No *novoNo = malloc(sizeof(No));
    if(novoNo){
        novoNo->dado = valor;
        novoNo->proxNo = NULL;
        if(lista->incio == NULL){
            insereInicio(lista, valor);
            return;
        }else{
            novoNo->anteriorNo = lista->fim;
            lista->fim->proxNo = novoNo;
            lista->fim = novoNo;   
        }
    }else{
        printf("Erro ao alocar memória");
    }

}