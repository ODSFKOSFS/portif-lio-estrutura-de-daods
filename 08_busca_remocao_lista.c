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

No* buscar(No *lista, int valor) {
    No *p = lista;

    while (p != NULL) {
        if (p->valor == valor) {
            return p;
        }
        p = p->prox;
    }

    return NULL;
}

No* removerInicio(No *lista) {
    if (lista == NULL) {
        return NULL;
    }

    No *temp = lista;
    lista = lista->prox;
    free(temp);

    return lista;
}

void imprimirLista(No *lista) {
    while (lista != NULL) {
        printf("%d -> ", lista->valor);
        lista = lista->prox;
    }
    printf("NULL\n");
}

int main() {
    No *lista = NULL;
    No *resultado;

    lista = inserirInicio(lista, 30);
    lista = inserirInicio(lista, 20);
    lista = inserirInicio(lista, 10);

    imprimirLista(lista);

    resultado = buscar(lista, 20);

    if (resultado != NULL) {
        printf("Valor encontrado: %d\n", resultado->valor);
    } else {
        printf("Valor nao encontrado.\n");
    }

    lista = removerInicio(lista);

    imprimirLista(lista);

    return 0;
}
