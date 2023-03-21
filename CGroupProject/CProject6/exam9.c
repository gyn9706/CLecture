#include <stdio.h>

int main() {
	char str[50] = "I like C programming";
	// null 문자 자동으로 채워진다
	char str2[10];
	printf("string:%s\n", str);
	printf("string:%c\n", str[19]); //g
	printf("string:%c\n", str[20]); //널문자
	printf("string:%c\n", str[21]); //str[50]에서 g뒤에 나머지 다 널문자로 채워짐

	printf("string:%s\n", str2); //str2 초기화안됐으므로 쓰레기값나옴
	
	str[8] = '\0'; //C다음 null주면 
	printf("string:%s\n", str); //I like C까지 출력함. 문자열끝으로 인식.

	return 0;
}