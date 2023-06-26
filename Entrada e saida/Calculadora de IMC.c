#include <stdio.h>

int main(){
	float peso, altura, imc;
	
	printf("Digite o seu peso:\n");
	scanf("%f", &peso);
	printf("Digite a sua altura:\n");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf("Valor do seu IMC: %.2f", imc);
	
	return 0;
}
