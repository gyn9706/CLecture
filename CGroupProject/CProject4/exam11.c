#include <stdio.h>

int main() {
	int x , y ;

	//����(��ø) for��
	for (y = 0; y < 5; y++) {
		for (x = 0; x < 4; x++) {
			printf("*\t");
		}
		printf("\n");
	}
	return 0;
}