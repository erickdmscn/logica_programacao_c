#include <stdio.h>

int main() {
    int num;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("%d e um numero par", num);
    } else {
        printf("%d e um numero impar", num);
    }
    
    if (num >= 0) {
        printf(" e positivo.\n");
    } else {
        printf(" e negativo.\n");
    }
    
    return 0;
}
