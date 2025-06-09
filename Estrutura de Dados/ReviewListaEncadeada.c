#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *proximo;
}No;

//função de inserir inicio

void inserir_no_inicio(No **lista,int num){
    No *novo = malloc(sizeof(No));
    if(novo){
        novo->valor = num;
        novo->proximo = *lista; /*o novo nó aponta para o inicio da lista, nesse caso com a lista encadeada é
                                    a posição de lista */
        *lista = novo;          /*O inico da lista passa a ser o novo nó*/
        
    }else{
        printf("Erro ao alocar");
    }
}

void insere_fim(No **lista, int num){
    No *aux, *novo = malloc(sizeof(No));
    if(novo){
        novo->valor = num;
        novo->proximo = NULL;//O ultimo é null
        if(*lista == NULL){
            *lista = novo;
        }else{
            aux = *lista;
            while(aux->proximo!=NULL){
                aux = aux->proximo;
            }
            aux ->proximo = novo;
        }
        

    }else{
        printf("Erro ao alocar memoria");
    }

}

void insere_Meio(No **lista, int num, int ant){
    No *aux, *novo = malloc(sizeof(No));
    if(novo){
        novo->valor = num;
        if(*lista == NULL){//Caso a lista esteja vazia
           *lista = novo;
        }
        else{
            aux = *lista;
            while(aux->valor != ant && aux->proximo != NULL){
                aux = aux->proximo; 
            }
            novo->proximo = aux->proximo;
            aux->proximo = novo;
        }
    }else{
        printf("Erro ao alocar memoria");
    }

}
void imprimeLista(No *no){
    printf("\n\tLista: ");
    while (no != NULL)
    {
        printf(" %d", no->valor);
        no = no->proximo;
    }
    printf("\n\n");
}

int main(){
    int deci,valor, anterior;
    No *lista = NULL;
    do{
        printf("\n\t0-Sair\n\t1-InserirI\n\t2-Inserir Fim\n\t3-InserirM\n\t4-Imprimir\n");
        scanf("%d",&deci);
        switch (deci)
        {
        case 1:
            printf("Digite um valor pra adicionar: ");
            scanf("%d", &valor);
            inserir_no_inicio(&lista, valor);
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
            imprimeLista(lista);
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