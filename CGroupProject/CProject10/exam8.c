#include <stdio.h>
#include<stdlib.h>

int main() {
	int* ip;
	double* dp;
	//int a; a��� �̸��� 4byte¥�� ���� �������.

	//�޸� �����Ҵ� : ���ϰ� �޸� ���� �ʿ��
	ip=(int*)malloc(sizeof(int)); //������ �� �޸� �Ҵ����� �̸��� int*��Ʈ�� ����Ʈ������ �����Ұ�
	dp = (double*)malloc(sizeof(double));

	*ip = 10;
	*dp = 3.4;

	printf("���������� ��� :%d\n", *ip);
	printf("�Ǽ������� ��� :%lf\n", *dp);

	free(ip); // �����Ҵ� ����!
	free(dp); // �����Ҵ� ����!

	return 0;
}