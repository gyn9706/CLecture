#include <stdio.h>

int main() {
	char* name; //포인터 변수
	name = "Hong gildong"; //문자열의 시작주소를 저장

	printf("이름 : %s\n", name);
	printf("여섯번째 문자 : %c\n", name[5]); //시작주소이므로 배열표현 가능

	return 0;
}