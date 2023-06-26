#include <stdio.h>

int main(){
	
	char nome[15] = "";
	char sobrenome [15] = "";
	char nome_completo [50] = "";
	
	printf("Digite o seu nome:\n");
	scanf("%s", nome);
	printf("Digite o seu sobrenome:\n");
	scanf("%s", sobrenome);
	
	printf("%s, %s", sobrenome, nome);
	
	
}

