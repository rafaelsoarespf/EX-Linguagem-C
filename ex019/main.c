#include <stdio.h>
#include <stdlib.h>

int main(void) {
	for(int i = 1; i<= 1000; i+=2) {
		i == 999 ? printf("%d", i) : printf("%d - ", i);
	}
	return 0;
}