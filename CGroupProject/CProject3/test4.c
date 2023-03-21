#include <stdio.h>

int main() {
	double a, b, res=0;
	char op;

	printf("수식을 입력하세요 :");
	scanf_s("%lf%c%lf", &a, &op,1, &b);
	/*scanf_s("%lf", &a, 1);
	scanf_s("%c", &op, 1);
	scanf_s("%lf", &b, 1);*/

	switch (op) {
	case '+':
		res = a + b;
		break;
	case '-':
		res = a - b;
		break;
	case '*':
		res = a * b;
		break;
	case '/':
		res = a / b;
	}

	printf("연산결과는 %.2lf입니다.", res);

	return 0;
}