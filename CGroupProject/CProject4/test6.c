#include <stdio.h>

int main() {
	int i;
	int age;
	int sum = 0;

	for (i = 1; i < 6; i++) {
		printf("%d. ���̸� �Է��ϼ��� :",i);
		scanf_s("%d", &age);
		sum = sum + age;
	}


	printf("�ټ����� ��� ���̴� %.1lf�Դϴ�.\n", (double)sum/5);

	return 0;
}