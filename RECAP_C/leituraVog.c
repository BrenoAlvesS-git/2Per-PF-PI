#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *arq;
    char frase[30], a,e,ii,o,u;
    int i=0,x=0,y=0,z=0,w=0;
    arq = fopen("aquivo.txt","r");
    if (arq == NULL){
        printf("Arquivo não pode ser aberto");
        exit(1);
    }
    if (fgets(frase, 30, arq) != NULL){
        puts(frase);
    }
    while(1){
        a = fgetc(arq);
        a = tolower(a);
        putchar(a);
        if (a == 'a'){
            i++;
        }
        e = fgetc(arq);
        e = tolower(e);
        putchar(e);
        if (e == 'e'){
            x++;
        }
        ii = fgetc(arq);
        ii = tolower(ii);
        putchar(ii);
        if (ii == 'i'){
            y++;
        }
        o = fgetc(arq);
        o = tolower(o);
        putchar(a);
        if (o == 'o'){
            z++;
        }
        u = fgetc(arq);
        u = tolower(u);
        putchar(u);
        if (u == 'u'){
            i++;
        }
        
        if(feof(arq)){
            break;
        }

    }
    printf("\nNumero de vezes que 'a' aparece: %d",i);
    
    fclose(arq);
}