#include <stdio.h>

int main() {
	char name[80]; // = "yena_kim";
	char sex;
	int age;
	double height;

	printf("�̸��� �Է��ϼ��� :");
	scanf_s("%s", name,80 );
	printf("���̸� �Է��ϼ��� :");
	scanf_s("%d", &age);
	printf("������ �Է��ϼ��� :");
	scanf_s(" %c", &sex, 1); //���� or \n �ֱ� - if not, ����ġ�� ���ʹ����� �׳� �Ѿ����. ���͸� ���ڷ� �ν�.
	printf("Ű�� �Է��ϼ��� :");
	scanf_s("%lf", &height);

	printf("�̸�:%s, ����:%c, ����:%d, Ű:%.2lf\n",name,sex,age,height);

	return 0;
}