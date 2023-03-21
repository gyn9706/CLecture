#include <stdio.h>

double get_item(double*);

int main() {
	double ary[] = { 0.1, 0.3, 0.5, 0.7, 0.9 };
	double res;

	res = get_item(ary);
	printf("ù��° ȣ���� �� : %.1lf\n", res); //0.1

	res = get_item(ary);
	printf("�ι�° ȣ���� �� : %.1lf\n", res); //0.3

	return 0;
}

double get_item(double* ap) {
	static int i = 0; //�Լ��� ��������� static������ �����
	double temp;
	
	temp = *(ap+i); //�����ͺ��� ap�� ����Ű�� ary�� ������� ��ġ �ű涧 *(ap+i)
	i++;

	return temp;
}