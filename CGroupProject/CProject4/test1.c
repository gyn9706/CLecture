#include <stdio.h>

int main() {
	int i, sum=0;

	/*do {
	printf("양수를 입력하세요 :");
	scanf_s("%d", &i);
	sum = sum + i;
	printf("지금까지 입력된 값의 합: %d\n", sum);
	} while (i >= 0);
	*/

	printf("양수를 입력하세요 :");
	scanf_s("%d", &i);
	while (i >= 0){
		sum = sum + i;
		printf("지금까지 입력된 값의 합: %d\n", sum);
		printf("양수를 입력하세요 :");
		scanf_s("%d", &i);
	} 

	return 0;
}