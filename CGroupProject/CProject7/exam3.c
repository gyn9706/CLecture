#include <stdio.h>

int main() {
	int a = 10;
	int *ap=&a;

	printf("%d\n", a); //10
	printf("%x\n", &a); //a�����ּ�
	printf("%x\n", ap); //ap����� a�����ּ�
	printf("%x\n", &ap); //ap�����ּ�
	printf("%d\n", *ap); //10 ap�� ����� 'a�ּ�'�� ����� ���� ���
	
	return 0;
}

