#include <stdio.h>

int main() {

	int a = 10;

	printf("���� ���� : %d\n", (a > 5) && (a <= 15)); //��(1)
	printf("���� ���� : %d\n", (a != 10) || (a == 20)); //����(0)
	printf("���� ���� : %d\n", !((a - 5) >0 ));
	printf("���� ���� : %d\n", -3.4 && (a > 0));


	return 0;
}