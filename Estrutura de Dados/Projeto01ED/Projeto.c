#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct atleta{
    char nome[30];
    char matricula[30];
    int idade, numeroCamisa, faltas;
    struct atleta *prox;
} Atleta;

typedef struct no {
    char nome[30];
    char esporte[30];
    char categoria[30];
    struct no *proxNo;
    Atleta *atletas;
} Equipe;

typedef struct listaGerenciada {
    Equipe *inicio;
    Equipe *fim;
    int quant;
} tipoLista;
/* função simples de inicialização da lista, deve ser chamada antes de qualquer interação com a lista*/
void inicializa(tipoLista *lista) {
    lista->inicio = NULL;
    lista->fim = NULL;
    lista->quant = 0;
}
/*função que cadastra novas equipes na lista do clube*/
int cadastraEquipe(tipoLista *listaEnc, char nom[30], char esp[30], char cat[30]) {
	//cria uma nova equipe alocando memoria suficiente para o tipo criado pelo struct
    Equipe *novoNo = (Equipe*) malloc(sizeof(Equipe));
    //aponta o ponteiro atletas para NULL
    novoNo->atletas = NULL;
    //verifica se a memoria foi alocada
    if (novoNo == NULL) return 0;
    //utilizando STRING.H copia o parâmetro passado nom para o campo nome de novoNo
    strcpy(novoNo->nome, nom);
     //utilizando STRING.H copia o parâmetro passado esp para o campo esporte de novoNo
    strcpy(novoNo->esporte, esp);
     //utilizando STRING.H copia o parâmetro passado cat para o campo categoria de novoNo
    strcpy(novoNo->categoria, cat);
    //aponta o ponteiro proxNo para NULL, tornando a nova equipe sempre o novo fim da lista
    novoNo->proxNo = NULL;
    //testa se a lista está vazia
    if (listaEnc->inicio == NULL) {
		//aponta o inicio da lista para a nova equipe criada
        listaEnc->inicio = novoNo;
        //aponta o fim da lista para a nova equipe criada
        listaEnc->fim = novoNo;
    } else {
		//aponta o proxNo do fim da lista para a nova equipe
        listaEnc->fim->proxNo = novoNo;
        //aponta o ponteiro de fim da lista para a nova equipe
        listaEnc->fim = novoNo;
    }
    //incrementa a quantidade de equipes da lista
    listaEnc->quant++;
    printf("Equipe inserida com sucesso!\n");

    return 1;
}
/* função que exibe todas as equipes presentes atualmente no clube*/
int exibeEquipes(tipoLista *listaEnc) {
	//declara um tipo Equipe auxiliar que será usado para percorrer a lista
    Equipe *atual;
    //testa se a lista está vazia
    if (listaEnc->inicio == NULL) return 0;
    //aponta o auxiliar para o primeiro elemento da lista
    atual = listaEnc->inicio;
    printf("\nEquipes do Clube:\n");
    //testa se o auxiliar existe
    while (atual != NULL) {
        printf("Nome: %s | Esporte: %s | Categoria: %s\n",atual->nome, atual->esporte, atual->categoria);
        //aponta para o próximo elemento
        atual = atual->proxNo;
    }
    
    return 1;
}
/* função que remove uma equipe, identificando qual equipe deve ser removida através de seu nome*/
int removeEquipePorNome(tipoLista *listaEnc, char nom[30]) {
	//testa se a lista tem equipes
    if (listaEnc->inicio == NULL) {
        printf("Clube sem equipes, impossível remover\n");
        return 0;
    }
    //aponta um nó auxiliar para o inicio
    Equipe *atual = listaEnc->inicio;
    //aponta outro nó auxiliar para NULL
    Equipe *anterior = NULL;
    //testa se atual não chegou ao final da lista
    while (atual != NULL) {
		//confere se o parametro nom é igual ao campo nome de atual
        if (strcmp(atual->nome, nom) == 0) {
			//testa se anterior continua apontando para NULL
            if (anterior == NULL) {
				//remove o primeiro elemento da lista
                listaEnc->inicio = atual->proxNo;
                //testa se atual chegou ao ultimo elemento da lista
                if (atual == listaEnc->fim) 
                //remove o ultimo elemento da lista 
                listaEnc->fim = NULL;
            } else {
				//remove um no no meio da lista
                anterior->proxNo = atual->proxNo;
                //testa se atual chegou ao ultimo elemento da lista
                if (atual == listaEnc->fim) 
                //aponta fim para anterior
                listaEnc->fim = anterior;
            }
            //libera memoria do no removido
            free(atual);
            //decrementa a quantidade de equipes do clube
            listaEnc->quant--;
            printf("Equipe removida com sucesso.\n");
            return 1;
        }
        //anterior recebe atual
        anterior = atual;
        //atual vai para o proximo nó da lista
        atual = atual->proxNo;
    }
    printf("Equipe nao encontrada, impossível remover.\n");

    return 0;
}

int removerAtleta(tipoLista *listaEnc, char nomeAtleta[30]) {
    // Verifica se a lista de equipes esta vazia
    if (listaEnc->inicio == NULL) {
        printf("Nenhuma equipe cadastrada, impossivel remover atleta\n");
        return 0;
    }

    // Aloca num ponteiro o inicio da lista de equipes
    Equipe *equipeAtual = listaEnc->inicio;

    // Percorre a lista das equipes
    while (equipeAtual != NULL) {
        // Verifica se a lista de atletas esta vazia
        if (equipeAtual->atletas != NULL) {
            // Aloca num ponteiro o atleta atual da lista de atletas
            Atleta *atual = equipeAtual->atletas;
            // Aloca num ponteiro o inicio da lista de atletas
            Atleta *inicio = equipeAtual->atletas;
            // Aloca NULL num ponteiro
            Atleta *anterior = NULL;

            // Percorre a lista de atletas
            do {
                // Se o atleta atual for o procurado
                if (strcmp(atual->nome, nomeAtleta) == 0)
                {
                    // Se o anterior for NULL significa que eh o primeiro atleta
                    if (anterior == NULL)
                    {
                        // Se o proximo atleta for ele mesmo significa que eh o unico
                        if (atual->prox == inicio)
                            // Atualiza a lista para vazia
                            equipeAtual->atletas = NULL;
                        else // Caso nao seja o unico atleta
                        {
                            // Encontra o último atleta
                            Atleta *ultimo = inicio;
                            // Percorre a lista de atletas ate o ultimo
                            while (ultimo->prox != inicio)
                                ultimo = ultimo->prox;
                            // Atualiza o ponteiro do ultimo atleta
                            ultimo->prox = atual->prox;
                            equipeAtual->atletas = atual->prox;
                        }
                    } else
                        // Remoção de nó no meio ou fim
                        anterior->prox = atual->prox;

                    // Liberando memoria
                    free(atual);
                    printf("Atleta %s removido da equipe %s\n", nomeAtleta, equipeAtual->nome);
                    return 1;
                }
                // Atualiza o atleta anterior
                anterior = atual;
                // Proximo atleta
                atual = atual->prox;
            } while (atual != inicio);
        }
        // // Proxima equipe
        equipeAtual = equipeAtual->proxNo;
    }
    printf("Atleta %s nao encontrado em nenhuma equipe\n", nomeAtleta);

    return 0;
}

Equipe *buscarEquipe(tipoLista *lista, char nome[30]){ //função para buscar equipe pelo nome
    Equipe *atual = lista->inicio; //cria uma variavel auxiliar pra não mudar a lista e poder percorrer ela
    while(atual != NULL){
        if(strcmp(atual->nome, nome)==0){
            return atual; //quando atual->nome for igual ao nome recebido pela função ela retorna ele
        }
        atual = atual->proxNo; // pra avançar nos nomes
    }
    return NULL; //caso não encontre a equipe retorna null
}

//Função de cadastrar atleta
int cadastrarAtletaEquipe(tipoLista *listaEquipes, char nomeEquipe[], Atleta novoAtleta){
    Equipe *equipe = buscarEquipe(listaEquipes, nomeEquipe); //Usa a função de buscar equipe para ver em qual equipe cadastrar o atleta
    if(equipe ==NULL){ //caso não ache a equipe, retorna 0
        printf("Equipe não encontrada\n");
        return 0;
    }
    Atleta *novo = malloc(sizeof(Atleta));// aloca dinamicamente um novo nó atleta
    if(novo == NULL){
        printf("Erro ao alocar memoria");
        return 0;
    }
    /*Area a seguir é pra copiar os dados do atleta que esta na lista para outra lista  */
    strcpy(novo->nome, novoAtleta.nome);
    strcpy(novo->matricula, novoAtleta.matricula);
    novo->idade = novoAtleta.idade;
    novo->numeroCamisa = novoAtleta.numeroCamisa;
    novo->faltas = novoAtleta.faltas;

    if(equipe->atletas == NULL){  //Caso seja o primeiro atleta da equipe ele aponta pra ele mesmo
        novo->prox = novo; //aponta pra ele mesmo
        equipe->atletas = novo;
    }else{                         //Se não for ele é inserido no fim da da lista circular
        Atleta *inicio = equipe->atletas;  
        Atleta *atual = inicio;

        while(atual->prox != inicio){//percorre a lista até o último
            atual = atual->prox;
        }
        atual->prox = novo;
        novo->prox =inicio;
    }
    printf("Atleta cadastrado na equipe '%s'\n",nomeEquipe);
    
    return 1;
}

//funcao mostrar composiçao equipe, utilizo o buscar equipe para achar, o seu resultado eu imprimo os dados
int mostrarComposicaoEquipe(tipoLista *listaEquipes, char nomeEquipe[30]) {
    Equipe *equipe = buscarEquipe(listaEquipes,nomeEquipe); //busco a equipe pelo nome
    if (equipe==NULL) {
        printf("Equipe nao encontrada\n");
        return 0; //indica a falha
    }

    printf("\n---composicao da equipe: %s---\n",equipe->nome);

    //verifico se existem atletas cadastrados
    if (equipe->atletas == NULL) {
        printf("Equipe nao tem atletas cadastrados \n");
        return 1; //lista esta vazia
    }

    //percorrer a lista circular de atletas
    Atleta *inicio = equipe->atletas; //guardo o ponteiro pro primeiro atleta
    Atleta *atletaatual = inicio; //ponteiro auxiliar para percorrer a lista

    //percorrer e imprimir
    do {
        printf("Nome: %s | Matricula: %s | Camisa: %d | Idade: %d\n",
            atletaatual->nome,atletaatual->matricula,
            atletaatual->numeroCamisa,atletaatual->idade);

          atletaatual = atletaatual->prox;
    } while (atletaatual != inicio); //paro de percorrer quando chegar ao primeiro atleta novamente
    printf("------------------------------------\n");
    return 1;
}

//funcao para mostrar os dados do atleta buscado
Atleta *mostrarDadosAtleta(tipoLista *listaEquipes, char nomeDados[30]) {
    //preciso buscar o nome do atleta em todas as listas
    //ponteiro para percorrer as equipes
    Equipe *equipeatual = listaEquipes->inicio; //o ponteiro vai apontar para a primeira equipe

    //crio um laço externo par percorrer todas as equipes
    while (equipeatual != NULL) {

      //verifico se a equipe atual tem atletas
        if (equipeatual->atletas != NULL) {


            //crio um laco interno para percorrer a lista circular atual
            Atleta *inicio = equipeatual->atletas; // aponta para o primeiro
            Atleta *atletaatual  = inicio; //ponteiro auxiliar para percorrer

            do {
                //compara para ver se o nome colocado bate com o nome da lista
                if (strcmp(atletaatual->nome, nomeDados)==0) {
                    // --- ATLETA ENCONTRADO! ---
                    printf("\n--- Atleta Encontrado ---\n");
                    printf("Nome:      %s\n", atletaatual->nome);
                    printf("Matricula: %s\n", atletaatual->matricula);
                    printf("Equipe:    %s (%s)\n", equipeatual->nome, equipeatual->esporte); // Informação extra útil
                    printf("Idade:     %d\n", atletaatual->idade);
                    printf("Camisa:    %d\n", atletaatual->numeroCamisa);
                    printf("---------------------------\n");

                    // Retorna o ponteiro para o atleta e encerra a função
                    return atletaatual;
                }
                atletaatual = atletaatual->prox;

            }while(atletaatual!=inicio);
        }

        //vou para a proxima equipe, se nao foi encontrado
        equipeatual = equipeatual->proxNo;
    }
    //se percorreu tudo e nao encontrou, retorno NULL
    printf("Jogador nao encontrado\n");
    return NULL;

}

//funcao para mostrar dados de todos os atletas de determinada categoria
void mostrarDadosAtletasdaCategoria(tipoLista *listaEquipes, char categoria[30]) {
    //criar o ponteiro para percorrer as equipes
    Equipe *equipeatual = listaEquipes->inicio;

    //crio para controlar se nao achar nenhum jogador
    int jogadorencontrado = 0;

    printf("\n---ATLETAS DA CATEGORIA: %s---\n",categoria);


    //loop externo para percorrer todas as equipes
    while (equipeatual != NULL) {
        //verifico a categoria das equipes
        if (strcmp(equipeatual->categoria,categoria)==0) {


            //verifiquei se a equipe e da categoria certa agora, imprimo todos os seus atletas

            //verifico se a equipe tem atletas
            if (equipeatual->atletas != NULL) {
                Atleta *inicio = equipeatual->atletas;//guardo o primeiro atleta da equipe
                Atleta *atletaatual = inicio; //percorro

                //marca que encontrei pelo menos um jogador
                jogadorencontrado = 1;

                printf("\nEquipe: %s (%s)\n", equipeatual->nome, equipeatual->esporte);
                printf("---------------------------\n");

                //faco o loop interno para printar os jogadores
                do {
                    printf("Nome:      %s\n", atletaatual->nome);
                    printf("Matricula: %s\n", atletaatual->matricula);
                    printf("Equipe:    %s (%s)\n", equipeatual->nome, equipeatual->esporte); // Informação extra útil
                    printf("Idade:     %d\n", atletaatual->idade);
                    printf("Camisa:    %d\n", atletaatual->numeroCamisa);
                    printf("---------------------------\n");

                    atletaatual = atletaatual->prox;
                }while (atletaatual!=inicio);

            }
        }
        equipeatual = equipeatual->proxNo;//move para a proxima equipe
    }

//se nao existir nenhum jogador dessa categoria
    if (jogadorencontrado==0) {
        printf("Nenhum atleta encontrado para esta categoria.\n");
    }
    printf("------------------------------------\n");
}

// funcao do menu do do switch
void menu() {
    printf("================================\n");
    printf("1 - Criar time\n");
    printf("2 - Cadastrar atleta em time\n");
    printf("3 - Remover atleta\n");
    printf("4 - Remover time\n");
    printf("5 - Mostrar todas equipes cadastradas\n");
    printf("6 - Mostrar composicao de time especifico\n");
    printf("7 - Mostrar dados de atleta especifico\n");
    printf("8 - Mostrar dados de todos os atletas de determinada categoria\n");
    printf("9 - Sair\n");
    printf("================================\n");
}

//funcao para liberar a memoria da lista dos atletas
void liberarMemoriaAtletas(Atleta *inicio){
    if(inicio == NULL) return;

    Atleta *atual = inicio->prox;
    while(atual != inicio){
        Atleta *prox = atual->prox;
        free(atual);
        atual=prox;
    }
    free(inicio);
}

//funcao para liberar a memoria da lista geral, contendo as equipes e seus atletas
void liberarMemoriaLista(tipoLista *lista){
    Equipe *atual = lista->inicio;
    while(atual != NULL){
        Equipe *prox = atual->proxNo;
        liberarMemoriaAtletas(atual->atletas);
        free(atual);
        atual = prox;
    }
    lista->inicio = NULL;
    lista->fim = NULL;
    lista->quant = 0;
}

int main() {
    tipoLista lista;
    char nome[30];
    inicializa(&lista);
    

    int opcao;
    do {
        menu();
        printf("Digite sua opcao: ");
        scanf("%d", &opcao);
        getchar(); // Limpa o '\n' que sobra no buffer apos scanf

        switch(opcao) {
            case 1: {
                char nome[30], esporte[30], categoria[30];

                printf("Nome do time: ");
                fgets(nome, 30, stdin);
                nome[strcspn(nome, "\n")] = 0;

                printf("Esporte: ");
                fgets(esporte, 30, stdin);
                esporte[strcspn(esporte, "\n")] = 0;

                printf("Categoria: ");
                fgets(categoria, 30, stdin);
                categoria[strcspn(categoria, "\n")] = 0;

                cadastraEquipe(&lista, nome, esporte, categoria);
                break;
            }

            case 2: {
                Atleta a;
                char nomeEquipe[30];

                printf("Equipe em que o atleta vai ser cadastrado: ");
                fgets(nomeEquipe, 30, stdin);
                nomeEquipe[strcspn(nomeEquipe, "\n")] = 0;

                printf("Nome do atleta: ");
                fgets(a.nome, 30, stdin);
                a.nome[strcspn(a.nome, "\n")] = 0;

                printf("Matricula: ");
                fgets(a.matricula, 30, stdin);
                a.matricula[strcspn(a.matricula, "\n")] = 0;

                printf("Idade: ");
                scanf("%d", &a.idade);

                printf("Numero da camisa: ");
                scanf("%d", &a.numeroCamisa);

                printf("Faltas: ");
                scanf("%d", &a.faltas);
                getchar();

                cadastrarAtletaEquipe(&lista, nomeEquipe, a);
                break;
            }

            case 3:
                printf("Digite o nome do atleta que deseja remover: ");
                fgets(nome, 30, stdin);
                nome[strcspn(nome, "\n")] = 0;

                removerAtleta(&lista, nome);
                break;

            case 4: {
                char nome[30];
                printf("Digite o nome da equipe que deseja remover: ");
                fgets(nome, 30, stdin);
                nome[strcspn(nome, "\n")] = 0;

                removeEquipePorNome(&lista, nome);
                break;
            }

            case 5:
                exibeEquipes(&lista);
                break;

            case 6: {
                char nome[30];
                printf("Digite o nome do time: ");
                fgets(nome, 30, stdin);
                nome[strcspn(nome, "\n")] = 0;

                mostrarComposicaoEquipe(&lista, nome);
                break;
            }

            case 7: {
                char nome[30];
                printf("Digite o nome do atleta que deseja visualizar: ");
                fgets(nome, 30, stdin);
                nome[strcspn(nome, "\n")] = 0;

                mostrarDadosAtleta(&lista, nome);
                break;
            }

            case 8: {
                char categoria[30];
                printf("Digite a categoria que deseja visualizar os atletas: ");
                fgets(categoria, 30, stdin);
                categoria[strcspn(categoria, "\n")] = 0;

                mostrarDadosAtletasdaCategoria(&lista, categoria);
                break;
            }

            case 9:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida, tente novamente.\n");
                break;
        }
    } while (opcao != 9);

    liberarMemoriaLista(&lista);

    return 0;
}