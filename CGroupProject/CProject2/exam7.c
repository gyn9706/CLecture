#include <stdio.h>

int main() {
	unsigned char ch;
	double num1 = 245; //245.0
	int num2 = 3.1415;
	int num3 = 129;
	ch = num3; //char: -128~127 unsigned char 0~255, ���������� ȸ����! 128�Է� -> -128��� 

	printf("���� 245�� �Ǽ��� : %lf\n", num1);
	printf("�Ǽ� 3.1415�� ������ : %d\n", num2);
	printf("ū ���� 129�� ���� ������ : %d\n", ch);

	return 0;
}