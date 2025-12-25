#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned long long graos = 1;

	for(int i = 1; i <64; i++){
		graos *= 2;
	}
	printf("O monge recebeu %llu graos de trigo\n", graos);
	return 0;
}