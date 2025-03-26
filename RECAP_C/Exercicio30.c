#include<stdio.h>

void main(){
    char vendedores[30][2];
    int  i=0,u ,decisao;
    float venda[30][2],valVenda, total;
    while(decisao != 8){
    printf("1-Cadastrar vendedor\n2-Listar vendedores\n3-Cadastra venda semanal\n");
    printf("4-Calcula e listar total de vendas\n5-lista semana especifica\n6-Calcula e lista total de vendas da loja no mes\n7-Lista vendedor Premio\n8-Sair\nO que deseja fazer? ");
    scanf("%d",&decisao);
    getchar();
    switch (decisao){
    case 1:
        if (i<30){

        printf("Digite o nome do vendedor %d: ",i+1);
        fgets(vendedores[i], 40 ,stdin);
        fflush(stdin);
        i++;
        decisao = 0;
        }else{
            printf("LISTA CHEIA");
        }
        system("pause");
        break;
        case 2:
            printf("\n===== Lista de Vendedores =====\n");
            for (int x = 0; x < i; x++) {
                printf("%d - %s\n", x + 1, vendedores[x]);
            }
            printf("==============================\n");
            system("pause");
        break;
        case 3:
           /* printf("Qual nº do vendendor: ");
            scanf("%d",&u);
            printf("\nQual valor da venda? ");
            scanf("%d",venda);
            for(int x = 0; x<i;x++){
                venda[u][x] = valVenda;
            }
            u = 0;   */
        break;
        case 4:
           /* printf("Qual vendedor deseja as informações? ");
            scanf("%d",u);
            for(int x = 0; x<i;x++){
                total += venda[u][x];
            }
            printf("O vendedor %d vendeu %.2f",u,total);*/
        break;
    default:
        break;
    }
}
}