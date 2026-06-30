#include <stdio.h>

int main() {
    int valor = 10;
    int *ponteiro = &valor;

    printf("Valor original: %d\n", valor);
    printf("Endereco de memoria: %p\n", &valor);
    printf("Valor pelo ponteiro: %d\n", *ponteiro);

    *ponteiro = 25;

    printf("Novo valor: %d\n", valor);

    return 0;
}
