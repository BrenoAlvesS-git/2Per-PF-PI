#include<stdio.h>
#include<string.h>

#define TAM 50

struct pessoa{
    int idade;
    float peso;
    char nome[TAM];
};
typedef struct pessoa pessoa;


void main(){
    pessoa Breno = {22,78.0,"Breno"};
    printf("A idade de %s eh %d",Breno.nome,Breno.idade);
    printf("\nO peso dele eh: %.2fKG",Breno.peso);
}