#include <stdio.h>

int main() {
    int numero;
    
    printf("Numeros ímpares entre 10 e 20:\n");
    
    for (numero = 10; numero <= 20; numero++) {
        if (numero % 2 != 0) {
            printf("%d\n", numero);
        }
    }
    
    return 0;
}
