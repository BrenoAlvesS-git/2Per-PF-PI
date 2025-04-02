#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct vendedor{
    char nome[50];
    float sal;
    
};
typedef struct vendedor vendedor;
vendedor vend[20];
int quant = 2;

void limpaBuffer(){
    while(getchar() != '\n');
}

void cadastrarDados(){
    limpaBuffer();
    for(int x = 0; x<quant;x++){
    printf("\nQual nome do vendedor: ");
    scanf("%49[^\n]", vend[x].nome);
    printf("\nQual salario do vendedor: ");
    scanf("%f",&vend[x].sal);
    limpaBuffer();
    }
}

void ordenaNomes(){
    vendedor aux;
    for (int x = 0; x<quant - 1;x++){
        for (int y = 0; y<quant - 1;y++){
            if(strcmp(vend[y].nome, vend[y+1].nome) > 0){
                aux = vend[y];
                vend[y] = vend[y+1];
                vend[y+1] = aux;
            }
        }
    }  
    printf("Funcionarios ordenados por nome\n");
}

void listaFunc(){
    printf("\nLISTA DE FUNCIONARIOS: \n");

    for(int x = 0; x<quant ;x++){    
        printf("%d- Nome: %s\t Salario: %.2f\n",x+1,vend[x].nome,vend[x].sal);
    }
    system("pause");
}

void funcionario(){
    limpaBuffer();
    int func;
    printf("Qual numero do funcionario que deseja saber?\n ");
    scanf("%d",&func-1);
    printf("Nome: %s\t Salario: %.2f\n",vend[func].nome,vend[func].sal);
    system("pause");
}

void faixaSal(){
    float sal1,sal2;
    limpaBuffer();
    printf("Qual piso da faixa salarial deseja saber? \n");
    scanf("%f",&sal1);
    printf("Qual teto salarial deseja saber?\n");
    scanf("%f",&sal2);
    for(int x = 0; x<quant ;x++){
        if(vend[x].sal >= sal1 && vend[x].sal <= sal2){
        printf("Nome: %s\t Salario: %.2f\n",vend[x].nome,vend[x].sal);
        }
    }   
    system("pause");
}

void main(){
    int escolha = 0;
    printf("OPÇÕES\n");
    do{
    printf("1 - CADASTRA DADOS\n2 - ORDENACAO\n3 - LISTA TODOS OS FUNCIONARIOS\n4 - LISTA DADOS DE UM FUNCIONARIO\n5 - LISTA TOTAL DE FUNCIONARIOS DENTRO DE UMA FAIXA DE SALARIOS\n6 - SAIR\nESCOLHA: ");
    scanf("%d",&escolha);
    
    switch (escolha){
        case 1:
            cadastrarDados();
            break;
        case 2:
            ordenaNomes();
            break;
        case 3:
            listaFunc();
            break;
        case 4:
            funcionario();
            break;
        case 5:
            faixaSal();
        case 6:
            printf("Saindo...");
            break;
        default:
            printf("ESCOLHA INVALIDA");
        }
    }while(escolha != 6);
}
