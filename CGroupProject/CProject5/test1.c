#include <stdio.h>

int total(int, int, int); //함수선언
double average(int tot);


int main() {
	int kor, eng, mat;
	int tot;
	double avg;

	printf("세 과목의 점수를 입력하세요 :");
	scanf_s("%d%d%d", &kor, &eng, &mat);
	tot = total(kor, eng, mat);
	avg = average(tot);
	printf("총점:%d, 평균:%.1lf\n", tot, avg);
	
	return 0;
}

int total(int kor, int eng, int mat) {
	int tot;
	tot = kor + eng + mat;
	return tot;
}

double average(int tot) {
	double avg;
	avg = tot / 3.0;

	return avg;
}
