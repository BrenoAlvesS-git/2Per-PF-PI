#include<stdio.h>
#include<stdlib.h>

struct pessoa{
    char nome[50];
    int idade;
    char sexo;
};typedef struct pessoa pessoa;
#define tam 10
pessoa lista[tam];
int quant = 0;

int cadastraPessoa(){
    if(quant < tam){
        pessoa p;
        scanf("%*c");
        printf("Nome: ");
        scanf("%49[^\n]",p.nome);
        printf("Digite idade e sexo(M/F): ");
        scanf("%d %c",&p.idade,&p.sexo);
        lista[quant] = p;
        quant++;
        return 1;

    }else{
        printf("VETOR CHEIO\n\n");
        return 0;
    }
}

void imprimirVetor(){
    for(int x = 0; x<quant;x++){
        printf("Nome: %s",lista[x].nome);
        printf(" Idade: %d\tSexo: %c\n\n",lista[x].idade,lista[x].sexo);
    }
}

void salvararquivo(){
    FILE *arquivo = fopen("lista.txt","w");
    if(arquivo){
        fprintf(arquivo,"%d\n",quant);
        for(int x = 0; x< quant; x++){
            fprintf(arquivo,"%s\n",lista[x].nome);
            fprintf(arquivo,"%d\n",lista[x].idade);
            fprintf(arquivo,"%c\n",lista[x].sexo);
        } 
        printf("FECHANDO ARQUIVO\n");
        system("pause");
        fclose(arquivo);
    }else{
        printf("Erro ao abrir arquivo");
    }
}

void lerarquivo(){
    FILE *arquivo = fopen("lista.txt","r");
    if(arquivo){
        fprintf(arquivo,"%d\n",&quant);
        for(int x = 0; x< quant; x++){
            pessoa p;
            fscanf(arquivo,"%s\n",&p.nome);
            fscanf(arquivo,"%d\n",&p.idade);
            fscanf(arquivo,"%c\n",&p.sexo);
            lista[x] = p;
        } 
        printf("FECHANDO ARQUIVO\n");
        system("pause");
        fclose(arquivo);
    }else{
        printf("Erro ao abrir arquivo");
    }
}





void main(){
    int escolha;
    do{
        printf("\n1-Cadastrar\n2-Imprimir\n3-Salavar em arquivo\n4-Ler do arquivo\n0-Sair\n ");
        scanf("%d",&escolha);
        switch (escolha)
        {
        case 1:
            cadastraPessoa();
            break;
        case 2:
            imprimirVetor();
            break;
        case 3:
            salvararquivo();
        case 4:
            lerarquivo();
            break;
        case 0:
            printf("SAINDO");
            break;
        default:
            printf("Opção invalida!");
            break;
        }

    }while(escolha != 0);
}