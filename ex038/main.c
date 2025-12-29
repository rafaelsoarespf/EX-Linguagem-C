#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int quant = 1;

	for(int i=0; i < 10; i++){
		for(int n=0; n<=i;n++){
			printf("*");
		}
		printf("\n");
	}
}