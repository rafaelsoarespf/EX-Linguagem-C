#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela a
    conversão para horas, minutos e segundos.
    Exemplo:
    Entrada: 3672
    Saída: 1:1:12
 */

int main(void) {

    int horas; // declarando variável horas
    int minutos; // declarando variável minutos
    int segundos; // declarando variável segundos


    //leitura dos segundos
    printf("Digite a quantidade total em segundos: \n");
    scanf("%d", &segundos);

    //calculando valor
    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundos = segundos % 60;

    printf("--------------------------------------- \n");
    printf("Calculando...\n");
    printf("--------------------------------------- \n\n");
    printf(" %d:%d:%d \n", horas, minutos, segundos);

    return 0;
}