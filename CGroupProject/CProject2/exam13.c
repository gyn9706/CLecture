#include <stdio.h>

int main() {
	unsigned int num;

	// -2147483648~2147483647
	// 0~4294967295(unsigned int)
	printf("unsigned int���� �ִ밪�� �Է��ϼ��� :");
	scanf_s("%u", &num);

	printf("unsigned int���� ����� ����: %u", num);
	printf("unsigned int���� ����� ����: %d", num);
	return 0;
}