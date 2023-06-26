#include <stdio.h>

int main(){
	
	float num1, num2, num3, num4, media_ponderada;
	
	printf("Digite o primeiro valor:\n");
	scanf("%f", &num1);
	printf("Digite o segundo valor:\n");
	scanf("%f", &num2);
	printf("Digite o terceiro valor:\n");
	scanf("%f", &num3);
	printf("Digite o quarto valor:\n");
	scanf("%f", &num4);
	
	media_ponderada = ((num1 * 1) + (num2 * 2) + (num3 * 3) + (num4 * 4)) / 10;
	
	
	printf("Media ponderada: %.2f", media_ponderada);
}
