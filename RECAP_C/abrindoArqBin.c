#include<stdio.h>
void main(){
    FILE *arqb;
    int vet2[10];
    arqb = fopen("dados.bin","rb");
    if(arqb == NULL){
        printf("Não foi possivel abrir o arquivo");
        exit(1);
    }
    fread(vet2,sizeof(int),10,arqb);
    fclose(arqb);

    for(int x=0;x<10;x++){
        printf("%8d",vet2[x]);
    }

}