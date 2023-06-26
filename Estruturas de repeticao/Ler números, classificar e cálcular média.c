#include <stdio.h>

    main(){
	int i, num, maior, menor;
	float media;
	
	for(i=0; i<=10; i++){
		do {
        	printf("Digite o valor %d: ", i);
            scanf("%d", &num);

            if (num <= 0)
                printf("Valor invalido. Digite um numero inteiro e positivo.\n");
        } while (num <= 0);

            if (i == 1) {
            maior = num;
            menor = num;
        } else {
            if (num > maior)
                maior = num;
            if (num < menor)
                menor = num;
        }
	}
	media = num * num / 2;
	printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Media: %.2f\n", media);
}
