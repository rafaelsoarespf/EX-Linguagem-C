#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int  x,y;

	do{
		printf("--------------------\n");
		printf("Informe o ponto X: ");
		scanf("%d", &x);

		printf("Informe o ponto Y: ");
		scanf("%d", &y);

		if (x == 0 || y == 0)
			return 0;

		x > 0 && y > 0 ?  printf("primeiro\n") :
			x > 0 ? printf("quarto\n"):
				y > 0 ? printf("segundo\n"):
					 y < 0 ? printf("terceiro\n") : 0;

	}while(1);
}