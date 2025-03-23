#include<stdio.h>
void main(){
    char nome[20];
    printf("Qual seu nome: ");
    fgets(nome, 20, stdin);
    scanf("%19[^\n]s",nome);
    fflush(stdin);
    printf("Olá %s",nome);
}