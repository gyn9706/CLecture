#include <stdio.h>
int i =0, j=0; //i За j ї­
int main() {
	while (i < 5) {
		while (j < 4) {
			printf("*\t");
			j++;
		}
		putchar('\n'); //printf("\n");
		i++;
		j = 0;
	}
	return 0;
}