#include <stdio.h>

/*
Vitamin_C �߱����� ������� ���ȣ 1��~9������ 9������
���ȣ�� Ÿ��,���̸� ���� �Է� ���� �� �� �ٿ� ����ϴ� ���α׷�
��, ���ȣ�� ����, Ÿ���� �Ǽ���, ���̴� ���������� ó��
*/

int main() {
	char number;
	double batting_avg;
	int age;
	char name[80], position[80];

	printf("���ȣ�� �Է��ϼ��� :");
	scanf_s("%c", &number, 1);
	printf("�̸��� �Է��ϼ��� :");
	scanf_s("%s", name, 80);
	printf("�������� �Է��ϼ��� :");
	scanf_s("%s", position, 80);

	printf("Ÿ���� �Է��ϼ��� :");
	scanf_s("%lf", &batting_avg);
	printf("���̸� �Է��ϼ��� :");
	scanf_s("%d", &age);

	printf("%c�� %s-%s Ÿ���� %lf�̰� ���̴� %d���Դϴ�.\n", number, name, position, batting_avg, age);

	return 0;
}
