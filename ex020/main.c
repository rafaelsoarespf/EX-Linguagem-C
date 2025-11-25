/*
* Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e
imprima a média semestral. Faça com que o programa só aceite notas válidas (uma nota válida
deve pertencer entre o intervalo de 0 a 10). Cada nota deve ser validada separadamente.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float nota1, nota2; // declarando variável - senha que recebe 123456
	do{
		printf("Digite a nota 1: ");
		scanf("%f", &nota1);
		nota1 < 0 || nota1 > 10 ? printf("Valor invalido!!!\n") : 0;
	}while( nota1 < 0 || nota1 > 10 );

	do{
		printf("Digite a nota 2: ");
		scanf("%f", &nota2);
		nota2 < 0 || nota2 > 10 ? printf("Valor invalido!!!\n") : 0;
	}while(nota2 < 0 || nota2 > 10 );

	printf("Media semestral = %f", (nota1+nota2)/2);
    return 0;
}