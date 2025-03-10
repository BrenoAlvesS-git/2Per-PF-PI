//QUESTÃO 28
#include <stdio.h>
void main(){
    float lado1,lado2,lado3;

    printf("Digite os lados do triangulo: ");
    scanf("%f%f%f",&lado1,&lado2,&lado3);
    if(lado1 == lado2 && lado2 == lado3) {
        printf("equilatero");
    }
    else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3 ){
        printf("Isoceles");
    }
    else{
        printf("escaleno");
    }
}





//QUESTÃO 35
#include<stdio.h>
#include<string.h>
void main(){
    char nome[20],sexo;
    int idade;

    printf("Qual seu nome: ");
    scanf("%s",&nome);
    printf("Qual sexo:(M/F): ");
    scanf(" %c",&sexo);
    sexo = toupper(sexo);
    printf("Qual sua idade: ");
    scanf("%d",&idade);
    if ((idade < 25) && (sexo == 'F')){
        printf("%s, Aceita",nome);
    }else{
        printf("%s, Não aceita(o)",nome);
    }
}


//QUESTÃO 51
#include<stdio.h>
int n1,num;
void main(){
    printf("Digite um numero de 4 casas");
    scanf("%d",&n1);
    num = n1/100;
    if(num % 4 == 0){
        printf("é divisivel por 4");

    }else{
        printf("Não é divisivel por 4");
    }
}

//QUESTÃO 53
#include<stdio.h>
#include<string.h>
void main(){
    int opcao_Sobremesa,opcao_Bebida,opcao_Prato;
    float total;
    float cal_Pratos[4] = {180,230,250,350};
    float cal_Sobreme[4]= {75, 110, 170, 200};
    float cal_Bebidas[4]= {20, 70, 90, 65};
    
    printf("PRATOS:\n1-VEGETARIANO\n2-PEIXE\n3-FRANGO\n4-CARNE\n\nSOBREMESA\n1-ABACAXI\n2-SORVETE DIET\n3-MOUSSE DIET\n4-MOUSSE CHOCOLATE\n\nBEBIDAS\n1-CHÁ\n2-SUCO DE LARANJA\n3-SUCO DE LIMÃO\n4-REFRI DIET\n");

    printf("Digite o numero equivalente ao PRATO que deseja: ");
    scanf("%d",&opcao_Prato);
    printf("Digite o numero equivalente a SOBREMESA que deseja: ");
    scanf("%d",&opcao_Sobremesa);
    printf("Digite o numero equivalente a BEBIDA que deseja: ");
    scanf("%d",&opcao_Bebida);
    switch (opcao_Prato){
    case 1: total = cal_Pratos[0];break;
    case 2: total = cal_Pratos[1];break;
    case 3: total = cal_Pratos[2];break;
    case 4: total = cal_Pratos[3];break;
    }
    
    switch (opcao_Sobremesa){
    case 1: total = total + cal_Sobreme[0];break;
    case 2: total = total + cal_Sobreme[1];break;
    case 3: total = total + cal_Sobreme[2];break;
    case 4: total = total +  cal_Sobreme[3];break;
    }
    switch (opcao_Bebida){
    case 1: total = total + cal_Bebidas[0];break;
    case 2: total = total +  cal_Bebidas[1];break;
    case 3: total = total + cal_Bebidas[2];break;
    case 4: total = total + cal_Bebidas[3];break;
    }
    
printf("O total de calorias foi %.2f CALORIAS",total);
}

