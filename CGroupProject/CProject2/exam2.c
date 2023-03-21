#include <stdio.h>

int main() {
	char ch = 'A';
	printf("literal int size :%d\n", sizeof(7));
	printf("literal double size :%d\n", sizeof(7.14));
	printf("literal char size :%d\n", sizeof('A'));//컴퓨터는 문자A아닌 아스키코드로 처리함
	printf("literal char size :%d\n", sizeof(ch));

	return 0;
}