#include<stdio.h>
void main(int argc, char *argv[]){
    if(argc>1){
        printf("Foram inseridas %d argumentos: ",argc);
        for(int i = 0; i<argc;i++){
            printf("%s\n",argv[i]);
        }
    }else{
        printf("Nao foram inseridos argumentos");
    }
}