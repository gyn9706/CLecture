#include <stdio.h>

/*역사 문학 예능 세 과목의 점수를 입력받아 총점과 평균 구한 후 출력하는 프로그램*/

int main() {
	int history;
	int letters;
	int art;
	int total;
	double avg;

	printf("역사, 문학, 예능 점수를 입력하세요 :");
	scanf_s("%d%d%d", &history, &letters, &art);
	total = history + letters + art;
	avg = (double)total / 3;
	printf("총점:%d 평균:%lf\n", total, avg);

	return 0;
}