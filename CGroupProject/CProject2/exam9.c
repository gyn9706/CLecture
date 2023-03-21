#include <stdio.h>

int main() {
	int num1 = 3; //int형 변수선언: 4byte 메모리 할당!! 절대안바뀜
	int num2 = 4;
	double divResult;

	divResult = (double)num1 / num2;
	printf("나눗셈 결과 : %lf\n", divResult); //0.75
	return 0;
}