#include <stdio.h>

int main() {
	int arr[5]; //�迭 ����(����)
	int sum = 0;
	int i;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;

	printf("%d ", arr[0]);
	printf("%d ", arr[1]);
	printf("%d ", arr[2]);
	printf("%d ", arr[3]);
	printf("%d ", arr[4]);
	printf("\n");
	//�迭 ��ҿ� �ִ� ���� ���
	for (i = 0; i < 5; i++) // 0,1,2,3,4 i=�����, �ε���
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
	// �迭 ��ҿ� �ִ� ���� ���Ͽ� ���� ���
	for (i = 0; i < 5; i++) {
		sum += arr[i];
	}
	printf("%d ", sum);

	return 0;
}