#include<stdio.h>
#include<stdlib.h>

int main(){
    int var = 15;
    int *ptr;
    ptr = &var;
    printf("Conteudo de var: %d\n",var);
    printf("Endereço de var: %p\n", &var);
    printf("Conteudo apontado por ptr: %d\n", *ptr);
    printf("Endereço do ptr: %p\n", ptr);
}