#include <stdio.h>

int main() 
{
	int i;
	for (i = 1; i < 10; i++) {
		printf("7 * %d = %d\t",i, 7 * i);
		if (i % 3 == 0) printf("\n");
	}
	return 0;
}