#include <stdio.h>

int main() {
    int vetor[5] = {10, 20, 30, 40, 50};
    int matriz[2][2] = {{1, 2}, {3, 4}};
    int i, j;

    printf("Vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n\nMatriz:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}




