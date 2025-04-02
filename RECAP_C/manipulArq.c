#include<stdio.h>
#include<stdlib.h>

FILE *arq;
int vetor[10]= {1,2,3,4,5,6,7,8,9,10};
void main(){
    fopen("arquivo.bin","wb");
    if(arq){
        fprintf(arq,"",vetor);

    }else{
        printf("Não foi possivel abrir arquivo");
    }

    fclose(arq);
}