#include <stdio.h>

void exchange();
int a, b; //공용!

int main() {
	printf("정수값 두 개를 입력하세요 :");
	scanf_s("%d%d", &a, &b);
	exchange(); // a,b가 전역변수이기때문에 가능!
	printf("a : %d, b : %d\n", a, b);


	return 0;
}

void exchange() {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
