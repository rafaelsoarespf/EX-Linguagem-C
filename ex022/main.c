/*
 * Leia um valor inteiro N.Apresente o quadrado de cada um dos valores pares, de 1 até N,
 * inclusive N, se for o caso.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n; // declarando variável - senha que recebe 123456

	printf("Digite um numero: ");
	scanf("%d", &n);

	printf("=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("QUADRADO DOS NUMEROS PARES\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-\n");

	for(int i = 0; i<= n; i+=2){
		printf(" %5d ", i*i);
	}

	return 0;
}