#include<stdio.h>
void main(){
    FILE *arquivo = fopen("arquivo.txt","w");
    char texto[50];
    if(arquivo){
        printf("Digite algo para adicionar no arquivo: ");
        scanf("%49[^\n]",texto);
        fprintf(arquivo,"%s",texto);
    }else{
        printf("Não foi possivel abrir");
    }
   
   
   
   
   
    fclose(arquivo);
}