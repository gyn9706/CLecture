#include <stdio.h>

int main() {
	char fruit[80] = "apple";
	char* strp = "banana";
	int len;

	len = strlen(fruit); //null ����
	printf("���ڿ��� ���� :%d\n", len);

	len = strlen(strp); //null����
	printf("���ڿ��� ���� :%d\n", len);
	
	return 0;
}