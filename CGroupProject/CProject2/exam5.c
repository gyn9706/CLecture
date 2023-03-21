#include <stdio.h>

int main() {
	//string(문자열이란 뜻)
	char subway[80]; // 영문자기준 79자까지 가능

	printf("역 이름을 입력하세요 :");
	scanf_s("%s",subway,80); //배열은 &안붙임!

	printf("이번에 정차할 역은 %s역입니다.\n", subway);

	return 0;
}