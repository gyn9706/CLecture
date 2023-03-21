#include <stdio.h>

int main() {
	char bltp;

	printf("혈액형을 입력하세요 :");
	scanf_s("%c",&bltp,1); //AB형제외
	printf("당신의 혈액형은 %c입니다.\n", bltp );
}