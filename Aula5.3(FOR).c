#include<stdio.h>
int main(){
    for (int y=1; y<=10;y++){

        if (y % 2 == 0){
            continue;
        }
        printf("%8d",y);
    }
}

//O continue faz com que o laço de repetição pule para a proxima iteração, ignorando o que vem depois dele.