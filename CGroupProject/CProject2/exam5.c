#include <stdio.h>

int main() {
	//string(���ڿ��̶� ��)
	char subway[80]; // �����ڱ��� 79�ڱ��� ����

	printf("�� �̸��� �Է��ϼ��� :");
	scanf_s("%s",subway,80); //�迭�� &�Ⱥ���!

	printf("�̹��� ������ ���� %s���Դϴ�.\n", subway);

	return 0;
}