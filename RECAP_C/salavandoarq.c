#include<stdio.h>
void main(){
    FILE *arq;
    char nome[50];
    int idade;
    float peso;
    
    arq = fopen("pessoas.txt","w");
    
    if(arq == NULL){
        printf("Erro ao abrir o arquivo\n");
        return;
    }
    
    printf("Digite o nome: ");
    scanf("%s",nome);
    
    printf("Digite a idade: ");
    scanf("%d",&idade);
    
    printf("Digite o peso: ");
    scanf("%f",&peso);
    
    fprintf(arq,"Nome: %s\nIdade: %d\nPeso: %.2f\n",nome,idade,peso);
    
    fclose(arq);
}

int salvandobinario(){
    FILE *arq;
    char nome[50];
    int idade;
    float peso;
    
    arq = fopen("pessoas.bin","wb");
    
    if(arq == NULL){
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }
    
    printf("Digite o nome: ");
    scanf("%s",nome);
    
    printf("Digite a idade: ");
    scanf("%d",&idade);
    
    printf("Digite o peso: ");
    scanf("%f",&peso);
    
    fwrite(nome,sizeof(nome),1,arq);
    fwrite(&idade,sizeof(idade),1,arq);
    fwrite(&peso,sizeof(peso),1,arq);
    
    fclose(arq);
    
    return 0;
}