#include<stdio.h>
#include<math.h>
void main(){
    int decisao;
    float media,hipo,num1,num2,num3;
    printf("O que desesja fazer?\nCALCULAR HIPOTENUSA - 1 \nA MEDIA - 2 \nO MENOR NUMERO -3 \nPARA SAIR -4 ");
    scanf("%d",&decisao);
    do{
    
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
        /* code */
    } while (decisao!=4);

}