#include <stdio.h>

int main() {
	int nData = 10;
	int* pnData = &nData;

	printf("%d, %d\n", nData, *pnData); //10 == pn�� ����� n�ּҰ� ����Ű�� ��
	printf("%p, %p\n", &nData, pnData); //n���ּ� == pn�� ����� n�ּ� (%p : %x���� Ȯ��)

	*pnData = 20;
	printf("%d\n", nData); //20
	printf("%p\n", pnData); //nData �ּ�
	printf("%d\n", *pnData); //20


	return 0;
}