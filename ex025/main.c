#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float dinheiro = 0.01; // declarando variáveis
	int i; // declarando contador

	printf("=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("CALCULANDO...\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-\n");

	// verificando valor do dinheiro nos 30 dias
	for(i == 0; i<= 30; i++){
		printf("Valor do dia %d : %.2f\n", i, dinheiro);
		dinheiro += dinheiro;
	}
    return 0;
}