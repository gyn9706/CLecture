#include <stdio.h>

//가정용: 1 ,기본요금 1130원, 127.8/kw, tax=9%
//산업용:2 ,기본요금 660원, 88.5/kw, tax=8%
//교육용:3, 기본요금 370원, 52/kw, tax=5%

int main() {
	int code; //코드 번호
	int amount; //사용량
	double basic=0; //기본요금 
	double price=0; // kw당 요금
	double tax_rate=0; //세금 비율
	double total;
	double tax; //세금

	
	printf("코드번호를 입력하세요(1:가정용, 2:산업용, 3:교육용) :");
	scanf_s("%d", &code);
	printf("전기 사용량을 입력하세요(kw) :");
	scanf_s("%d", &amount);

	switch (code) {
	case 1:
		basic = 1130;
		price = 127.8;
		tax_rate = 0.09;
		break;
	case 2:
		basic = 660;
		price = 88.5;
		tax_rate = 0.08;
		break;
	case 3:
		basic = 370;
		price = 52;
		tax_rate = 0.05;
		break;
	}

	total = basic + price * amount;
	tax = total * tax_rate;
	total = total + tax;
	
	printf("전기 요금은 %.lf원입니다.", total);

	return 0;
}