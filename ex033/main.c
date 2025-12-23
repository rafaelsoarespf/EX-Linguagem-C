#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int  idade, numPessoas, contFeminino=0, maiorIdade = 0;
	int menorIdade = 9999;
	float salario, contSalario =0;
	char sexo;

	printf("Informe a quantidade de pessoas: ");
	scanf("%d", &numPessoas);

	for(int i= 0; i < numPessoas; i++){
		printf("Digite a idade da pessoa %d: ", i+1);
		scanf("%d", &idade);
		idade > maiorIdade ? maiorIdade = idade : 0;
		idade < menorIdade ? menorIdade = idade : 0;

		printf("Digite o salario da pessoa %d: ", i+1);
		scanf("%f", &salario);
		contSalario += salario;

		do{
			printf("Digite o sexo da pessoa %d ( M / F): ", i+1);
			scanf(" %c", &sexo);
			if ((sexo == 'F' || sexo == 'f') && salario <= 2000)
				contFeminino++;
		}while(sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f');
	}

	printf("Media do salario do grupo: %.2f\n", contSalario/numPessoas);
	printf("Maior idade do grupo e de %d e a menor idade e de %d\n", maiorIdade, menorIdade);
	printf("A quantidade de mulheres com salario ate 2000 reais e de %d\n", contFeminino);
	return 0;
}