#include <stdio.h>

int main() {
	char str[80];
	printf("���ڿ��� �Է��ϼ��� :");
	//scanf_s("%s", str,80);
	//�� ĭ�� ���Ե� ���ڿ��� �Է��� �� ����.
	gets(str); // get string
	//printf("�Էµ� ���ڿ� :%s\n", str);
	puts(str);

	return 0;
}