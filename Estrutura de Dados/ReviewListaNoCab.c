#include<stdio.h>
#include<stdlib.h>



typedef struct no{
    int valor;
    struct no *proximo;
}No;
typedef struct{
    No *inicio;
    int tam;
}Lista;

void InicializarLista(Lista *lista){
    lista->inicio = NULL;
    lista->tam = 0;
}

void insere_no_inicio(Lista *lista, int num){
    No *novo = malloc(sizeof(No));
    if (novo){
        novo->valor = num;
        novo->proximo = lista->inicio;
        lista->inicio = novo;
        lista->tam++;
    }else{
        printf("Erro ao alocar memoria");
    }
}

void insere_fim(Lista *lista, int num){
    No *aux, *novo = malloc(sizeof(No));
    if(novo){
        novo->valor = num;
        novo->proximo = NULL;
        
        if(lista->inicio == NULL){
            lista->inicio = novo;
            
        }else{
            aux = lista->inicio;
            while(aux->proximo != NULL){
                aux = aux->proximo;
            }
            aux->proximo = novo;
        }
        lista->tam++;
    }else{
        printf("Erro ao alocar memoria");
    }
}

void insere_Meio(Lista *lista, int valor, int ref){
    No *aux, *novo = malloc(sizeof(No));
    if (novo){
        novo->valor = valor;
        if(lista->inicio == NULL){
            novo->proximo = NULL;
            lista->inicio = novo;
        }else{
            aux = lista->inicio;
            while(aux->valor != ref && aux->proximo != NULL){
                aux = aux->proximo;
            }
            novo->proximo = aux->proximo;
            aux->proximo = novo;

        }
        lista->tam++;
    }else{
        printf("Erro ao alocar memoria");
    }
    
}


void imprimir(Lista lista){
    No *no = lista.inicio;
    printf("\n\tLista tam %d: ",lista.tam);
    while(no){
        printf("%d ",no->valor);
        no = no->proximo;
    }
    printf("\n\n");

}


int main(){
    return 1;
}