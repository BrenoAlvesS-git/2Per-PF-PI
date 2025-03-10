//lista 5: 3 9 12 13
//QUESTÃO 3

#include<stdio.h>
void main(){
    int num[8];
    for (int x=0; x<8; x++){
    printf("Digite um numero: ");
    scanf("%d",&num[x]);
    }
    printf("MULTIPLOS DE 6: ");
    for (int x=0; x<8; x++){
    if (num[x] % 6 == 0){
        printf("\n%d",num[x]);

    }
    }
}

//QUESTÃO 9

#include<stdio.h>
void main(){
    int A[5],B[5];
    for (int x=0; x<5; x++){
        printf("Digite um numero: ");
        scanf("%d",&A[x]);
        B[x]=A[x]*A[x];
    }
    printf("A LISTA COM OS NUMEROS: ");
    for(int x = 0;x < 5; x++){
        printf("\n%d = %d", A[x],B[x]);
    }
}

//QUESTÃO 12
#include<stdio.h>
void main(){
    int A[5],B[5],V[10];
    for (int x=0; x<5; x++){
        printf("Digite um numero: ");
        scanf("%d",&A[x]);
        printf("Digite outro numero: ");
        scanf("%d",&B[x]);
        V[x]=A[x];
        V[x+5]= B[x];
    }
    printf("A lista cocatenada: ");
    for (int x=0; x<5; x++){
        printf("\n%d",V[x]);
        printf("\n%d",V[x+5]);
    }
}

//QUESTÃO 13
#include <stdio.h>

void main() {
    int num[100], count = 0, x = 0;
    do {
        printf("Digite um numero: ");
        scanf("%d", &num[x]);

        if (num[x] == 0) break;
        for (int i = 0; i < x; i++) { 
            if (num[x] == num[i]) {
                count++;
                break;
            }
        }
        x++;
    } while (num !=0);

    printf("\nO total de numeros repetidos foi: %d\n", count);
}