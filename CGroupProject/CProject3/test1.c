#include <stdio.h>
/*학점 계산
평균 점수는 실수값으로 입력
평균이 90점 이상은 A, 90점 미만 80점 이상은 B,80점 미만 70점이상C, 그외 F
*/

int main() {
	double avg;
	char grade;

	printf("평균 점수? :");
	scanf_s("%lf", &avg);


		if (avg >= 90) grade = 'A';
		else if (avg >= 80) grade = 'B';
		else if (avg >= 70) grade = 'C';
		else grade = 'F';
	
		printf("학점: %c", grade);
	
	return 0;
}