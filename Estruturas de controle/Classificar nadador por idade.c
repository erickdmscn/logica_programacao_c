#include <stdio.h>

int main() {
	int idade_nadador;
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade_nadador);
	
	if(idade_nadador >= 18){
		printf("Adulto");
	}else if(idade_nadador >= 14){
		printf("Juvenil B");
	}else if(idade_nadador >= 12){
		printf("Juvenil A");
	}else if(idade_nadador >= 8){
		printf("Infantil B");
	}else if(idade_nadador >= 5){
		printf("Infantil A");
	}else{
		printf("Ainda nao pode participar");
	}
	
	return 0;
}
