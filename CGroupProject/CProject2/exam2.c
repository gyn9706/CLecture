#include <stdio.h>

int main() {
	char ch = 'A';
	printf("literal int size :%d\n", sizeof(7));
	printf("literal double size :%d\n", sizeof(7.14));
	printf("literal char size :%d\n", sizeof('A'));//��ǻ�ʹ� ����A�ƴ� �ƽ�Ű�ڵ�� ó����
	printf("literal char size :%d\n", sizeof(ch));

	return 0;
}