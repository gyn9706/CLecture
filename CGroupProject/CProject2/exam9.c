#include <stdio.h>

int main() {
	int num1 = 3; //int�� ��������: 4byte �޸� �Ҵ�!! ����ȹٲ�
	int num2 = 4;
	double divResult;

	divResult = (double)num1 / num2;
	printf("������ ��� : %lf\n", divResult); //0.75
	return 0;
}