#include <stdio.h>

int add(int nA, int nB) {
	int nResult = 0;
	nResult = nA + nB;
	printf("%d\n", nResult); //7
	return nResult; //ȣ���� ������ ����
}

void main() {
	int nResult=0;
	nResult = add(3, 4) +10;
	printf("%d\n", nResult); //17
	
	//return 0;
}