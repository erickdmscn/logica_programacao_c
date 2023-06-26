#include <stdio.h>

int main() {
    int numero, x = 1, fatorial;

    while (x == 1) {
        printf("Digite o numero: ");
        scanf("%d", &numero);
           
            fatorial = numero * (numero - 1);     
   
        printf("O fatorial e: %d\n", fatorial);

        printf("[1] Continuar [0] Sair\n");
        scanf("%d", &x);
    }

    return 0;
}







