#include <stdio.h>

int main() {
	//���� �迭
	//int anData[4]; //��� 1
	//anData[0] = 1, anData[1] = 2, anData[2] = 3, anData[3] = 4;
	
	int anData[4] = { 1,2,3,4 }; //��� 2
	int anData2[4] = { 1,2 }; //���°� 0
	int i;

	for (i = 0; i < 4; i++) {
		printf("%d\n", anData[i]);
	}

	for (i = 0; i < 4; i++) {
		printf("%d\n", anData2[i]);
	}

	return 0;
}