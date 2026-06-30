#include <stdio.h>

int main() {
    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 60) {
        printf("Aluno aprovado.\n");
    } else if (nota >= 40) {
        printf("Aluno em recuperacao.\n");
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}
