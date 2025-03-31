#include<stdio.h>
void main(){
    FILE *arqb;
    int vet[10];
    
    for(int x= 0;x<10;x++){
        printf("Digite um numero: ");
        scanf("%d",&vet[x]);
    }
    arqb = fopen("dados.bin","wb");
    if(arqb == NULL){
        printf("Erro ao abrir arquivo");
        exit(1);
    }

    fwrite(vet,sizeof(int),10,arqb);

    fclose(arqb);

}
