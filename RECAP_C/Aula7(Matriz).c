#include <stdio.h>
void main(){
    int mat[3][3];
    for(int x = 0; x<3;x++){
        for(int y = 0; y<3;y++){
            printf("Digite um numero: ");
            scanf("%d",&mat[x][y]);
        }
    }
    for(int x = 0;x<3;x++){
            printf("\nEsses são os elementos da linha 1 e coluna %d: %d ",x+1,mat[0][x]);
    }
    for(int x = 0;x<3;x++){
        printf("\nEsses são os elementos da linha 2 e coluna %d: %d ",x+1,mat[1][x]);
    }
    for(int x = 0;x<3;x++){
        printf("\nEsses são os elementos da linha 3 e coluna %d: %d ",x+1,mat[2][x]);
    }
    printf("A matriz no formato de matriz é:\n");
    for(int x = 0;x<3;x++){
        printf("|");
        for(int y = 0;y<3;y++){
            printf("%8d",mat[x][y]);
    }
    printf("       |\n");
}
}