#include <stdio.h>

int main() {
	int num1, num2;
	//double div;

	printf("�� ������ �Է��ϼ��� :");
	scanf_s("%d%d", &num1, &num2);
	//div = (double)num1 / num2;
	//printf("������ ������� \"%d / %d = %lf\"�Դϴ�.",num1,num2,div);

	printf("������ ������� \"%d / %d = %lf\"�Դϴ�.", num1, num2, (double)num1 / num2);

	return 0;
}