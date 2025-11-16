/*Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char letra; // declarando variável - character

    //leitura do character
    printf("Digite uma letra e te direi se e uma vogal ou nao:");
    scanf("%c", &letra);

    //imprimindo resultados
    printf("--------------------------------------- \n");
    printf("Analizando...\n");
    printf("--------------------------------------- \n");

    letra == 'a' || letra == 'e' || letra == 'i' ||  letra == 'o' || letra == 'u' ? printf("E uma VOGAL!!!") :
      printf("NAO e uma VOGAL!!!");

    return 0;
}