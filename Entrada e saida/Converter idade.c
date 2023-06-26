#include <stdio.h>

int main() {

int idade_dias, dias, meses, anos;

printf("Digite a sua idade em anos: ");
scanf("%d", &anos);
printf("Digite a sua idade em meses: ");
scanf("%d", &meses);
printf("Digite a sua idade em dias: ");
scanf("%d", &dias);

idade_dias = (anos * 365) + (meses * 30) + dias;

printf("Sua idade em dias: %d", &idade_dias);

return 0;	
}
