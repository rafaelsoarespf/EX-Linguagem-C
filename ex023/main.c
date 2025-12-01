
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int opcoes ;
	float valor1, valor2;
	do{
		printf("\n=-=-=-=-=-=-=-=-=-=-=-=-\n CALCULADORA\n");
		printf("1 - Somar\n");
		printf("2 - Subtrair\n");
		printf("3 - Multiplicar\n");
		printf("4 - Dividir\n");
		printf("0 - Sair\n");
		printf("Escolha uma das opcoes acima:");
		scanf("%d", &opcoes);

		if (opcoes == 0) {
			printf("Saindo do programa...");
			return 0;
		}

		printf("Digite o primeiro valor: ");
		scanf("%f", &valor1);

		do{
			printf("Digite o segundo valor: ");
			scanf("%f", &valor2);
			if(opcoes == 4 && valor2 == 0)
				printf("Dividendo não pode ser 0, digite um novo valor!!!");
		}while(opcoes == 4 && valor2 == 0);

		switch(opcoes){
		  case 1:
			printf("%f + %f = %f\n", valor1, valor2, valor1 + valor2);
			break;
		  case 2:
			printf("%f - %f = %f\n", valor1, valor2, valor1 - valor2);
			break;
		  case 3:
			printf("%f * %f = %f\n", valor1, valor2, valor1 * valor2);
			break;
		  case 4:
			printf("%f / %f = %f\n", valor1, valor2, valor1/valor2);
		}
	}while(opcoes != 0);

    return 0;
}