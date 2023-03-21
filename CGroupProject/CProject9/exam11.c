#include <stdio.h>

int main() {
	char str[80];
	printf("문자열을 입력하세요 :");
	//scanf_s("%s", str,80);
	//빈 칸이 포함된 문자열은 입력할 수 없다.
	gets(str); // get string
	//printf("입력된 문자열 :%s\n", str);
	puts(str);

	return 0;
}