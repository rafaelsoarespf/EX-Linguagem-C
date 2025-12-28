#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float alturaChico = 1.5;
	float alturaZe = 1.1;
	float crescimentoChico = 0.02; //crescimento do Chico em 1 ano
	float crescimentoZe = 0.03;    //crescimento do Ze em 1 ano
	int anos=0;

	while(alturaZe < alturaChico){
		alturaChico += crescimentoChico;
		alturaZe += crescimentoZe;
		anos++;
	}
	printf("Serao necessarios %d anos para Ze ultrapassar Chico", anos);
	return 0;
}