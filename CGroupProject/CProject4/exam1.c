#include <stdio.h>
//while �ݺ���(������ �����ϴ� ����)
int main() {

	int nInput=0;
	scanf_s("%d", &nInput);
	
	while (nInput>0) {
		printf("%dth printf()\n", nInput);
		nInput = nInput - 1; // nInput--;
	}


	return 0;
}