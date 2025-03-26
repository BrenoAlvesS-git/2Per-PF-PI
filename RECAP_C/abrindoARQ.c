#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *arq;
    char frase[30];
    arq = fopen("aquivo.txt","r");
    if (arq == NULL){
        printf("Arquivo não pode ser aberto");
        exit(1);
    }
    if (fgets(frase, 30, arq) != NULL){
        puts(frase);
    } else {
        printf("Erro ao ler o arquivo\n");
    }
    
    fclose(arq);
}