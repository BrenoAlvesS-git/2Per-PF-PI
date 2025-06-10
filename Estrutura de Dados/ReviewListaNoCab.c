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
        /*vagão-pess = quant*/
        novo->valor = num;
        /*vagao prox  = motor*/
        novo->proximo = lista->inicio;
        /*motor       =vagao*/
        lista->inicio = novo;
        /*tamanho do trem*/
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
    int deci,valor, anterior;

    Lista lista;
    InicializarLista(&lista);
    do{
        printf("\n\t0-Sair\n\t1-InserirI\n\t2-Inserir Fim\n\t3-InserirM\n\t4-Imprimir\n");
        scanf("%d",&deci);
        switch (deci)
        {
        case 1:
            printf("Digite um valor pra adicionar: ");
            scanf("%d", &valor);
            insere_no_inicio(&lista, valor);
            break;
        case 2:
            printf("Digite um valor pra adicionar: ");
            scanf("%d", &valor);
            insere_fim(&lista, valor);
            break;
        case 3:
            printf("Digite um valor pra adicionar e o valor de referencia: ");
            scanf("%d%d", &valor, &anterior);
            insere_Meio(&lista,valor,anterior);
            break;
        case 4:
            imprimir(lista);
            break;
        default:
            if(deci != 0 ){
                printf("Inventando opcao?");
            }
            break;
        }
    } while (deci != 0);
    

    return 0;
}