#include <stdio.h>

int main() {
	int nData = 10;
	int* pnData = &nData;

	printf("%d, %d\n", nData, *pnData); //10 == pn俊 历厘等 n林家啊 啊府虐绰 蔼
	printf("%p, %p\n", &nData, pnData); //n狼林家 == pn俊 历厘等 n林家 (%p : %x焊促 犬厘)

	*pnData = 20;
	printf("%d\n", nData); //20
	printf("%p\n", pnData); //nData 林家
	printf("%d\n", *pnData); //20


	return 0;
}