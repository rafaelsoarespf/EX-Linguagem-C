#include <stdio.h>
#include <stdlib.h>

/*
    Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o
    número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
    sabendo que são descontados 8% para imposto de renda.
 */

int main(void) {

    int diasTrabalhados; //declarando variavel diasTrabalhados
    float valorPorDiaTrabalhado = 45; // declarando variável que irá receber o valor que o encanador recebe por dia trabalhado
    float impostoDeRenda = 0.08; //imposto de renda (8%)
    float valor; // declarando variavel valor(quantidade que deverá ser paga)


    //leitura quantidade de dias trabalhados
    printf("Quantidade de dias trabalhados? \n");
    scanf("%d", &diasTrabalhados);


    //calculando valor
    valor = diasTrabalhados * valorPorDiaTrabalhado;
    valor = valor * (1-impostoDeRenda);

    printf("--------------------------------------- \n");
    printf("Calculando...\n");
    printf("--------------------------------------- \n");
    printf("O encanador vai receber R$ %.2f\n", valor);


    return 0;
}