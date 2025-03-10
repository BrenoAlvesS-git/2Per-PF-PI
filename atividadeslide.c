//ATIVIDADE C
//QUESTÃO 1

#include <stdio.h>
void main(){
    int mat1[4][4],mat2[4][4],soma[4][4];
    for (int x = 0; x<4;x++){
        for (int y = 0; y<4;y++){
            printf("Digite valor da primeira matriz: ");
            scanf("%d",&mat1[x][y]);
        }
    }
    printf("\n");
    for (int x = 0; x<4;x++){
        for (int y = 0; y<4;y++){
            printf("Digite valor da segunda matriz: ");
            scanf("%d",&mat2[x][y]);
        }
    }
    printf("\n");
    printf("A soma entre as matrizes é: ");
    for (int x = 0; x<4;x++){
        for (int y = 0; y<4;y++){
            soma[x][y]=mat1[x][y]+mat2[x][y];
            printf("%8d",soma[x][y]);    
        }
    printf("\n");
    }
}

//QUESTÃO 5
#include<stdio.h>
void main(){
    int A [3][5],soma[3];
    for (int x = 0; x< 3; x++){
        for (int y = 0; y< 5; y++){
            printf("Digite o valor de [%d][%d] da matriz: ",x,y);
            scanf("%d",&A[x][y]);
        }
    }
    for (int x = 0; x < 3; x++) {
        soma[x] = 0;
        for (int j = 0; j < 5; j++) {
            soma[x] += A[x][j];
        }
    }   
    for (int x = 0; x < 3; x++) {
        printf("Soma da linha %d: %d\n",x, soma[x]);
    }
}

//QUESTÃO 6
#include<stdio.h>
void main(){
    int A [3][5],soma[3];
    for (int x = 0; x< 3; x++){
        for (int y = 0; y< 5; y++){
            printf("Digite o valor de [%d][%d] da matriz: ",x,y);
            scanf("%d",&A[x][y]);
        }
    }
    for (int x = 0; x < 5; x++) {
        soma[x] = 0; 
        for (int i = 0; i < 3; i++) {
            soma[x] += A[i][x];
        }
    }

    for (int j = 0; j < 5; j++) {
        printf("Soma da coluna %d: %d\n", j+1, soma[j]);
    }
}

//QUESTÃO 8
#include<stdio.h>
void main(){
    int A[3][4],B[3][4];
    for (int x= 0;x<3; x++){
        for (int y =0; y<4;y++){
            printf("Digite um numero pra sua matriz:[%d][%d] ",x,y);
            scanf("%d",&A[x][y]);
            B[x][y]= A[x][y]*3;
        }
        printf("\n");
    }
    printf("Sua matriz triplicada: \n");
    for (int x= 0;x<3; x++){
        for (int y =0; y<4;y++){
            printf("%8d",B[x][y]);
        }
    printf("\n");
    }
}

//QUESTÃO 9
#include<stdio.h>
void main(){
    int matA[2][3], transpA[3][2];
    for (int x= 0;x<2; x++){
        for (int y =0; y<3;y++){
            printf("Digite um numero pra sua matriz:[%d][%d] ",x,y);
            scanf("%d",&matA[x][y]);
            transpA[y][x]=matA[x][y];
        }
        printf("\n");
    }
    printf("Sua matriz transposta é: \n");
    for(int x=0; x<3; x++){
        for(int y = 0; y<2;y++){
            printf("%8d",transpA[3][2]);
        }
        printf("\n");
    }
}

//QUESTÃO 20

#include<stdio.h>
void main(){
    int matriz [5][5],soma =0;
    for(int x = 0; x<5; x++){
        for(int y = 0;y<5;y++){
            if(x+y == 6){
            printf("Digite o valor [%d][%d] da sua matriz: ",x,y);
            scanf("%d",&matriz[x][y]);
            }else{
                matriz[x][y] = 0;
            }
        }
        printf("\n");
    }
    for(int x = 0; x<5; x++){
        for(int y = 0;y<5;y++){
            soma = soma + matriz[x][y];
        }
    }
    printf("A soma dos intens abaixo da diagonal secundaria e: %d",soma);
}




