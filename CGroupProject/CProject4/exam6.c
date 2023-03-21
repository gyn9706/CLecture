#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;

	a++;//후위
	++a;//전위

	b = a++; //a값을 b에게 대입 후, a증가
	printf("%d\n", b); //a=3, b=2
	b = ++a; //a값 증가 후, b에게 대입
	printf("%d\n", b); //a=4, b=4


	return 0;
}