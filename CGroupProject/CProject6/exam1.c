#include <stdio.h>

int main() {
	int arr[5]; //배열 선언(연속)
	int sum = 0;
	int i;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;

	printf("%d ", arr[0]);
	printf("%d ", arr[1]);
	printf("%d ", arr[2]);
	printf("%d ", arr[3]);
	printf("%d ", arr[4]);
	printf("\n");
	//배열 요소에 있는 값을 출력
	for (i = 0; i < 5; i++) // 0,1,2,3,4 i=제어변수, 인덱스
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
	// 배열 요소에 있는 값을 더하여 합을 출력
	for (i = 0; i < 5; i++) {
		sum += arr[i];
	}
	printf("%d ", sum);

	return 0;
}