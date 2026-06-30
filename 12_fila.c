#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *prox;
} No;

typedef struct {
    No *inicio;
    No *fim;
} Fila;

void inicializar(Fila *f) {
    f->inicio = NULL;
    f->fim = NULL;
}

void enfileirar(Fila *f, int valor) {
    No *novo = (No*) malloc(sizeof(No));
    novo->valor = valor;
    novo->prox = NULL;

    if (f->fim == NULL) {
        f->inicio = novo;
        f->fim = novo;
    } else {
        f->fim->prox = novo;
        f->fim = novo;
    }
}

int desenfileirar(Fila *f) {
    if (f->inicio == NULL) {
        printf("Fila vazia.\n");
        return -1;
    }

    No *temp = f->inicio;
    int valor = temp->valor;

    f->inicio = temp->prox;

    if (f->inicio == NULL) {
        f->fim = NULL;
    }

    free(temp);

    return valor;
}

int main() {
    Fila fila;

    inicializar(&fila);

    enfileirar(&fila, 10);
    enfileirar(&fila, 20);
    enfileirar(&fila, 30);

    printf("Removido: %d\n", desenfileirar(&fila));
    printf("Removido: %d\n", desenfileirar(&fila));

    return 0;
}
