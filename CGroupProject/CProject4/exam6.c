#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;

	a++;//����
	++a;//����

	b = a++; //a���� b���� ���� ��, a����
	printf("%d\n", b); //a=3, b=2
	b = ++a; //a�� ���� ��, b���� ����
	printf("%d\n", b); //a=4, b=4


	return 0;
}