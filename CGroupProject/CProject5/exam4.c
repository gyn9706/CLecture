#include <stdio.h>

int main() {
	//�������� ��ġ�� ��� ��{}������ �߿���!
	int nData = 10;
	printf("%d\n", nData); //10

	if (nData > 0) {
		int nData = 20;
		printf("%d\n", nData); //20
	}

	printf("%d\n", nData); //10
	
	return 0;
}