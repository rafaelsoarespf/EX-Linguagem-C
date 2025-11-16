#include <stdio.h>
#include <stdlib.h>
/*
    Crie um programa que permita ao usuário escolher entre fazer a
    conversão de Real para Dólar ou de Dólar para Real. Utilize como
    taxa de câmbio $1 igual a R$5.30.
 */

int main(void) {
    float valorDolar = 5.30; // variavel com o valor do dollar - 5.30
    float valor; // variavel que recebe o valor de leiruta
    int opcoes; // variavel que recebe o valor 1 ou 2, no menu

    printf("Digite um valor:");
    scanf("%f", &valor);

    do {
        printf("Digite 1 para converter de DOLAR para REAL \n");
        printf("Digite 2 para converter de REAL para DOLAR \n");
        scanf("%d", &opcoes);


        if (opcoes == 1) {
            //converte dolar para real
            printf("O valor em dollar %.2f convertido para real fica %.2f ", valor, valor * valorDolar);
        }else if (opcoes == 2) {
            //converte real para dollar
            printf("O valor em real %.2f convertido para dollar fica %.2f ", valor, valor * valorDolar);
        }else {
            printf("Opcao invalida!!! \n\n");
        }
    }while (opcoes != 1 && opcoes != 2 );

    return 0;
}