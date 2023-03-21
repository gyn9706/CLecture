#include <stdio.h>

int main() {
	char ch=0;
	int num = 0;
	int adr = 0;

	//&:주소연산자
	printf("ch의 포인터 : %x\n", &ch); //ch메모리의 시작주소 출력
	printf("num의 포인터 : %x\n", &num);


	adr = &num;
	printf("adr=%x", adr);

	return 0;
}