/*	Elabore um programa em C para ler do teclado um valor inteiro entre 1 e 10 e
	apresentar a tabuada.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num; // declarando variável - num

    //leitura do número
    printf("Digite um valor:");
    scanf("%d", &num);

		//imprimindo tabuada
    printf("--------------------------------- \n");
    printf("|         TABUADA DO %d          |\n", num);
    printf("--------------------------------- \n");
    for(int i=0; i <= 10; i++)
        printf("%d * %d = %d\n", num, i, num*i);
    return 0;
}