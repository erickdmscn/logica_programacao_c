#include <stdio.h>

int main() {
    int vetor[10];
    int somapares = 0;
    int somaimpares = 0;

    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            somapares += vetor[i];
        } else {
            somaimpares += vetor[i];
        }
    }

    printf("Soma dos números pares: %d\n", somapares);
    printf("Soma dos números ímpares: %d\n", somaimpares);

    return 0;
}
