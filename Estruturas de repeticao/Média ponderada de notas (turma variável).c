#include <stdio.h>

	main() {
	char aluno [15]; 
	float nota1, nota2, media_ponderada;
	int quantidade_alunos = 0, x = 1;
	
	while (x == 1) {
	printf("Digite o seu nome: ");
	scanf("%s", &aluno);
	printf("Digite a sua primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a sua segunda nota: ");
	scanf("%f", &nota2);
	
	media_ponderada = (nota1 + nota2) / 2;
	
	printf("A media de %s foi:%.2f\n", &aluno, media_ponderada);
	quantidade_alunos++;
	
	printf("[1] Continuar [0] Sair\n");
    scanf("%d", &x);			
	}
}
