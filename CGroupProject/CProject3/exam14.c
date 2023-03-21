#include <stdio.h>

int main() {
	int lot;

	printf("당첨 번호를 입력하세요 :");
	scanf_s("%d", &lot); //1,2,3,4

	//switch ~ case
	switch (lot) {
	case 1:
		printf("김서방");
		break;
	case 2:
		printf("홍가네");
		break;
	case 3:
		printf("안산댁");
		break;
	default: //그 외
		printf("당첨자가 없습니다");
	}

	return 0;
}