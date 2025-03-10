/*
EXERCICIOS:
LISTA 2- 8, 10, 11, 15, 19
LISTA 3- 10, 19, 27, 32 e 51
LISTA 4- 20, 22 , 28, 30.
LISTA 5- 3, 9, 12, 13
*/

//LISTA 2
//QUESTÃO 8
/*
#include<stdio.h>
#include<math.h>
void main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    if (num > 0){
        num = sqrt(num);
        printf("A raiz do numero eh: %d", num);
    }else{
        num = num * num;
        printf("O seu numero ao quadrado eh: %d", num);
    }

}

//QUESTÃO 10
#include<stdio.h>
void main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    num = num/10;
    if(num % 2 == 0){
        printf("A dezena eh par");
    }else{
        printf("A dezena eh impar");
    }   

}

//QUESTÃO 11
#include<math.h>
#include<stdio.h>
void main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    int raiz = sqrt(num);
    if (raiz * raiz == num){
        printf("A raiz eh inteira: %d",raiz);
    }else{
        printf("A raiz nao eh inteira");
    }

}


//QUESTÃO 15
#include<stdio.h>
void main(){
    float divisor, dividendo, quociente;
    printf("Digite o dividendo: ");
    scanf("%f",&dividendo);
    printf("Digite o divisor: ");
    scanf("%f",&divisor);
    float resto = dividendo - ((int)(dividendo/divisor)*divisor);
    if(resto == 0){
        printf("Eh inteiro");
    }else{
        printf("Nao eh inteiro");
    }
}


//QUESTÃO 19
#include<stdio.h>
void main(){
    int num1,num2;
    printf("Digite dois numero: ");
    scanf("%d%d",&num1,&num2);
    if(num1>num2){
        printf("%d %d",num2,num1);
    }else{
        printf("%d %d", num1, num2);
    }
}


//QUESTÃO 10
#include<stdio.h>
void main(){
    float A= 500, B= 700, crescA,crescB;
    float anos,count;
    do{
    printf("\nDigite quantos anos: ");
    scanf("%f",&anos);
    crescA = crescA + (A * 0.03)*anos;
    crescB = crescB + (B * 0.02)*anos;
    printf("\nA= %.2f",crescA);
    printf("\nB= %.2f",crescB);
    count = count + anos;
    printf("\nAnos PASSADOS: %.2f",count);
    } while (crescA < crescB);

}


//QUESTÃO 19
#include<stdio.h>
void main(){
    int num, pos=0;
    printf("Digite um numero: ");
    scanf("%d",&num);
    while (num != 0){
        pos++;
        if (num % pos == 0){
            printf("\n%d",num);
        }
        printf("\nDigite outro numero: ");
        scanf("%d",&num);
    }
    
}

//QUESTÃO 27
//QUESTÃO 32 
//QUESTÃO 51


#include<stdio.h>
void main(){
    int nums[8];
    for(int x=0;x<8;x++){
        printf("digite um numero: ");
        scanf("%d",&nums[x]);
    }
    for (int i = 7; i >= 0; i--){
        printf("\nOs numeros ao contrario é: %d",nums[i]);
    }
    
}

#include<stdio.h>
void main(){
    float A[10],B[10];
    for (int x=0;x<10;x++){
        printf("Digite um numero: ");
        scanf("%f",&A[x]);
        if(x % 2 == 0){
            B[x] =A[x]*3;
        }else{
            B[x] = A[x]/2;
        }
    }
    printf("Sua lista ficou: ");
    for (int i = 0;i< 10; i++){
        printf("\n%.1f",B[i]);
    }
}
*/
#include<stdio.h>
void main(){
    float valCompra,valVenda;
    int mes;
    char roupa;
    printf("Qual mês estamos:(1-12) ");
    scanf("%d",&mes);
    printf("QuaL tipo de roupa esta comprando? F/C/N ");
    scanf("%c",&roupa);

    if(mes >3 && mes < 8){
        printf("Qual");

    }



  
    
}














