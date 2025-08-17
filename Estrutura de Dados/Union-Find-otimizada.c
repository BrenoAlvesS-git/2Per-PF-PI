#include <stdio.h>                         

#define MAXN 1000                          // capacidade máxima de elementos

int parent[MAXN];                          // Vetor: parent[i] é o pai de i (se parent[i] == i, i é raiz)
int rankv[MAXN];                           // "Altura aproximada" da árvore cuja raiz é i

// Cria n conjuntos
void makeset(int n) {                     
    for (int i = 0; i < n; i++) {          
        parent[i] = i;                     
        rankv[i] = 0;                      // Rank inicial 0 (árvore com um único nó)
    }                                      
}                                          

// Encontra a raiz  de x com path compression
int find_set(int x) {                      
    if (parent[x] != x) {                  
        parent[x] = find_set(parent[x]);   // Comprime o caminho: pai de x vira a raiz diretamente
    }                                      // Após a chamada, parent[x] aponta para a raiz
    return parent[x];                      
}                                          

// Une os conjuntos de x e y usando union by rank
void union_sets(int x, int y) {            // Efetua a união com heurística por rank
    int rx = find_set(x);                  // Raiz do conjunto de x (com compressão no caminho)
    int ry = find_set(y);                  // Raiz do conjunto de y (com compressão no caminho)

    if (rx == ry){
    return;                  // Se já estão no mesmo conjunto não precisa fazer nada
    }
    if (rankv[rx] < rankv[ry]){           // Se a árvore de rx é menor que a de ry
        parent[rx] = ry;                   // Anexa rx sob ry mantém árvore mais rasa
    } else if (rankv[rx] > rankv[ry]) {    // Se a árvore de rx é maior que a de ry
        parent[ry] = rx;                   // Anexa ry sob rx
    } else {                               // Se têm o mesmo rank
        parent[ry] = rx;                   // Anexa ry sob rx 
        rankv[rx]++;                       // E incrementa o rank da nova raiz 
    }                                      
}                                          

int main(void) {                          
    int n = 7;                             // Ussando elementos 0..6
    makeset(n);                           

    union_sets(0, 1);                      // Une {0} e {1} → ranks iguais, 1 vai para 0, rank(0) = 1
    union_sets(1, 2);                      // Une conj(0,1) e {2} → 2 vai para 0 (rank 0 < rank 1)
    union_sets(3, 4);                      // Une {3} e {4} → ranks iguais, 4 vai para 3, rank(3) = 1
    union_sets(2, 4);                      // Une conj(0,1,2) (rank 1) e conj(3,4) (rank 1)
                                           // → 3 vai para 0 e rank(0) = 2 (porque eram iguais)

    // Chamadas a find_set aqui já comprimem os caminhos para acelerar futuras operações
    printf("find(4) = %d\n", find_set(4)); // Deve imprimir 0 (e comprime 4 -> 0 diretamente)
    printf("find(3) = %d\n", find_set(3)); // Deve imprimir 0
    printf("find(6) = %d\n", find_set(6)); // Deve imprimir 6 (isolado)

    // Mostra os vetores finais (parent e rankv) já bem "achatados" pela compressão
    printf("parent: ");
    for (int i = 0; i < n; i++) {          // Percorre 0..n-1
        printf("%d ", parent[i]);          // Exibe o pai de cada i
    }
    printf("\n");

    printf("rankv:  ");
    for (int i = 0; i < n; i++) {          // Percorre 0..n-1
        printf("%d ", rankv[i]);           // Exibe o rank de cada i
    }
    printf("\n");

    return 0;                               // Término normal
}                                           // Fim de main
