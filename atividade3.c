//QUESTÃO 10
#include<stdio.h>
void main(){
    float paisA, paisB;
    int anos;
    do{
        paisA = 5000000;
        paisB = 7000000;
        printf("Quantos anos deseja testar? ");
        scanf("%d",&anos);
        paisA = paisA + (paisA *(anos*0.03));
        paisB = paisB + (paisB *(anos*0.02));
        printf("PAIS A: %.4f\n\nPAIS B: %.4f\n",paisA,paisB);
    }while(paisA < paisB);
}
//QUESTÃO 19
#include<stdio.h>
void main(){
int num, posicao = 1; 
    printf("Digite uma sequência de números (termine com 0):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break; 
        }
        if (num % posicao == 0) {
            printf("%d\n", num);
        }
        posicao++;
    }
}

//QUESTÃO 27
#include<stdio.h>
void main(){
    int numero,maior=0,menor=0,soma, contador = 0;
    float media;
    printf("Digite um numero: (0 PRA SAIR)");
    scanf("%d",&numero);
    while (numero != 0){
        contador++;
        if (numero>menor){
            menor = numero;
        }if (maior > numero){
            maior = numero;
        }
        soma = soma + numero;   
    }
    media = soma/contador;
    printf("O MAIOR: %d\nO MENOR: %d\nA MEDIA: %.2f",maior,menor,media);

}
//QUESTÃO 32

#include<stdio.h>
void main(){
    int num,total, contador=1,numeros[total];
    do{
        printf("Digite um numero: ");
        scanf("%d",&num);
        if(num % 8 == 0 ){
            contador++;
        }
        
    } while (num != -1);
    

}





//QUESTÃO 51
#include<stdio.h>
#include<math.h>
void main(){
    int decisao;
    float media,hipo,num1,num2,num3;
    printf("O que desesja fazer?\nCALCULAR HIPOTENUSA - 1\nA MEDIA - 2\nO MENOR NUMERO -3\nPARA SAIR -4");
    scanf("%d",&decisao);
    do{
    
    switch (decisao){
    case 1: printf("Digite dois catetos de um triangulo retangulo: ");
            scanf("%f%f",&num1,&num2);
            hipo = sqrt(num1*num1 +num2*num2); 
            printf("A hipoteunusa é: %.2f",hipo);
        break;
    case 2: printf("Digite três valores pra descobrir a media: ");
            scanf("%f%f%f",&num1,&num2,&num3);
            media = (num1+num2+num3)/3;
            printf("Sua media é: %.2f",media);
        break;
    case 3: 
            printf("Digite três números: ");
            scanf("%f %f %f", &num1,&num2,&num3);
            float menor = num1;
            if (num2 < menor){
                menor = num2;
            }if (num3 < menor){
                menor = num3;
            }
            printf("O menor número é: %.2f\n", menor);
            break;
        break;
    }
        /* code */
    } while (decisao!=4);

}