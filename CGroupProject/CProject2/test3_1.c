#include <stdio.h>

/*
전기 사용량을 kw단위로 입력하면 사용요금을 계산해주는 프로그램
기본요금: 660원
kw당 사용요금: 88.5원
전체요금: 기본요금+전기사용량*kw당 사용요금
세금: 전체요금의 9%
최종 사용요금=전체요금+세금
*/

int main() {
	int amount;
	double price, tax, total;
	char coment[31] = "전기 사용량을 입력하세요(kw) :";

	printf("%s",coment);
	scanf_s("%d", &amount);
	price = 660 + (amount * 88.5);
	tax = price * 0.09;
	total = price + tax;

	printf("전기 사용요금은 %lf원입니다.\n", total);


	return 0;
}