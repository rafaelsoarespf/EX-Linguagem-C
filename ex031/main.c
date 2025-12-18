#include <stdio.h>
#include <stdlib.h>

int main(void) {
	for (int i = 1; i <= 10; i++){
		for (int i2 = 2; i2 <= 10; i2++){
			i % i2 == 0 ? printf("Numero %d divisivel por %d\n", i, i2) : 0;
		}
		printf("-=-=-=-=-=-=-=-=-=-\n");
	}
	return 0;
}