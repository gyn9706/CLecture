#include <stdio.h>

int main() {
	int a;
	int *ap = &a; //a�� �����ּҸ� ap�� ����

	printf("ap��ü�� ����� �� : %x\n", ap); //ap�� ����� a�� �����ּ� ���
	printf("ap��ü�� �ּҰ� : %x\n", &ap); // ap�� �����ּ� ���

	return 0;
}
