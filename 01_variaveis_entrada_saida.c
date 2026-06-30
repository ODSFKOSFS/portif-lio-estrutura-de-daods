#include <stdio.h>

int main() {
    int idade;
    float nota;
    char inicial;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    printf("Digite a inicial do seu nome: ");
    scanf(" %c", &inicial);

    printf("\nIdade: %d\n", idade);
    printf("Nota: %.2f\n", nota);
    printf("Inicial: %c\n", inicial);

    return 0;
}
