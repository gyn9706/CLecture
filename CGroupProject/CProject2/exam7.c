#include <stdio.h>

int main() {
	unsigned char ch;
	double num1 = 245; //245.0
	int num2 = 3.1415;
	int num3 = 129;
	ch = num3; //char: -128~127 unsigned char 0~255, 범위오버시 회전함! 128입력 -> -128출력 

	printf("정수 245를 실수로 : %lf\n", num1);
	printf("실수 3.1415를 정수로 : %d\n", num2);
	printf("큰 정수 129를 작은 정수로 : %d\n", ch);

	return 0;
}