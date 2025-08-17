#include <stdio.h>                      // Biblioteca padrão de entrada/saída (printf)

#define MAXN 1000                       // Capacidade máxima de elementos na estrutura

int parent[MAXN];                       // Vetor que guarda o pai de cada elemento (representante se parent[i] == i)

void makeset(int n) {                   // inicializa a estrutura
    for (int i = 0; i < n; i++) {       // percorre todos os índices de 0 até n-1
        parent[i] = i;                  // cada elemento é pai de si mesmo (raiz do próprio conjunto)
    }                                   
}                                       

// Encontra a raiz do conjunto que contém x sem compressão de caminho
int find_set(int x) {                   // Retorna o representante do conjunto de x
    while (parent[x] != x) {            
        x = parent[x];                  // Sobe um nível na árvore (segue o ponteiro para o pai)
    }                                   // Quando parent[x] == x, encontramos a raiz
    return x;                           
}                                       

// Une os conjuntos que contêm x e y (sem otimização)
void union_sets(int x, int y) {         
    int rx = find_set(x);               // raiz do conjunto de x
    int ry = find_set(y);               // raiz do conjunto de y
    if (rx != ry) {                     // Só une se as raízes forem diferentes 
        parent[ry] = rx;                // Faz a raiz de y apontar para a raiz de x 
    }                                   
}                                       

int main(void) {                       
    int n = 7;                          
    makeset(n);                         

    union_sets(0, 1);                   // Une {0} e {1} → raiz(1) passa a ser 0
    union_sets(1, 2);                   // Une conj(1) e {2} → na prática une 0 e 2, raiz(2) passa a ser 0
    union_sets(3, 4);                   // Une {3} e {4} → raiz(4) passa a ser 3
    union_sets(2, 4);                   // Une conj(0,1,2) e conj(3,4) → raiz(3) passa a ser 0

    printf("find(2) = %d\n", find_set(2)); // Deve imprimir 0 
    printf("find(4) = %d\n", find_set(4)); // Deve imprimir 0 
    printf("find(6) = %d\n", find_set(6)); // Deve imprimir 6 

    // Mostra o vetor parent final
    printf("parent: ");
    for (int i = 0; i < n; i++) {       
        printf("%d ", parent[i]);       // Exibe o pai de cada índice
    }
    printf("\n");                       

    return 0;                         
}                                     
