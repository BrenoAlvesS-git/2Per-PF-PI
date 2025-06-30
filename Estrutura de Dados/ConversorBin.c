#include<stdio.h>
#include<stdlib.h>

typedef struct no{
    int valor;
    struct no *proxNo;
}No;

typedef struct{
    No *topo;
    int tamanho;
}Pilha;

//Função para iniciar a pilha

void iniciarPilha(Pilha *p){
    p->topo = NULL;
    p->tamanho = 0;
}
//Função de empilhar
void empilhar(Pilha *p, int valor){
    No *novaPilha = malloc(sizeof(No)); //Aloca dinamicamente 
    if(novaPilha){                      //If pra verificar se a memória foi alocada
    novaPilha->valor = valor;
    novaPilha->proxNo = p->topo; //NovaPilha aponta para o antigo topo
    p->topo = novaPilha;         //topo agora é a pilha nova
    p->tamanho++;

    }else{
        printf("Erro ao alocar memoria\n");
    } 

}

//Função de desempilhar

int desempilhar(Pilha *p){
    if(p->topo == NULL){        //Verifica se a pilha tá vazia
        printf("Pilha vazia");
        return 1;
    }
    int valor;
    No *remover = p->topo;       //Nó que será removido/
    valor = remover->valor;      //Guarda o valor do topo
    p->topo = remover->proxNo;   //atualiza o topo para o proximo nó
    free(remover);               //Libera o antigo topo d
    p->tamanho--;

    return valor; 

}
//função pra mostrar topo da pilha
int topo(Pilha *p){
    if(p->topo = NULL){
        printf("Pilha vazia");
        return 1;
    }
    return p->topo->valor;
}

//função pra esvaziar pilha

void esvaziarpilha(Pilha *p){
    while (p->topo != NULL);
    {
        desempilhar(p);
    }
    printf("Pilha esvaziada");
}
//função para converter dec pra bin
void decimalBin(int num){
    Pilha p;
    int resto;
    iniciarPilha(&p);


    while(num > 0){
        resto = num% 2;
        empilhar(&p, resto);
        num = num/2;
    }

    printf("Numero convertido pra binario: \n");
    while(p.topo != NULL){
        printf("%d", desempilhar(&p));
    }
}


int main(){
    int numero;
    printf("Digite um numeor pra converter: ");
    scanf("%d",&numero);
    decimalBin(numero);
    return 0;
}