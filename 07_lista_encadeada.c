#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *prox;
} No;

No* inserirInicio(No *lista, int valor) {
    No *novo = (No*) malloc(sizeof(No));
    novo->valor = valor;
    novo->prox = lista;
    return novo;
}

void imprimirLista(No *lista) {
    No *p = lista;

    while (p != NULL) {
        printf("%d -> ", p->valor);
        p = p->prox;
    }

    printf("NULL\n");
}

int main() {
    No *lista = NULL;

    lista = inserirInicio(lista, 30);
    lista = inserirInicio(lista, 20);
    lista = inserirInicio(lista, 10);

    imprimirLista(lista);

    return 0;
}
