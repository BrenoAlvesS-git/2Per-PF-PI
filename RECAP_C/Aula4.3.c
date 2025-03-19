#include<stdio.h>
void main(){
    int escolha, num1, num2;
    printf("Digite o que deseja fazer:\n1-Somar\n2-Subtrair\n3-Multiplicar\n4-Dividir\n");
    scanf("%d",&escolha);
    printf("Digite o primeiro numero: ");
    scanf("%d",&num1);
    printf("Digite o segundo numero: ");
    scanf("%d",&num2);
    switch (escolha){
    case 1:
        printf("A soma é: %d",num1+num2);
        break;
    case 2:
        printf("A subtração é: %d",num1-num2);
        break;
    case 3:
        printf("A multiplicação é: %d",num1*num2);
        break;
    case 4:
        printf("A divisão é: %d",num1/num2);
            break;
    default:
        printf("Opção inválida");
        break;
    }

}