#include <stdio.h>

	main(){
	int i;
	
	for(i = 1; i <= 100; i++){
		printf("%d ", i);
		
		if(i % 10 == 0){
			printf("- Multiplo de 10");
		}
		   printf("\n");
	}	
}
