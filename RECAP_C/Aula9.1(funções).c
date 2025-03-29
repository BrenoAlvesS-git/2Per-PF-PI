//É POSSÍVEL CHAMAR FUNÇÕES DEPOIS DO main(), inicando ela antes
//float maior(float num1, float num2); caso se usasse isso, a função maior poderia estar após o fim do main()

float maior(float num1, float num2){
    if (num1>num2){
        return num1;
    }else{
        return num2;
    }
}
//FUNÇÃO DE VETOR
void imprime(int v[], int tam){
    for(int x = 0; x< tam; x++){
        printf("%d ", v[x]);
    }
}
//FUNÇÃO DE MATRIZ
void imprime(int m[][4], int n){
    for(int x = 0; x< n; x++){
        for(int y = 0; y< 4; y++){
            printf("%d ",m[x][y]);
        }
    }
}
//OUTRA FUNÇÃO DE VETOR
void imprime5(int v[5]){
    for(int x = 0; x< 5; x++){
        printf("%d ", v[x]);
    }
}



void main(){
    float x,y,m;
    printf("Digite dois numeros: ");
    scanf("%f%f",&x,&y);
    m = maior(x,y);
    printf("O maior numero é: %.2f ou %.2f",m, maior(x,y));
}

