#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct node {
    char CPF[12];
    char name[100];
    struct node *next;
};

struct node* add(struct node* tail, char CPF[], char name[]) {
    struct node* newnode = malloc(sizeof(struct node));
    strcpy(newnode->CPF, CPF);
    strcpy(newnode->name, name);

    if (tail == NULL) {
        tail = newnode;
        newnode->next = newnode;
    } else {
        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;
    }
    return tail;
}

void print(struct node* tail) {
    if (tail == NULL) {
        printf("Nao ha participantes cadastrados\n");
        return;
    }
    struct node *p = tail->next;
    do {
        printf("CPF: %s\n", p->CPF);
        printf("Nome: %s\n", p->name);
        p = p->next;
    } while (p != tail->next);
    printf("\n");
}

struct node* removerParticipante(struct node *tail, int position) {
    if (tail == NULL) return NULL;

    struct node *current = tail->next;
    struct node *prev = tail;

    if (position == 0) {
        if (current == tail) {
            printf("Removido: %s : %s\n", current->name, current->CPF);
            free(current);
            return NULL;
        } else {
            prev->next = current->next;
            printf("Removido: %s : %s\n", current->name, current->CPF);
            free(current);
            return tail;
        }
    }

    for (int i = 0; i < position; i++) {
        prev = current;
        current = current->next;
    }

    prev->next = current->next;
    if (current == tail)
        tail = prev;

    printf("Removido: %s : %s\n", current->name, current->CPF);
    free(current);
    return tail;
}

struct node* draw(struct node *tail, int numeroDeParticipantes) {
    int size = numeroDeParticipantes;
    while (size > 1) {
        int sortedPosition = rand() % size;
        tail = removerParticipante(tail, sortedPosition);
        size--;
    }
    return tail;
}

void printWinner(struct node *winner) {
    if (winner) {
        printf("\nO vencedor do sorteio foi:\n");
        printf("Nome: %s\n", winner->name);
        printf("CPF: %s\n", winner->CPF);
    }
}

int main(void) {
    srand(time(NULL));
    struct node *tail = NULL;
    int i, n;
    char name[100];
    char CPF[12];

    printf("O numero de participantes: ");
    scanf("%d", &n);
    if (n <= 0) return 0;

    for (i = 0; i < n; i++) {
        printf("\nCadastre o participante %d:\n", i + 1);
        printf("CPF (11 digitos): ");
        scanf("%11s", CPF);
        printf("Nome: ");
        scanf(" %99s", name);  // ou fgets para nomes com espaço
        tail = add(tail, CPF, name);
    }

    printf("\nLista de participantes:\n");
    print(tail);

    struct node *winner = draw(tail, n);
    printWinner(winner);

    return 0;
}

