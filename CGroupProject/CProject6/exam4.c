#include <stdio.h>

int main() {
	int nums[5];
	int max;
	int i;

	printf("�ټ� ���� ���ڸ� �Է��ϼ��� :");
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &nums[i]);
	}

	max=nums[0];
	for (i = 0; i < 5; i++) {
		max = max < nums[i + 1] ? nums[i + 1]: max;
	}

	/*
		if (max < nums[i + 1])
			max = nums[i + 1];
		else max = max;*/

	//10 30 40 20 50
	printf("���� ū ���� :%d�Դϴ�.\n", max);

	return 0;
}