#include <stdio.h>

int main() {
	//for�� ����ؼ� 1���� 10������ �� ���ϱ�
	int sum = 0;
	
	for (int i = 1; i <= 10; i++) {
		sum = sum + i;
	}

	printf("1���� 10������ ���� : %d\n", sum);

	return 0;
}