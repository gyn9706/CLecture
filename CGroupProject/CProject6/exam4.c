#include <stdio.h>

int main() {
	int nums[5];
	int max;
	int i;

	printf("다섯 개의 숫자를 입력하세요 :");
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
	printf("가장 큰 값은 :%d입니다.\n", max);

	return 0;
}