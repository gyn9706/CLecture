#include <stdio.h>

int main() {
	int employed; //�����(160a��)
	int graduation; //������(245��)
	double percentage; //�����

	printf("����ڿ� �����ڸ� �Է����ּ���. :");
	scanf_s("%d%d", &employed, &graduation);

	percentage = ((double)employed / graduation) * 100; //��������ȯ���� �ӽ÷� double�������
	printf("������� %.2lf%%�Դϴ�.", percentage); //%��½� %% 

	return 0;
}