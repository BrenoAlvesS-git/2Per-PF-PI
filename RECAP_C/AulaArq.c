#include<stdio.h>
void main(){
    FILE *arq;
    char string[30];
    arq = fopen("aquivo.txt","w");
    if (arq == NULL){
        printf("Arquivo não pode ser aberto");
        exit(1);
    }
    while (strcmp(string,"***")){
        printf("Digite algo para pôr no arquivo: ");
        scanf("%29[^\n]s",&string);
        fflush(stdin);
        fprintf(arq,string);
    }
    
    fclose(arq);
}