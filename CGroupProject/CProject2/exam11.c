#include <stdio.h>

int main() {
	int employed; //취업자(160a명)
	int graduation; //졸업자(245명)
	double percentage; //취업률

	printf("취업자와 졸업자를 입력해주세요. :");
	scanf_s("%d%d", &employed, &graduation);

	percentage = ((double)employed / graduation) * 100; //강제형변환으로 임시로 double만들어줌
	printf("취업률은 %.2lf%%입니다.", percentage); //%출력시 %% 

	return 0;
}