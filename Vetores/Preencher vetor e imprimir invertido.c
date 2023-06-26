#include <stdio.h>

int main() {
    int vetor[10];
    int i;

    printf("Preencha o vetor de tamanho 10:\n");

    for (i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Vetor em ordem inversa:\n");

    for (i = 9; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}
