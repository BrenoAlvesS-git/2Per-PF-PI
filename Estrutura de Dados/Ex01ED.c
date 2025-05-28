#include <stdio.h>
#include <stdlib.h>
void main(){
    int *ponteiro, quant, media;
    printf("Digite quantos numeros deseja alocar: ");
    scanf("%d",&quant);
    ponteiro = (int*) malloc (sizeof(int)*quant);
    if (!ponteiro){
        printf("Erro ao alocar memoria");
        exit(1);
    }
    for (int x = 0; x<quant;x++){
        printf("Digite um numero: ");
        scanf("%d",&ponteiro[x]);
    }
    media = 0;
    for(int x = 0; x<quant;x++){
        media += ponteiro[x];
    }
    media = media/quant;
    printf("A media dos numeros eh: %d",media);
    for(int x = 0; x<quant;x++){
        if(ponteiro[x] % 6 == 0){
            printf("\nO numero %d eh multiplo de 6", ponteiro[x]);
        }
    }
    free(ponteiro);

}