#include <stdio.h>

int main() {
	int num;
	//int num2;
	//int num3;
	int num4;

	printf("������ �ϳ��� �Է��ϼ���:");
	scanf_s("%d", &num);
	printf("�Է� ���� ��������%d�Դϴ�\n", num);

	//scanf_s("������ �ϳ��� �Է��ϼ���: %d", &num2);
	//printf("%d", num2);

	/*
	printf("������ �ϳ��� �Է��ϼ���: ");
	scanf_s("%d\n", &num3);
	printf("%d", num3);
	*/

	printf("������ �ΰ��� �Է��ϼ���:");
	scanf_s("%d%d", &num, &num4);
	printf("�Է� ���� �������� %d %d�Դϴ�\n", num, num4);

	return 0;
}