#include <stdio.h>

int main() {

	int a = 10;

	printf("논리곱 연산 : %d\n", (a > 5) && (a <= 15)); //참(1)
	printf("논리합 연산 : %d\n", (a != 10) || (a == 20)); //거짓(0)
	printf("논리곱 연산 : %d\n", !((a - 5) >0 ));
	printf("논리곱 연산 : %d\n", -3.4 && (a > 0));


	return 0;
}