//QUESTÃO 1
/*
#include <stdio.h>
void main(){
    printf("É preciso fazer todos os algoritmos para aprender");
}
*/

//QUESTÃO 2
/*
#include<stdio.h>
void main(){
    printf("Breno Alves Gomes dos Santos");
}
*/

//QUESTÃO 3
/*
#include <stdio.h>
int num;
void main(){
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("%d",num);
}
*/

//Questão 4
/*
#include <stdio.h>

void main(){
    int num1, num2;
    printf("Digite um numero: ");
    scanf("%d",&num1);
    printf("Digite outro numero: ");
    scanf("%d",&num2);
    printf("%d \n %d",num1, num2);
}
*/

//Questão 5
/*
#include <stdio.h>
void main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    printf("O sucessor e antecessor são: \n");
    printf("%d\n",num + 1);
    printf("%d",num - 1);
}
*/

//Questão 6
//sujestão de melhoria -diminuir codigo - resolver as variaveis com espaço
/*
#include <stdio.h>
char nome[20];
char endereco[20];
int telefone;
void main(){
    printf("Qual seu nome: ");
    scanf("%s",&nome);
    printf("Qual seu endereço? ");
    scanf("%s",&endereco);
    printf("Qual seu telefone? ");
    scanf("%d",&telefone);
    printf("%s\n", nome);
    printf("%s\n",endereco);
    printf("%d\n",telefone);
}
*/

//QUESTÃO 7
/*
#include<stdio.h>
void main(){
    int num1, num2;
    printf("Digite dois numeros espaçados: ");
    scanf("%d%d",&num1,&num2);
    printf("SOMA: %d", num1+num2);
}
*/

//QUESTÃO 8
/*
#include<stdio.h>
void main(){
    int num1, num2;
    printf("Digite dois numeros: ");
    scanf("%d%d", &num1,&num2);
    printf("PRODUTO: %d", num1*num2);
}
*/

//QUESTÃO 9
/*
#include <stdio.h>
void main(){
    float num1;
    printf("Digite um numero: ");
    scanf("%f",&num1);
    printf("A terça parte do seu numero é: %f", num1/3);
}
*/
/*
//QUESTÃO 10
#include <stdio.h>
void main(){
    float num1, num2;
    printf ("Digite dois numeros: ");
    scanf("%f%f",&num1,&num2);
    printf("MÉDIA: %f", (num1+num2)/2);
}
*/

//QUESTÃO 11
/*
#include <stdio.h>
void main(){
    float num1, num2, quociente, resto;
    printf("Digite os dois numeros: ");
    scanf("%f%f",&num1,&num2);
    printf("DIVIDENDO: %f\n",num1);
    printf("DIVISOR: %f\n",num2);
    quociente = num1 / num2;
    resto = num1 - ((int)(num1/num2)*num2);

    printf("QUOCIENTE: %f\n", quociente);
    printf("RESTO: %f\n", resto);
}
*/
/*
//QUESTÃO 12
#include <stdio.h>
void main(){
    int num1,num2,num3,num4,media;
    printf("Digite 4 numeros: ");
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
    media= (num1+(num2*2)+(num3*3)+(num4*4))/10;
    printf("A sua media ponderada é: %d",media);
}
*/
/*
//QUESTÃO 13
#include <stdio.h>
void main(){
    float produto, desconto;
    printf("Digite o valor do produto: ");
    scanf("%f",&produto);
    desconto = produto -(produto* 0.1);
    printf("Valor original: %.2f\n",produto);
    printf("Valor com desconto: %.2f", desconto);
}
*/
/*
//FAZENDO USANDO BIBLIOTECA
//QUESTÃO 14
#include <math.h>
void main(){
    float num1, resultado;
    printf("Digite um numero maoir que 0: ");
    scanf("%f",&num1);
    resultado = log10(num1);
    printf("O logaritmo na base 10 é: %.2f", resultado);
}
*/
/*
//QUESTÃO 15
#include<math.h>
void main(){
    float num, base, resultado;
    printf("Digite o numero que deseja calcular: ");
    scanf("%f",&num);
    printf("Digite a base: ");
    scanf("%f",&base);
    if (num > 0 && base > 0 && base != 1){
        resultado = log(num)/log(base);
        printf("O logaritmo é: %.2f", resultado);
    }
    else {
        printf("Valores invalidos");
    }
}

*/
/*
//QUESTÃO 16

#include <math.h>
int main(){
    float num1,raiz;
    printf("Digite um numero: ");
    scanf("%f",&num1);
    raiz = sqrt(num1);
    printf("Valor: %.2f\nQuadrado: %.2f\nraiz: %.2f", num1, num1*num1,raiz);
    return 0;
}
*/
/*
//QUESTÃO 17

#include<stdio.h>
void main(){
    float num1;
    printf("Digite o saldo da sua conta: ");
    scanf("%f",&num1);
    printf("Seu novo saldo com reajuste é: %.2f", num1+(num1*0.03));
}
*/
/*
//QUESTÃO 18
void main(){
    char data[7];
    int dia, mes, ano;
    printf("Qual a data de hoje(DDMMAA): ");
    scanf("%6s",data);
    sscanf(data,"%2d%2d%2d", &dia, &mes, &ano);
    printf("DIA: %02d\nMÊS: %02d\nANO: %02d",dia,mes,ano);

}
*/
/*
//QUESTÃO 19

#include<stdio.h>
void main(){
    int num1, num2;
    printf("Digite dois numeros: ");
    scanf("%d%d",&num1,&num2);
    if (num1>=num2){
        printf(num1,num2);
    }else{
        printf(num2,num1);
    }
    
}
*/
/*
//QUESTÃO 28
#include <stdio.h>
void main(){
    float valorhora, total;
    int numAulas;
    printf("Qual valor da hora: ");
    scanf("%f", &valorhora);
    printf("Quantas aulas dadas: ");
    scanf("%d",&numAulas);
    total = (valorhora*numAulas);
    printf("Horas trabalhadas: %d\n",numAulas);
    printf("Valor da hora: %.2f\n",valorhora);
    printf("Foi descontado 9 porcento ou seja: %.2f\n",total*0.09);
    printf("O salario bruto é: %.2f\n", total);
    printf("Salario liquido é: %.2f",total-(total*0.09));
}
*/
/*
//QUESTÃO 32
#include <stdio.h>
void main(){
    float volume, raio, altura,pi;
    pi = 3.1415;
    printf("QUal raio da lata: ");
    scanf("%f",&raio);
    printf("Qual altura: ",&altura);
    scanf("%f",&altura);
    volume= pi*(raio*raio)*altura;
    printf("O volume é: %.2f",volume);


}
*/
/*
//QUESTÃO 33

#include <stdio.h>
void main(){
    int idade;
    printf("Qual idade: ");
    scanf("%d",&idade);
    if (idade >= 18 && idade < 65 ){
        printf("MAIOR DE IDADE");
    }
    else if (idade >= 65){
        printf("IDOSO MAIOR QUE 65");
    }
    else{
        printf("MENOR DE IDADE");
    }
    
}
*/
/*
//QUESTÃO 31
#include<stdio.h>
void main(){
    float salario;
    char nome[20];
    printf("Qual seu nome: ");
    scanf("%s",&nome);
    printf("Digite seu salario: ");
    scanf("%f",&salario);
    printf("Olá %s\n\n", nome);

    if (salario > 3500){
        printf("Seu Salario bruto é: %.2fR$\nFoi descontado: %.2fR$ \nE o salario liquido ficou: %.2fR$",salario,
                salario*0.3,salario-(salario*0.3));
    }else if (salario > 2500){
        printf("Seu Salario bruto é: %.2fR$\nFoi descontado: %.2fR$\nE o salario liquido ficou: %.2fR$",salario,
                salario*0.25,salario-(salario*0.25));
    }else if(salario > 1200){
        printf("Seu Salario bruto é: %.2fR$\nFoi descontado: %.2fR$ \nE o salario liquido ficou: %.2fR$",salario,
                salario*0.2,salario-(salario*0.2));
    }else
        printf("Seu Salario bruto é: %.2fR$\nFoi descontado: 0R$\nE o salario liquido ficou: %.2fR$",salario,
                salario);

}
*/
/*
//QUESTÃO 27
#include<stdio.h>
void main(){
int l1, l2, l3;
    printf("Digite três numeros: ");
    scanf("%d%d%d",&l1,&l2,&l3);
    if (l1 + l2 > l3 && l2 + l3 > l1 && l1 + l3 > l2) {
        printf("e triangulo");
    }else {
        printf("Não é triangulo");
    }
}
*/

//QUESTÕES 28 35 35 51 53

//QUESTÃO 28
/*
#include <stdio.h>
void main(){
    float lado1,lado2,lado3;

    printf("Digite os lados do triangulo: ");
    scanf("%f%f%f",&lado1,&lado2,&lado3);
    if(lado1 == lado2 && lado2 == lado3) {
        printf("equilatero");
    }
    else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3 ){
        printf("Isoceles");
    }
    else{
        printf("escaleno");
    }
}


*/
/*

//QUESTÃO 35
#include<stdio.h>
#include<string.h>
void main(){
    char nome[20],sexo;
    int idade;

    printf("Qual seu nome: ");
    scanf("%s",&nome);
    printf("Qual sexo:(M/F): ");
    scanf(" %c",&sexo);
    sexo = toupper(sexo);
    printf("Qual sua idade: ");
    scanf("%d",&idade);
    if ((idade < 25) && (sexo == 'F')){
        printf("%s, Aceita",nome);
    }else{
        printf("%s, Não aceita(o)",nome);
    }
}
*/

/*
//QUESTÃO 51
#include<stdio.h>
int n1,num;
void main(){
    printf("Digite um numero de 4 casas");
    scanf("%d",&n1);
    num = n1/100;
    if(num % 4 == 0){
        printf("é divisivel por 4");

    }else{
        printf("Não é divisivel por 4");
    }
}
*/
//QUESTÃO 53
/*
#include<stdio.h>
#include<string.h>
void main(){
    char pratos[4][20],sobremesas[4][20],bebida[4][20];
    int opcao_Sobremesa,opcao_Bebida,opcao_Prato;
    float total;

    float cal_Pratos[4] = {180,230,250,350};
    float cal_Sobreme[4]= {75, 110, 170, 200};
    float cal_Bebidas[4]= {20, 70, 90, 65};
    printf("PRATOS:\n1-VEGETARIANO\n2-PEIXE\n3-FRANGO\n4-CARNE\n\nSOBREMESA\n1-ABACAXI\n2-SORVETE DIET\n3-MOUSSE DIET\n4-MOUSSE CHOCOLATE\n\nBEBIDAS\n1-CHÁ\n2-SUCO DE LARANJA\n3-SUCO DE LIMÃO\n4-REFRI DIET\n");

    printf("Digite o numero equivalente ao PRATO que deseja: ");
    scanf("%d",&opcao_Prato);
    printf("Digite o numero equivalente a SOBREMESA que deseja: ");
    scanf("%d",&opcao_Sobremesa);
    printf("Digite o numero equivalente a BEBIDA que deseja: ");
    scanf("%d",&opcao_Bebida);
    switch (opcao_Prato){
    case 1: total = cal_Pratos[0];break;
    case 2: total = cal_Pratos[1];break;
    case 3: total = cal_Pratos[2];break;
    case 4: total = cal_Pratos[3];break;
    }
    
    switch (opcao_Sobremesa){
    case 1: total = total + cal_Sobreme[0];break;
    case 2: total = total + cal_Sobreme[1];break;
    case 3: total = total + cal_Sobreme[2];break;
    case 4: total = total +  cal_Sobreme[3];break;
    }
    switch (opcao_Bebida){
    case 1: total = total + cal_Bebidas[0];break;
    case 2: total = total +  cal_Bebidas[1];break;
    case 3: total = total + cal_Bebidas[2];break;
    case 4: total = total + cal_Bebidas[3];break;
    }
    
printf("O total de calorias foi %.2f CALORIAS",total);
}

*/
/*
#include<stdio.h>
void main(){
    float peso,altura,imc;

    printf("Qual seu peso?(KG) ");
    scanf("%f",&peso);
    printf("Qual sua altura?(CM) ");
    scanf("%f",&altura);
    altura = altura/100;
    imc = peso / (altura*altura);
    printf("Seu IMC é: %.2f\n",imc);
    if (imc < 20){
        printf("Abaixo do peso");
    }else if(imc >=20 && imc <=25){
        printf("Peso normal");
    }else if(imc >= 25 && imc <=30){
        printf("Excesso de peso");
    }else if(imc >= 30 && imc <= 35){
        printf("Obesidade tipo 1");
    }else if(imc >= 35 && imc <=40){
        printf("Obesidade tipo 2");
    }else{
        printf("Obesidade morbida");
    }
}
*/
/*
#include<stdio.h>
void main(){
    int numero = 1,soma=0;
    
    while (numero != 0){
        printf("Digite um numero: ");
        scanf("%d",&numero);
        soma = soma + numero;
        printf("\nA PARCIAL é: %d\n",soma);
    } 
    printf("\nA soma TOTAL é: %d",soma);
    
}
*/
/*
#include<stdio.h>
void main(){
    int idade, count21=0, count50 =0;
    while (idade > 0){
        printf("Digite a idade: ");
        scanf("%d",&idade);
        if (idade < 21 && idade > 0){
            count21++;
        }else if (idade > 50){
            count50++;
        }   
    }
    printf("Pessoas com menos que 21: %d \n Pessoas com mais que 50: %d",count21,count50);
    
}
*/
/*

//QUESTÃO 26
#include<stdio.h>
void main(){
    float preco, total=0;
    int codigo, quantidade=1;
    printf("Digite o codigo do produto: ");
    scanf("%f",&codigo);
    while (codigo != 0){
        printf("Qual preço do produto? ");
        scanf("%f",&preco);
        printf("Qual quantidade? ");
        scanf("%d",&quantidade);
        printf("\n\n\nDigite o codigo do produto:(0 para finalizar) ");
        scanf("%f",&codigo); 
        total = total + (preco*quantidade);
    }
    printf("O total da compra foi: %.2fR$",total);
}
*/
/*
#include<stdio.h>
#include<math.h>
void main(){
    float num=0;
    do{
        printf("Digite um numero maior que zero: ");  
        scanf("%f",&num);
        }while (num < 0);

    if(sqrt(num) == trunc(sqrt(num))){
    printf("Quadrado perfeito");
    }else{
        printf("Nao é quadrado perfeito");
    }
      
}
*/
/*
//QUESTÔES 10, 19,27,32,51 lista 3

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




*/
/*
//QUESTÃO 51
#include<stdio.h>
#include<math.h>
void main(){
    int decisao;
    float media,hipo,num1,num2,num3;
    printf("O que desesja fazer?\nCALCULAR HIPOTENUSA - 1\nA MEDIA - 2\nO MENOR NUMERO -3\n");
    scanf("%d",&decisao);
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

}
*/
/*
#include<stdio.h>
void main(){
    int i;
    for(i = 1; i <= 1000; i++){
    printf("%d\n",i);
}
}
*/
/*
#include<stdio.h>
void main(){
    int contador;
    float num, media;
    for (contador = 0; contador < 6; contador++){
        printf("Digite um numero: ");
        scanf("%f",&num);
        media = media + num;
    }
    printf("Sua media eh: %.2f",media/6);
}
*/
/*
#include<stdio.h>
void main(){
    int contador;
    for (contador = 0; contador <= 500; contador+=5){
        printf("%d\n",contador);

    }
}
*/
/*
#include<stdio.h>
void main(){
    int contador,num;
    printf("Digite o um numero: ");
    scanf("%d",&num);
    for (contador = 1; contador <= num; contador++){
        if (num % contador == 0){
            printf("%d\n",contador);
        }
        
    }
}
*/
/*
#include<stdio.h>
void main(){
    int contador,num;
    for (contador = 0; contador <= 10; contador++){
        printf("Digite um numero: ");
        
        printf("%d\n",contador);

    }
}
*/

//QUESTÕES 20,22,28,30
/*
#include<stdio.h>
void main(){
    int contador=0, num,soma=0, neg=0;
    for (contador = 0;contador < 20; contador++){
        printf("Digite um numero: ");
        scanf("%d",&num);
        if (num > 0){
            soma = soma + num;
        }else{
            neg++;
        }
    }
    printf("A soma dos numero é: %d\n e o total de negativos: %d",soma,neg);
}
*/
/*
//QUESTÃO 22
#include<stdio.h>
void main(){
    int contador = 1,num2;
    printf("Digite dois numeros: ");
    scanf("%d%d",&contador,&num2);
    if(contador < num2){
        for (contador; contador <= num2; contador++){
           printf("%d\n",contador);
        }
    }else{
        printf('erro');
    }
}
*/
/*
#include<stdio.h>
void main(){
    int num[4];
    for(int x=0; x<4;x++){
        printf("Digite um numero inteiro: ");
        scanf("%d",&num[x]);
    }
    printf("\nValores lidos: ");
    for (int x = 0; x < 4; x++){
        printf("\n%d",num[x]);
    }
    
}
*/
/*
#include<stdio.h>
void main(){
    int num[5];
    for(int x=0; x<5;x++){
        printf("\nDigite um numero inteiro: ");
        scanf("%d",&num[x]);
        if(num[x]%2==0){
            printf("\npar");
        }else{
            printf("\nImpar");
        }
    }
}
*/
/*
#include<stdio.h>
void main(){
    int A[6],B[6];
    for(int x=0; x<6;x++){
        printf("\nDigite um numero pra A: ");
        scanf("%d",&A[x]);
        printf("\nDigite um numero pra B: ");
        scanf("%d",&B[x]);
    }
    printf("A DIFERENÇA É: ");
    for(int x=0; x<6;x++){
        printf("\n%d-%d=%d",A[x],B[x],A[x]-B[x]);
    }
}
*/
//lista 5: 3 9 12 13
//QUESTÃO 3
/*
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
*/
//QUESTÃO 9
/*
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
*/
/*
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
*/
//QUESTÃO 13
/*
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
*/
/*
#include<stdio.h>
void main(){
    int mat [3][4];
    for (int x = 0; x < 3; x++){
        for (int y = 0; y <4; y++ ){
            printf("Digite um numero: ");
            scanf("%d",&mat[x][y]);
        }
        printf("\n");
    }    

    for (int n = 0; n < 3; n++ ){
        for(int m = 0; m< 4; m++){
            printf("%8d",mat[n][m]);
        }
        printf("\n");
    }

}
*/
/*
#include<stdio.h>
void main(){
    int matA[3][2], matB[3][2],result[3][2];
    for (int x = 0;x<3;x++){
        for (int y = 0; y<2;y++){
            printf("Digite um numero: ");
            scanf("%d",&matA[x][y]);
        }
    }
    printf("\n");
    for (int m = 0;m<3;m++){
        for (int n = 0; n<2;n++){
            printf("Digite um numero: ");
            scanf("%d",&matB[m][n]);
        }
    }
     for (int j = 0;j<3;j++){
        for (int k = 0; k<2;k++){
            result[j][k]=matA[j][k] - matB[j][k];
        }
    }
    for (int n = 0; n < 3; n++ ){
        for(int m = 0; m< 2; m++){
            printf("%8d",result[n][m]);
        }
        printf("\n");
    }

}
*/
/*
#include<stdio.h>
void main(){
    int mat[5][5];
    for (int x = 0; x<5;x++){
        for (int y = 0; y<5;y++){
            printf("Digite um numero: ");
            scanf("%d",&mat[x][y]);
        }
    }
    printf("\n");
    for(int i = 0; i< 5;i++){
        for(int j = 0; j<5;j++){
            if (i<j){
                printf("%8d",mat[i][j]);
            }else{
                printf("%8s", " ");
            }
        printf("\n");
        }
    }
}
*/
/*
#include<stdio.h>
void main(){
    int mat[5][5], choiceL;
    for (int x = 0; x<5;x++){
        for (int y = 0; y<5;y++){
            printf("Digite um numero: ");
            scanf("%d",&mat[x][y]);
        }
    }
    while(choiceL > 5 && choiceL <= 0 ){
    printf("Digite linha  deseja ver");
    scanf("%d",&choiceL);
        for (int x= 0; x<5;x++){
                printf("%8d",mat[choiceL-1][x]);
        }
    }

}
*/
/*
#include<stdio.h>
void main(){
    struct aluno{
        char nome[20];
        int idade;
        float altura;

    }aluno1,aluno2;
    printf("Digite seu nome: ");
    scanf("%s",&aluno1.nome);
    printf("Digite sua idade: ");
    scanf("%d",&aluno1.idade);
    printf("Digite sua altura:");
    scanf("%f",&aluno1.altura);
    
    printf("\nDigite seu nome: ");
    scanf("%s",&aluno2.nome);
    printf("Digite sua idade: ");
    scanf("%d",&aluno2.idade);
    printf("Digite sua altura: ");
    scanf("%f",&aluno2.altura);

    printf("Nome do aluno 1: %s\nIdade do aluno 1: %d\naltura do aluno 1: %.1f\n\n",aluno1.nome,aluno1.idade,aluno1.altura);
    printf("Nome do aluno 2: %s\nIdade do aluno 2: %d\naltura do aluno 2: %.1f",aluno2.nome,aluno2.idade,aluno2.altura);
}
*/

/*
#include<stdio.h>
void main(){
typedef struct pessoa{
    char nome[30];
    int peso, idade;
};
}
*/
#include<stdio.h>

