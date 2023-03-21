#include <stdio.h>

int main() {
	int a;
	int *ap = &a; //a의 시작주소를 ap에 저장

	printf("ap자체에 저장된 값 : %x\n", ap); //ap에 저장된 a의 시작주소 출력
	printf("ap자체에 주소값 : %x\n", &ap); // ap의 시작주소 출력

	return 0;
}
