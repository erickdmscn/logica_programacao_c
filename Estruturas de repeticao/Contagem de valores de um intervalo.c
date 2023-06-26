#include <stdio.h>


	 main() {
	int num1, num2;
	
	printf("Digite o primeiro numero");
	scanf("%d", &num1);
	printf("Digite o segundo numero");
	scanf("%d", &num2);
	
	if(num1>num2){
		printf("O primeiro numero e maior");
	}else{
		while (num1 != num2) {
        printf("%d\n", num1++);
	}
	}
}
