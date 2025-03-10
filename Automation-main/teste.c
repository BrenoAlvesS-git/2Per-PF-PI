/*#include <stdio.h> 

int main(){
    printf("Funciona?\n");
    return 0;

}


#include <stdio.h>
int main(){
    int idade;
    printf("Digite sua idade: \n");
    scanf("%d",&idade);
    printf("Sua idade é %10d\n",idade);


    return 0;

}


#include <stdio.h>
int main(){
    printf("%9s" ,"*\n");
    printf("%10s","***\n");
    printf("%11s","*****\n");
    printf("%12s","*******\n");
    printf("%13s","*********\n");
    printf("%14s","***********\n");
    printf("%15s","*************\n");
    printf("%16s","***************\n");
    printf("%10s","|||\n");
    printf("%10s","|||\n");

    return 0;
}


#include <stdio.h>

int main(){
    int n1, n2, n3;
    printf("Digite três números conscutivos: ");
    scanf("%d %d %d",&n1, &n2, &n3);
    printf("Seu números ao contrario %d %d %d",n3, n2, n1);

    return 0;

}



#include <stdio.h>
int cont = 0;
int reps;
int main(){
    printf("Quantas vezes quer que repita? ");
    scanf("%d",&reps);
    while (cont != reps){
        printf("Hello World\n");
        cont++;
    }

    return 0;
}


#include <stdio.h>
float valor;
float total;
void main(){
    printf("Qual valor do produto: ");
    scanf("%f",&valor);
    total = (valor *0.05) + valor;
    printf("O valor total do produto ficou: %.2f \n", total);
    printf("Ou seja serão 10 parcelas de: %.2f  ", total/10);

}


#include <stdio.h>
char nome[20];
float deposito;
float juros;
float total;
void main (){
    printf("Qual seu nome? ");
    scanf("%s",&nome);
    fflush(stdin);
    printf("Quanto foi depositado? ");
    scanf("%f",&deposito);
    printf("Qual taxa de juros? ");
    scanf("%f",&juros);
    total = deposito * (juros/100);
    printf("%s,Você depositou: %.2f,\n e isso renderá: %.2f em um ano",nome,deposito,total);
}



#include<stdio.h>
//#include<string.h>
char nome[20];

void main(){
    strcpy(nome,"x");
    printf("Nome = %s", nome);

}


//Estrutura condicional

#include<stdio.h>
int num1, num2;

void main(){
    printf("Digite um numero: ");
    scanf("%d",&num1);
    printf("Digite outro numero: ");
    scanf("%d",&num2);
    if (num1 + num2 > 10){
        printf("%d",num1+num2);

    }
}
*/

#include<stdio.h>
int num;
void main(){
    printf("Digite um numero: ");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("O numero é par");
    }
    else{
        printf("O numero é impar");
    }

}




















