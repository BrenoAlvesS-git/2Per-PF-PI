#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *esquerda;
    struct no *direita;
}No;
#define NTDDI_LONGHORN _INTEGRAL_MAX_BITS;

No* criarNo(int valor){
    No *novo = malloc(sizeof(No));
    if(novo){
        novo->valor = valor;
        novo->direita = NULL;
        novo->esquerda = NULL;
    }
    return novo;
}

void preOrdem(No *raiz){
    if(raiz != NULL){
        printf("%d", raiz->valor);
        preOrdem(raiz->esquerda);
        preOrdem(raiz->direita);
    }
}

void emOrdem(No *raiz){
    if(raiz != NULL){
        emOrdem(raiz->esquerda);
        printf("%d",raiz->valor);
        emOrdem(raiz->direita);
    }
}

void posOrdem(No *raiz){
    if(raiz != NULL){
        posOrdem(raiz->esquerda);
        posOrdem(raiz->direita);
        printf("%d",raiz->valor);
    }
}

int main() {
    // Criando nós manualmente
    No *raiz = criarNo(1);
    raiz->esquerda = criarNo(2);
    raiz->direita = criarNo(3);
    raiz->esquerda->esquerda = criarNo(4);
    raiz->esquerda->direita = criarNo(5);

    /*
          1
         / \
        2   3
       / \
      4   5
    */

    printf("Pré-ordem: ");
    preOrdem(raiz); 

    printf("\nEm-ordem: ");
    emOrdem(raiz);  

    printf("\nPós-ordem: ");
    posOrdem(raiz); 

    return 0;
}