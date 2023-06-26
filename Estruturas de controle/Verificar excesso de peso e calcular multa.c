#include <stdio.h>


int main() {
	float P, E, M;
	
	printf("Digite o peso dos peixes:");
	scanf("%f", &P);
	
	if (P < 50){
		printf("Nao houve excesso");
	}else{
		E = P - 50;
		M = E * 4;
		printf("Havera multa no valor de: %.2f", M);
		}
	
	
	return 0;
}
	

