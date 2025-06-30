#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct atleta{
    char nome[30];
    char matricula[30];
    int idade, numeroCamisa, faltas;
    struct atleta *prox;
}Atleta;

typedef struct no {
    char nome[30];
    char esporte[30];
    char categoria[30];
    struct no *proxNo;
    Atleta *atletas;
} Equipe;

typedef struct listaGerenciada {
    Equipe *inicio;
    Equipe *fim;
    int quant;
} tipoLista;



void inicializa(tipoLista *lista) {
    lista->inicio = NULL;
    lista->fim = NULL;
    lista->quant = 0;
    
}

int cadastraEquipe(tipoLista *listaEnc, char nom[30], char esp[30], char cat[30]) {
    Equipe *novoNo = (Equipe*) malloc(sizeof(Equipe));
    novoNo->atletas = NULL;
    if (novoNo == NULL) return 0;

    strcpy(novoNo->nome, nom);
    strcpy(novoNo->esporte, esp);
    strcpy(novoNo->categoria, cat);
    novoNo->proxNo = NULL;

    if (listaEnc->inicio == NULL) {
        listaEnc->inicio = novoNo;
        listaEnc->fim = novoNo;
    } else {
        listaEnc->fim->proxNo = novoNo;
        listaEnc->fim = novoNo;
    }

    listaEnc->quant++;
    printf("Equipe inserida com sucesso!\n");
    return 1;
}

int exibeEquipes(tipoLista *listaEnc) {
    Equipe *atual;
    if (listaEnc->inicio == NULL) return 0;

    atual = listaEnc->inicio;
    printf("\nEquipes do Clube:\n");
    while (atual != NULL) {
        printf("Nome: %s | Esporte: %s | Categoria: %s\n",
               atual->nome, atual->esporte, atual->categoria);
        atual = atual->proxNo;
    }
    return 1;
}

int removeEquipePorNome(tipoLista *listaEnc, char nom[30]) {
    if (listaEnc->inicio == NULL) {
        printf("Clube sem equipes, impossível remover\n");
        return 0;
    }

    Equipe *atual = listaEnc->inicio;
    Equipe *anterior = NULL;

    while (atual != NULL) {
        if (strcmp(atual->nome, nom) == 0) {
            if (anterior == NULL) { 
                listaEnc->inicio = atual->proxNo;
                if (atual == listaEnc->fim) listaEnc->fim = NULL;
            } else {
                anterior->proxNo = atual->proxNo;
                if (atual == listaEnc->fim) listaEnc->fim = anterior;
            }
            free(atual);
            listaEnc->quant--;
            printf("Equipe removida com sucesso.\n");
            return 1;
        }
        anterior = atual;
        atual = atual->proxNo;
    }

    printf("Equipe nao encontrada, impossível remover.\n");
    return 0;
}


Equipe *buscarEquipe(tipoLista *lista, char nome[30]){ //função para buscar equipe pelo nome
    Equipe *atual = lista->inicio; //cria uma variavel auxiliar pra não mudar a lista e poder percorrer ela
    while(atual != NULL){
        if(strcmp(atual->nome, nome)==0){
            return atual; //quando atual->nome for igual ao nome recebido pela função ela retorna ele
        }
        atual = atual->proxNo; // pra avançar nos nomes
    }
    return NULL; //caso não encontre a equipe retorna null
}

//Função de cadastrar atleta
int cadastrarAtletaEquipe(tipoLista *listaEquipes, char nomeEquipe[], Atleta novoAtleta){
    Equipe *equipe = buscarEquipe(listaEquipes, nomeEquipe); //Usa a função de buscar equipe para ver em qual equipe cadastras o atleta
    if(equipe ==NULL){ //caso não ache a equipe, retorna 0
        printf("Equipe não encontrada\n");
        return 0;
    }
    Atleta *novo = malloc(sizeof(Atleta));// aloca dinamicamente um novo nó atleta
    if(novo == NULL){
        printf("Erro ao alocar memoria");
        return 0;
    }
    /*Area a seguir é pra copiar os dados do atleta que esta na lista para outra lista  */
    strcpy(novo->nome, novoAtleta.nome);        
    strcpy(novo->matricula, novoAtleta.matricula);
    novo->idade = novoAtleta.idade;
    novo->numeroCamisa = novoAtleta.numeroCamisa;
    novo->faltas = novoAtleta.faltas;

    if(equipe->atletas == NULL){  //Caso seja o primeiro atleta da equipe ele aponta pra ele mesmo
        novo->prox = novo;
        equipe->atletas = novo;
    }else{                         //Se não for ele é inserido no fim da da lista circular
        Atleta *inciio = equipe->atletas;
        Atleta *atual = inciio;

        while(atual->prox != inciio){//percorre a lista até o último
            atual = atual->prox;
        }
        atual->prox = novo;
        novo->prox =inciio;
    }
    printf("Atleta cadastrado na equipe '%s'\n",nomeEquipe);
    return 1;


}