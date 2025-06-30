#include <stdio.h>

/*Implementação de Lista Simplesmente Encadeada Com nó cabeça- Estrutura de Dados*/

/*Tipo de dado que representa um nó da lista encadeada*/
typedef struct no{
    int dado;
    struct no *proxNo;
}tipoNo;
/*Tipo de dado que representa uma lista encadeada*/
typedef struct listaGerenciada{
    tipoNo *inicio;
    tipoNo *fim;
    int quant;
}tipoLista;

/*Função de inicialização da lista encadeada - Deve ser chamada antes de usar a lista*/
void inicializa(tipoLista *lista){
    lista->fim = NULL;
    lista->inicio = NULL;
    lista->quant = 0;
}

/*Função para inserção de nó em lista vazia*/
int insereListaVazia(tipoLista *listaEnc, int valor){
tipoNo *novoNo = malloc(sizeof(tipoNo));
if(novoNo == NULL)
    return 0;
novoNo->dado = valor;       //Guarda o valor passado
novoNo->proxNo = NULL;      //Proximo nó aponta pra NULL
listaEnc->inicio = novoNo;  // Inicio da lista recebe o novoNo
listaEnc->fim = novoNo;     //Final da lista tambem recebe novo nó, já que a lista estava vazia
listaEnc->quant++;          
return 1;
}


/*Função que faz a inserção de um nó na frente de uma lista simplesmente encadeada*/
int insereNaFrente(tipoLista *listaEnc, int valor){
tipoNo *novoNo;
if(listaEnc->inicio==NULL)
    return insereListaVazia(listaEnc, valor);
else{
    novoNo = (tipoNo*)malloc(sizeof(tipoNo));
    if(novoNo==NULL)
        return 0;
    novoNo->dado=valor;                 //Valor é colocado no campo dado
    novoNo->proxNo=listaEnc->inicio;    //O proximo nó recebe o valor que estava no inicio
    listaEnc->inicio=novoNo;            // O inicio passa a ser o valor que o usuario colocou
    listaEnc->quant++;
    return 1;
}
}
/*Função que faz a inserção de um nó no fim de uma lista simplesmente encadeada*/
int insereFim(tipoLista *listaEnc, int valor){
    tipoNo *novoNo;
    if(listaEnc->inicio==NULL){
        return insereListaVazia(listaEnc,valor);
    }else{
        novoNo = (tipoNo*)malloc(sizeof(tipoNo));
        if(novoNo ==NULL){
            return 0;
        }
        novoNo->dado = valor;
        novoNo->proxNo= NULL;
        listaEnc->fim->proxNo = novoNo;
        listaEnc->quant++;

    }
}
/*Inserçãp de elemento em posição exata da lista*/
int inserePosi(tipoLista *listaEnc, int valor, int posi) {
    if (posi < 0 || posi > listaEnc->quant) {
        printf("Posição inválida.\n");
        return 0;
    }

    if (listaEnc->inicio == NULL) {
        return insereListaVazia(listaEnc, valor);
    }


    if (posi == 0) {
        return insereNaFrente(listaEnc, valor);
    }

    if (posi == listaEnc->quant) {
        return insereFim(listaEnc, valor);
    }

    tipoNo *novoNo = (tipoNo*) malloc(sizeof(tipoNo));
    if (novoNo == NULL)
        return 0;

    tipoNo *atual = listaEnc->inicio;
    for (int i = 0; i < posi - 1; i++) {
        atual = atual->proxNo;
    }

    novoNo->dado = valor;
    novoNo->proxNo = atual->proxNo;
    atual->proxNo = novoNo;
    listaEnc->quant++;

    return 1;
}


int apagaLista(tipoLista *listaEnc){
    while (listaEnc != NULL){
        listaEnc->inicio = NULL;
        listaEnc->fim = listaEnc->inicio;
    }
    

}

/*Função de exibição da lista simplesmente encadeada*/
int exibeLista(tipoLista *listaEnc){
tipoNo *atual;  //Variável que será usada para percorrer a lista*/
if(listaEnc->inicio == NULL)
    return 0;
atual = listaEnc->inicio;
printf("\nLista encadeada: ");
while(atual !=NULL){
    printf("%8d",atual->dado);
    atual = atual->proxNo;
    }
    return 1;
}

void main(){
    tipoLista lista;
    int op, aux, aux2;
    inicializa(&lista);
    do{
        printf("\n      Menu Lista Encadeada");
        printf("\n1 - Insere um elemento na lista vazia");
        printf("\n2 - Insere elemento no inicio da lista");
        printf("\n9 - Exibe a lista");
        printf("\n0 - Encerra o programa");
        printf("\nDigite sua opção:");
        scanf("%d",&op);
        switch(op){
        case 1:printf("\nDigite o elemento que deseja inserir:");
            scanf("%d",&aux);
            insereListaVazia(&lista,aux);
            break;
        case 2:printf("\nDigite o elemento que deseja inserir:");
            scanf("%d",&aux);
            insereNaFrente(&lista,aux);
            break;
        case 9: if(!exibeLista(&lista))
                    printf("\nLista vazia!\n");
            break;
        case 0: printf("\nEncerrando programa.");
              //destruirLista(&lista);
            break;
        default: printf("\nOpção inválida!");
        }
     printf("\n\n\n\n");
    }while(op != 0);
}
