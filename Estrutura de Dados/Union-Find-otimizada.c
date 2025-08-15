#include <stdio.h>
#define MAXN 1000
int parent[MAXN], rank[MAXN];

void makeset(int n) {
    for (int i = 0; i < n; i++) {
        parent[i] = i;
        rank[i] = 0;
    }
}

int find(int x) {
    if (parent[x] != x) {
        parent[x] = find(parent[x]);
    }
    return parent[x];
}

void union_sets(int x, int y) {
    int rx = find(x);
    int ry = find(y);
    if (rx != ry) {
        if (rank[rx] < rank[ry])
            parent[rx] = ry;
        else if (rank[rx] > rank[ry])
            parent[ry] = rx;
        else {
            parent[ry] = rx;
            rank[rx]++;
        }
    }
}

int main() {
    makeset(5);

    union_sets(0, 1);
    union_sets(1, 2);

    printf("Representante de 2: %d\n", find(2)); // Deve ser o mesmo de 0 e 1
    printf("Representante de 3: %d\n", find(3));

    return 0;
}
