#include <stdio.h>

int main() {
	int nData = 10;
	int nNewData = 20;
	int nResult = 10;

	printf("%d\n", nData == nResult || nData>nNewData); //1 or 0 == 1 �����ϳ����̸� ��
	printf("%d\n", nData != nResult && nData<nNewData); //0 and 1 == 0 �Ѵ� ���϶��� ��
	printf("%d\n", nData >= nResult && ++nNewData); //1 and 1 == 1 �Ѵ� ���϶� ��
	printf("%d\n", nNewData);//20�����ϳ����� 21

	return 0;
}