#include <stdio.h>

int main() {
	float indice_poluicao;
	
	printf("Digite o indice de poluicao: ");
	scanf("%f", &indice_poluicao);
	
	if(indice_poluicao >= 0,5){
		printf("Todos os grupos devem encerrar as atividades");
	}
	else if(indice_poluicao >= 0,4){
		printf("As industrias do primeiro grupo e segundo  devem encerrar as atividades");
	}
	else if(indice_poluicao >= 0,3){
		printf("As empresas do primeiro grupo devem encerrar as atividades");
	}
	else if(indice_poluicao >= 0,25){
		printf("O indice esta acima do aceitavel");
	}
	else{
		printf("O indice esta dentro do aceitavel");
	}	
	
	return 0;
}
