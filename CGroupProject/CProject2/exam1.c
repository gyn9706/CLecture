#include <stdio.h>

int main() {
	int bonbong, bonus, total;
	double tax, real_income;

	bonbong = 150;
	bonus = 60;

	total = bonbong + bonus;
	tax = total * 0.09;
	real_income = total - tax;

	printf("이몽룡의 실수입액은 %.2lf만원 입니다\n", real_income);
	return 0;
}