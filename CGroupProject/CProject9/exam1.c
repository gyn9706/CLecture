#include <stdio.h>

int main() {

	//���ڿ��� �迭�� ���·� �����Ǿ� �ִ�
	char str[80] = "dream";
	int count = 0;
	int i = 0;

	/*
	for (i = 0; str[i] != '\0'; i++) {
		count++;
	}
	*/

	while (str[i] != '\0') {
		count++;
		i++;
	}

	printf("�迭�� ����� ���ڿ��� ���� : %d\n", count);


	return 0;
}

