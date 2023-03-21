#include <stdio.h>

int main() {
	int nData = 10;
	int nNewData = 20;
	int nResult = 10;

	printf("%d\n", nData == nResult || nData>nNewData); //1 or 0 == 1 둘중하나참이면 참
	printf("%d\n", nData != nResult && nData<nNewData); //0 and 1 == 0 둘다 참일때만 참
	printf("%d\n", nData >= nResult && ++nNewData); //1 and 1 == 1 둘다 참일때 참
	printf("%d\n", nNewData);//20에서하나증가 21

	return 0;
}