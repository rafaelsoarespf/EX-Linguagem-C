/*Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês.
Utilize para isso a estrutura de seleção switch. */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int mesNum; // declarando variável - número do mês

    //leitura do mês
    printf("Digite o numero que corresponde ao mes: ");
    scanf("%d", &mesNum);

    //imprimindo resultados
    printf("--------------------------------------- \n");
    printf("Analizando...\n");
    printf("--------------------------------------- \n");

    switch( mesNum ){
        case 4:
        case 6:
        case 9:
        case 11:
            printf("O mes tem 30 DIAS!!!");
            break;
        case 2:
            printf("O mes tem 28 DIAS!!!");
            break;
        default:
            printf("O mes tem 31 DIAS!!!");
    }
    return 0;
}