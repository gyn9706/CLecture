#include <stdio.h>
//while 반복문(조건을 만족하는 동안)
int main() {

	int nInput=0;
	scanf_s("%d", &nInput);
	
	while (nInput>0) {
		printf("%dth printf()\n", nInput);
		nInput = nInput - 1; // nInput--;
	}


	return 0;
}