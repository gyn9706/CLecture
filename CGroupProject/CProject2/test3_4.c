#include <stdio.h>

/*���� ���� ���� �� ������ ������ �Է¹޾� ������ ��� ���� �� ����ϴ� ���α׷�*/

int main() {
	int history;
	int letters;
	int art;
	int total;
	double avg;

	printf("����, ����, ���� ������ �Է��ϼ��� :");
	scanf_s("%d%d%d", &history, &letters, &art);
	total = history + letters + art;
	avg = (double)total / 3;
	printf("����:%d ���:%lf\n", total, avg);

	return 0;
}