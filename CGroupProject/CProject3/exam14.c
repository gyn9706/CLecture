#include <stdio.h>

int main() {
	int lot;

	printf("��÷ ��ȣ�� �Է��ϼ��� :");
	scanf_s("%d", &lot); //1,2,3,4

	//switch ~ case
	switch (lot) {
	case 1:
		printf("�輭��");
		break;
	case 2:
		printf("ȫ����");
		break;
	case 3:
		printf("�Ȼ��");
		break;
	default: //�� ��
		printf("��÷�ڰ� �����ϴ�");
	}

	return 0;
}