#include <stdio.h>

int main() {
	int i, sum=0;

	/*do {
	printf("����� �Է��ϼ��� :");
	scanf_s("%d", &i);
	sum = sum + i;
	printf("���ݱ��� �Էµ� ���� ��: %d\n", sum);
	} while (i >= 0);
	*/

	printf("����� �Է��ϼ��� :");
	scanf_s("%d", &i);
	while (i >= 0){
		sum = sum + i;
		printf("���ݱ��� �Էµ� ���� ��: %d\n", sum);
		printf("����� �Է��ϼ��� :");
		scanf_s("%d", &i);
	} 

	return 0;
}