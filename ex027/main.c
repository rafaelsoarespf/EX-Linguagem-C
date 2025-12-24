#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float alturaMedia = 0, alturaAluno = 0;
    int idadeMedia = 0, idadeAluno = 0;
    int contadorIdade = 0, contadorAltura = 0;
    int quantAluno = 45;


    for(int i=0; i < quantAluno; i++){
        printf("Digite a IDADE e ALTURA, respectivamente, do aluno %d: ", i+1);
        scanf("%d%f", &idadeAluno, &alturaAluno );

        if(alturaAluno < 1.70){
            idadeMedia += idadeAluno;
            contadorIdade++;
        }
        if(idadeAluno > 20){
            alturaMedia += alturaAluno;
            contadorAltura++;
        }
    }

    printf("=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("CALCULANDO...\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-\n");

    // verificando valor do dinheiro nos 30 dias
    printf("A idade media dos alunos com menos de 1.70m e de: %d anos\n", idadeMedia/contadorIdade);
    printf("A altura media dos alunos com mais de 20 anos e de: %.2f anos", (alturaMedia/contadorAltura));

    return 0;
}