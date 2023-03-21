#include <stdio.h>

int main() {
	double a = 1.3;
	double b = 1.7;
	double* ap, * bp; //가리키는 곳의 타입을 써줌
	double temp;

	ap = &a;
	bp = &b;

	printf("바꾸기 전의 a,b의 값: %.1lf %.1lf\n",a,b);
	
	temp = *ap;
	*ap = *bp;
	*bp = temp;

	printf("바꾼 후의 a,b의 값: %.1lf %.1lf\n", a, b);

	return 0;
}