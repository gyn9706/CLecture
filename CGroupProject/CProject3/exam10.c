#include <stdio.h>

int main() {
	double weight, height;
	double bmi;

	printf("�����Ը� �Է��ϼ���(kg) :");
	scanf_s("%lf", &weight,1);
	printf("Ű�� �Է��ϼ���(cm) :");
	scanf_s("%lf", &height,1);
	height = height / 100;
	bmi = weight / (height * height);
	printf("����� BMI�� : %.1lf�Դϴ�.\n", bmi);

	//bmi <20 :��ü��
	//20~24.9:ǥ��ü��
	//>=25:��ü��
	if (bmi >= 20 && bmi <25) {
		printf("ǥ��ü���Դϴ�\n");
	}else printf("ü�߰����� �ʿ��մϴ�.");

	/*
	if (bmi < 20) {
		printf("��ü��");
	}
	else if(bmi < 25) {
		printf("ǥ��ü��");
	}else printf("��ü��");
	*/

	return 0;
}