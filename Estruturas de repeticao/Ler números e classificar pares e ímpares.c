#include <stdio.h>

int main() {
    int numero, pares = 0, impares = 0;
    int i;

    printf("Digite 10 numeros inteiros:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);

    return 0;
}
