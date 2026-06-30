#include <stdio.h>

int main() {
    int i, soma = 0;

    for (i = 1; i <= 10; i++) {
        soma += i;
    }

    printf("Soma de 1 ate 10: %d\n", soma);

    return 0;
}
