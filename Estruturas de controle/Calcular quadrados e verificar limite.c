#include <stdio.h>

int main() {
	float num1, num2, num3, num4, quad1, quad2, quad3, quad4;

   printf("Digite o primeiro n�mero: ");
   scanf("%f", &num1);
   printf("Digite o segundo n�mero: ");
   scanf("%f", &num2);
   printf("Digite o terceiro n�mero: ");
   scanf("%f", &num3);
   printf("Digite o quarto n�mero: ");
   scanf("%f", &num4);

	quad1 = num1 * num1;
    quad2 = num2 * num2;
    quad3 = num3 * num3;
    quad4 = num4 * num4;

   
   if (quad3 >= 100) {
      printf("O quadrado do terceiro n�mero (%.2f) � maior ou igual a 100\n", num3);
   } else {
      printf("Valores lidos e seus quadrados:\n");
      printf("%.2f -> %.2f\n", num1, quad1);
      printf("%.2f -> %.2f\n", num2, quad2);
      printf("%.2f -> %.2f\n", num3, quad3);
      printf("%.2f -> %.2f\n", num4, quad4);
   }

   return 0;
}

