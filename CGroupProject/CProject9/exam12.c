#include <stdio.h>

int main() {
	char str[80];
	int ch;
	int i=0;

	printf("문자열을 입력하세요 :");
	
	/*
	for (i = 0; i < 4; i++) {
		ch = getchar(); //하나의 문자, 아스키코드저장이라 int가능, null안붙여줌
		str[i] = ch;
	}
	str[i] = '\0'; //null문자 추가해줘야함! 반복문 빠져나올 때 i=4
	//printf("%s", str);
	*/

	while (1) {
		ch = getchar();
		if (ch == '\n') break;
		str[i] = ch;
		i++;
	}str[i] = '\0';

	i = 0;
	printf("입력된 문자열 : ");
	while (str[i] != '\0') {
		putchar(str[i]);
		i++;
	}

	/*
	for (i = 0; i < 4; i++) {
		putchar(str[i]);
	}
	*/

	return 0;
}