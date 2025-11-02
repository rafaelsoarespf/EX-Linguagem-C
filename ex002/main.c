#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
    variável auxiliar.
 */

int main(void) {


    int a; //declarando variável a
    int b; //declarando variável b

    //leitura do valor de a
    printf("Digite o valor da variavel a: \n");
    scanf("%d", &a);

    //leitura do valor de b
    printf("Digite o valor da variavel b: \n");
    scanf("%d", &b);

    //invertendo os valores
    a = b+a;
    b = a-b;
    a = -(b-a);

    printf("--------------------------------------- \n");
    printf("Invertendo os valores...\n");
    printf("--------------------------------------- \n");
    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);

    return 0;
}