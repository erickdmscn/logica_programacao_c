#include <stdio.h>

int main(){
	
	float custo_de_fabrica, porcentagem_distribuidor, porcentagem_imposto, valor_total;
	
	printf("Digite o valor do carro em fabrica:"); 
	scanf("%f", &custo_de_fabrica);
	
	porcentagem_distribuidor = custo_de_fabrica * 28 / 100;
	
	porcentagem_imposto = custo_de_fabrica * 45 / 100;
	
	valor_total = custo_de_fabrica + porcentagem_distribuidor + porcentagem_imposto;
	
	printf("O valor total:%.2f", valor_total);
	
	return 0;

}
