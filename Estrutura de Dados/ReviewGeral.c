#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int dado;
    struct no *proxNo;
}No;

typedef struct{
    int tamanho;
    No *topo;
}Pilha;


void inicializar(Pilha *p){
    p->topo = NULL;
    p->tamanho = 0;
}


void empilhar(Pilha *p, int valor){
    No *novapilha = malloc(sizeof(No));
    if(novapilha){
    novapilha->dado = valor;
    novapilha->proxNo = p->topo;
    p->topo = novapilha;
    p->tamanho++;
    }else{
        printf("Erro ao alocar memoria");
    }
}

int desempilhar(Pilha *p){
    if(p->topo == NULL){
        printf("PILHA VAZIA\n");
        return 1;
    }
    int valor;
    No *remover = p->topo;
    p->topo = remover->proxNo;
    valor = remover->dado;
    free(remover);
    p->tamanho--;
    return valor;
}


int mostraTopo(Pilha *p){
    if(p->topo == NULL){
        printf("Pilha vaiza");
        return 1;
    }else{
        return p->topo->dado;
    }

}

void esvaziaPilha(Pilha *p){
    if(p->topo == NULL)
        printf("Pilha já vazia");
    while(p->topo != NULL){
        p->topo = NULL;
        p->topo = p->topo->proxNo;
    }
    printf("Pilha esvaziada\n");
}

